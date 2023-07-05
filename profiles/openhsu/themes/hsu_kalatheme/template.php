<?php
/**
 * @file
 * Primary pre/preprocess functions and alterations.
 */

   // Implements hook_form_FORM_ID_alter to manipulate the search block
   function hsu_kalatheme_form_search_block_form_alter(&$form, &$form_state, $form_id) {
     $form['search_block_form']['#size'] = 40;  // define size of the textfield
     $form['search_block_form']['#attributes']['class'][] = 'searchbox-input';
     $form['actions']['submit']['#attributes']['class'][] = 'searchbox-submit';
     $form['#attributes']['onsubmit'] = "if(this.search_block_form.value=='Search'){ alert('Please enter a search'); return false; }";

     // Alternative (HTML5) placeholder attribute instead of using the javascript
     $form['search_block_form']['#attributes']['placeholder'] = t('Search');
}
/**
 * Implements hook_theme().
 *
 * Theme specific compontents can be namespaced kt_<component>
 * to avoid conflicts with other projects.
 */
function hsu_kalatheme_theme($existing, $type, $theme, $path) {
  return array(
    'hsu_navbar' => array(
      'template' => 'templates/bootstrap/hsu-navbar',
      'variables' => array(
        'main_menu' => NULL,
        'main_menu_expanded' => NULL,
        'secondary_menu' => NULL,
        'site_name' => NULL,
        'front_page' => NULL,
        'site_name' => NULL,
      ),
    ),
  );
}

function hsu_kalatheme_preprocess_html(&$variables) {

  /**
  * loading web fonts and external css
  */
  drupal_add_css('//fonts.googleapis.com/css?family=Lato:300,400,700,300italic,400italic,700italic', array('type' => 'external'));
  drupal_add_css('//use.typekit.net/bju8ezq.css', array('type' => 'external'));

  // add custom css file from theme-settings
  $use_custom_css_file = theme_get_setting('custom_css_file');

  if ( $use_custom_css_file ) {
    drupal_add_css(libraries_get_path('custom-css') . '/' . $use_custom_css_file, array('group' => CSS_THEME));
  }
}

/**
 * Override or insert variables into the page template.
 *
 * Implements template_process_page().
 */
