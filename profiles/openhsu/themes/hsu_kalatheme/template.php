<?php
/**
 * @file
 * Primary pre/preprocess functions and alterations.
 */

/**
 * Implements hook_theme().
 *
 * Theme specific compontents can be namespaced kt_<component>
 * to avoid conflicts with other projects.
 */
function hsu_kalatheme_theme($existing, $type, $theme, $path) {
  return array(
    'hsu_site_header' => array(
      'template' => 'templates/sections/hsu-site-header',
      'variables' => array(
        'front_page' => FALSE,
        'logo' => '',
        'site_name' => '',
        'hide_site_name' => FALSE,
        'site_slogan' => '',
        'hide_site_slogan' => FALSE,
        'hsu_banner' => '',
        'hsu_header' => '',
      ),
    ),
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

/**
 * Implements hook_preprocess_hsu_site_header.
 */
function hsu_kalatheme_preprocess_hsu_site_header(&$vars){
  // Find the managed file the the url that matches what we got in the 
  // hsu_header var. The file entity already has the height and width of the 
  // image in it's metadata (which theme_picture NEEDS) so this is quicker than 
  // using something like getimagesize() which seems to be super slow.
  $files_dir = file_create_url('public://');
  $file_path = str_replace($files_dir, '', $vars['hsu_header']);
  $entity_type = 'file';
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', $entity_type)
    ->propertyCondition('uri', 'public://' . $file_path);
    
  $result = $query->execute();
  
  // Make sure we have a match.
  if (isset($result[$entity_type])) {
    // Load the file entity.
    $fid = reset($result[$entity_type])->fid;
    $file_entity = file_load($fid);
    
    // Load the picture mappping.
    $picture_mapping = picture_mapping_load('kalapicture_12');
    $breakpoints = picture_get_mapping_breakpoints($picture_mapping);
    $image_size = getimagesize($vars['hsu_header']);
    xdebug_break();
    // Add a render array that will output the goods.
    $vars['hsu_header_image'] = array(
      '#theme' => 'picture',
      '#uri' => $file_path, // Note: picture module seems to need a path relative to the files dir.
      '#width' => $file_entity->metadata['width'], 
      '#height' => $file_entity->metadata['height'], 
      '#alt' => $vars['site_name'],
      '#breakpoints' => $breakpoints, 
    );
  }  
}

/**
 * Override or insert variables into the page template.
 *
 * Implements template_process_page().
 */
function hsu_kalatheme_process_page(&$variables) {
  // Add Bootstrap JS and stock CSS.
  global $base_url;
  $base = parse_url($base_url);
  // Use the CDN if not using libraries.
  if (!kalatheme_use_libraries()) {
    $library = theme_get_setting('bootstrap_library');
    if ($library !== 'none' && !empty($library)) {
      // Add the JS.
      drupal_add_js($base['scheme'] . ":" . KALATHEME_BOOTSTRAP_JS, 'external');
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
    $variables['tabs']['#primary'][]['#markup'] = theme('menu_local_actions', array('menu_actions' => $variables['action_links'], 'attributes' => $dropdown_attributes));
    $variables['action_links'] = FALSE;
  }

  // Get the entire main menu tree.
  $main_menu_tree = array();
  $main_menu_tree = menu_tree_all_data('main-menu', NULL, 2);
  // Add the rendered output to the $main_menu_expanded variable.
  $variables['main_menu_expanded'] = menu_tree_output($main_menu_tree);

  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
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
  // Since the title and the shortcut link are both block level elements,
  // positioning them next to each other is much simpler with a wrapper div.
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

  // If panels arent being used at all.
  $variables['no_panels'] = !(module_exists('page_manager') && page_manager_get_current_page());
  
  // Add theme settings as variables available to the page.tpl.php
  hsu_kalatheme_add_theme_setting_vars($variables);
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
    
    // Add header info
    'hsu_banner' => 'use_banner',
    'hsu_header' => 'header_file',

    // Add social info
    'hsu_twitter' => 'twitter',
    'hsu_facebook' => 'facebook',
    'hsu_instagram' => 'instagram',
    'hsu_youtube' => 'youtube',
  );
  
  foreach ($theme_settings as $key => $setting) {
    $variables[$key] = theme_get_setting($setting) ? theme_get_setting($setting) : NULL;
  }  
}