function hsu_kalatheme_preprocess_page(&$variables) {
  // Add Bootstrap JS and stock CSS.
  global $base_url;
  $base = parse_url($base_url);

  // Get a list of all the regions for this theme
  if ( module_exists('block')) {
      foreach (system_region_list($GLOBALS['theme']) as $region_key => $region_name) {

      // Get the content for each region and add it to the $region variable
      if ($blocks = block_get_blocks_by_region($region_key)) {
        $variables['region'][$region_key] = $blocks;
      }
      else {
        $variables['region'][$region_key] = array();
      }
    }
  }

  // Use the CDN if not using libraries.
  if (!kalatheme_use_libraries()) {
    $library = theme_get_setting('bootstrap_library');
    if ($library !== 'none' && !empty($library)) {
      // Add the JS. Note that we have to put Bootstrap after jQuery, but before jQuery UI.
      $url = $base['scheme'] . ":" . KALATHEME_BOOTSTRAP_JS;
      $jquery_ui_library = drupal_get_library('system', 'ui');
      $jquery_ui_js = reset($jquery_ui_library['js']);
      drupal_add_js($url, array(
        'type' => 'external',
        'group' => JS_LIBRARY,
        'weight' => $jquery_ui_js['weight'] - 1,
      ));
      // Add the CSS.
      $css = ($library === 'default') ? KALATHEME_BOOTSTRAP_CSS : kalatheme_get_bootswatch_theme($library)->cssCdn;
      drupal_add_css($base['scheme'] . ":" . $css, 'external');
    }
  }
  $font_awesome_active = FALSE;

  // Use Font Awesome.
  if (theme_get_setting('font_awesome_cdn')) {
    $font_awesome_active = TRUE;
    drupal_add_css($base['scheme'] . ":" . KALATHEME_FONTAWESOME_CSS, 'external');
  }

  // Let JS know that we have this enabled.
  drupal_add_js(array('kalatheme' => array('fontawesome' => $font_awesome_active)), 'setting');

  // Various menu tweaks.
  hsu_kalatheme_handle_menu($variables);

  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  hsu_kalatheme_handle_site_name_slogan($variables);

  // Since the title and the shortcut link are both block level elements,
  // positioning them next to each other is much simpler with a wrapper div.
  hsu_kalatheme_handle_title($variables);

  // If panels arent being used at all.
  $variables['no_panels'] = !(module_exists('page_manager') && page_manager_get_current_page());

  // Add theme settings as variables available to the page.tpl.php
  hsu_kalatheme_add_theme_setting_vars($variables);

  // Add render arrays for the header and navbar.
  $variables['page']['hsu_site_header'] = array(
    '#theme' => 'hsu_site_header',
    '#front_page' => $variables['front_page'],
    '#logo' => $variables['logo'],
    '#site_name' => $variables['site_name'],
    '#hide_site_name' => $variables['hide_site_name'],
    '#site_slogan' => $variables['site_slogan'],
    '#hide_site_slogan' => $variables['hide_site_slogan'],
  );

  $variables['page']['hsu_navbar'] = array(
    '#theme' => 'hsu_navbar',
    '#main_menu' => $variables['main_menu'],
    '#main_menu_expanded' => $variables['main_menu_expanded'],
    '#secondary_menu'=> $variables['secondary_menu'],
    '#site_name' => $variables['site_name'],
    '#front_page' => $variables['front_page'],
  );


  $default_theme = variable_get('theme_default', NULL);

  if (theme_get_setting('hsu_kalatheme_image_toggle', $default_theme)) {
    /**
  		 * add css for header background image
  		 */
  	  $options = array(
  	    'type'  => 'inline',
  	    'group' => CSS_THEME,
   	  );

  	  //Get theme setting for header image
  	  $image_file = theme_get_setting('hsu_kalatheme_header_image');

  	  //Build full path to image
  	  $image_path = base_path() . drupal_get_path('theme', 'hsu_kalatheme') . '/img/banners';
  	  $image_path .= "/$image_file";

  	  //Add selected header image as css background
      if ($image_file != '') {
        $css = ".header-container {position: relative;padding:1.5rem 0;color:#fff;background:url('$image_path') no-repeat center top;background-size:cover;}.hsu-header{background:none;}.hsu-header h1{float:left;background:rgba(255, 255, 255, .75);padding:.5rem;}.department-brand a{color:#004c46;}.department-brand a:hover{color:#00856a;}";
    	  drupal_add_css($css, $options);
      }
    }

  // Output hsu location information.
  $street = $variables['hsu_street'];
  $city = $variables['hsu_city'];
  $phone = $variables['hsu_phone'];
  $fax = $variables['hsu_fax'];
  $email = $variables['hsu_email'];
  $name = $variables['site_name'];

  $hsu_location_output = "<p><span class=\"heading\">$name</span>";

  if ($street) { $hsu_location_output .= "<br />$street"; }
  if ($city) { $hsu_location_output .= "<br />$city"; }
  if ($phone) { $hsu_location_output .= "<br />Phone: $phone"; }
  if ($fax) { $hsu_location_output .= "<br />Fax: $fax"; }
  if ($email) { $hsu_location_output .= "<br /><a href=\"mailto:$email\">$email</a>"; }

  $hsu_location_output .= "</p>";

  $location_info = theme_get_setting('footer_location_display');

  $footer_first_output = "";
  $footer_second_output = "";
  $footer_third_output = "";
  $footer_last_output = "";

  switch ($location_info) {
    case 0:
      $footer_first_output .= $hsu_location_output;
      break;
    case 1:
      $footer_second_output .= $hsu_location_output;
      break;
    case 2:
      $footer_third_output .= $hsu_location_output;
      break;
    case 3:
      $footer_last_output .= $hsu_location_output;
      break;
  }

  // Output hsu social icons.
  $twitter = $variables['hsu_twitter'];
  $facebook = $variables['hsu_facebook'];
  $instagram = $variables['hsu_instagram'];
  $youtube = $variables['hsu_youtube'];
  $social_align = $variables['hsu_footer_social_align'];

  $hsu_social_output = "<div class=\"social\">";

  if ($social_align) { $hsu_social_output = "<div class=\"social social-right\">"; }
  if ($twitter) { $hsu_social_output .= "<a href=\"$twitter\"><i class=\"fa fa-twitter\"><span class=\"sr-only\">Twitter</span></i></a>"; }
  if ($facebook) { $hsu_social_output .= "<a href=\"$facebook\"><i class=\"fa fa-facebook\"><span class=\"sr-only\">Facebook</span></i></a>"; }
  if ($instagram) { $hsu_social_output .= "<a href=\"$instagram\"><i class=\"fa fa-instagram\"><span class=\"sr-only\">Instagram</span></i></a>"; }
  if ($youtube) { $hsu_social_output .= "<a href=\"$youtube\"><i class=\"fa fa-youtube\"><span class=\"sr-only\">Youtube</span></i></a>"; }

  $hsu_social_output .= "</div>";

  $social_icons = theme_get_setting('footer_social_display');

  switch ($social_icons) {
    case 0:
      break;
    case 1:
      $footer_first_output .= $hsu_social_output;
      break;
    case 2:
      $footer_second_output .= $hsu_social_output;
      break;
    case 3:
      $footer_third_output .= $hsu_social_output;
      break;
    case 4:
      $footer_last_output .= $hsu_social_output;
      break;
  }

  // Page variables for footer.
  $variables['footer_first_column_display'] = $footer_first_output;
  $variables['footer_second_column_display'] = $footer_second_output;
  $variables['footer_third_column_display'] = $footer_third_output;
  $variables['footer_last_column_display'] = $footer_last_output;
}

/**
 * Various menu tweaks.
 */
function hsu_kalatheme_handle_menu(&$variables){
  // Define variables to theme local actions as a dropdown.
  $dropdown_attributes = array(
    'container' => array(
      'class' => array('dropdown', 'actions', 'pull-right'),
    ),
    'toggle' => array(
      'class' => array('dropdown-toggle', 'enabled'),
      'data-toggle' => array('dropdown'),
      'href' => array('#'),
    ),
    'content' => array(
      'class' => array('dropdown-menu'),
    ),
  );

  // Add local actions as the last item in the local tasks.
  if (!empty($variables['action_links'])) {
     if (empty($variables['tabs']['#primary'])) {
      $variables['tabs']['#primary'] = array();
    }
    $variables['tabs']['#primary'][] = array(
      '#theme' => 'menu_local_actions',
      '#menu_actions' => $variables['action_links'],
      '#attributes' => $dropdown_attributes,
    );
    $variables['action_links'] = FALSE;
  }

// Get the entire main menu tree.
  $main_menu_tree = array();
  $main_menu_tree = menu_tree_all_data('main-menu', NULL, 2);

  if ( module_exists('domain_conf')) {
    $domainGet = domain_get_domain();
    $domain_id = $domainGet['domain_id'];
    $domain_menu_source = domain_conf_variable_get($domain_id, $variable = 'menu_main_links_source');

    if ($domain_menu_source) {
      $main_menu_tree = menu_tree_all_data($domain_menu_source, NULL, 2);
    }
  }

// Add the rendered output to the $main_menu_expanded variable.
  $variables['main_menu_expanded'] = menu_tree_output($main_menu_tree);
}

/**
 * Always print the site name and slogan, but if they are toggled off, we'll
 * just hide them visually.
 */
function hsu_kalatheme_handle_site_name_slogan(&$variables){
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;
  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }
  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty,
    // so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
}

/**
 * Since the title and the shortcut link are both block level elements,
 * positioning them next to each other is much simpler with a wrapper div.
 */
function hsu_kalatheme_handle_title(&$variables){
  if (!empty($variables['title_suffix']['add_or_remove_shortcut']) && $variables['title']) {
    // Add a wrapper div using title_prefix and title_suffix render elements.
    $variables['title_prefix']['shortcut_wrapper'] = array(
      '#markup' => '<div class="shortcut-wrapper clearfix">',
      '#weight' => 100,
    );
    $variables['title_suffix']['shortcut_wrapper'] = array(
      '#markup' => '</div>',
      '#weight' => -99,
    );
    // Make sure the shortcut link is the first item in title_suffix.
    $variables['title_suffix']['add_or_remove_shortcut']['#weight'] = -100;
  }
}

/**
 * Add theme settings as variables available to the page.tpl.php.
 */
function hsu_kalatheme_add_theme_setting_vars(&$variables){
  $theme_settings = array(
    // Check if we're to always print the page title, even on panelized pages.
    'always_show_page_title' => 'always_show_page_title',

    // Add in location theme settings into vars
    'hsu_street' => 'street',
    'hsu_city' => 'citystatezip',
    'hsu_phone' => 'phone',
    'hsu_fax' => 'fax',
    'hsu_email' => 'email',

    //Add backround header image
    'hsu_kalatheme_header_image' => 'hsu_kalatheme_header_image',

    // Add social info
    'hsu_twitter' => 'twitter',
    'hsu_facebook' => 'facebook',
    'hsu_instagram' => 'instagram',
    'hsu_youtube' => 'youtube',

    // footer
    'hsu_footer_first_css' => 'footer_first_css',
    'hsu_footer_last_css' => 'footer_last_css',
    'hsu_footer_second_css' => 'footer_second_css',
    'hsu_footer_third_css' => 'footer_third_css',
    'hsu_footer_social_align' => 'footer_social_align',
  );

  foreach ($theme_settings as $key => $setting) {
    $variables[$key] = theme_get_setting($setting) ? theme_get_setting($setting) : NULL;
  }
}

// Swap out trumba spuds.js to use 25live version.
function hsu_kalatheme_js_alter(&$javascript) {
   // Only on pages where it exists
  if (isset($javascript['https://www.trumba.com/scripts/spuds.js'])) {
    unset($javascript['https://www.trumba.com/scripts/spuds.js']);
      drupal_add_js('//25livepub.collegenet.com/scripts/spuds.js', array('type' => 'external'));
  }
}
