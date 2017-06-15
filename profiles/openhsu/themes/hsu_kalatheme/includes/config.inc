<?php
/**
 * @file
 * Some forms we can use
 */

function hsu_kalatheme_location_form() {
  $form = array();

  $form['open_hsu_contact_info'] = array (
    '#type' => 'fieldset',
    '#title' => 'Site Contact Info',
    '#weight' => -98,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['open_hsu_contact_info']['street'] = array(
    '#type' => 'textfield',
    '#title' => t('Street'),
    '#default_value' =>theme_get_setting('street'),
  );

  $form['open_hsu_contact_info']['citystatezip'] = array(
    '#type' => 'textfield',
    '#title' => t('City/State/Zip'),
    '#default_value' =>theme_get_setting('citystatezip'),
  );

  $form['open_hsu_contact_info']['phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Phone'),
    '#default_value' =>theme_get_setting('phone'),
  );

  $form['open_hsu_contact_info']['fax'] = array(
    '#type' => 'textfield',
    '#title' => t('Fax'),
    '#default_value' =>theme_get_setting('fax'),
  );

  $form['open_hsu_contact_info']['email'] = array(
      '#type' => 'textfield',
      '#title' => t('Email'),
      '#default_value' =>theme_get_setting('email'),
  );

  return $form;
}

function hsu_kalatheme_social_form() {
  $form = array();

  $form['open_hsu_social_info'] = array (
    '#type' => 'fieldset',
    '#title' => 'Social Media Info',
    '#weight' => -97,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['open_hsu_social_info']['twitter'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter URL'),
    '#default_value' =>theme_get_setting('twitter'),
  );

  $form['open_hsu_social_info']['facebook'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook URL'),
    '#default_value' =>theme_get_setting('facebook'),
  );

  $form['open_hsu_social_info']['instagram'] = array(
    '#type' => 'textfield',
    '#title' => t('Instagram URL'),
    '#default_value' =>theme_get_setting('instagram'),
  );

  $form['open_hsu_social_info']['youtube'] = array(
    '#type' => 'textfield',
    '#title' => t('YouTube URL'),
    '#default_value' =>theme_get_setting('youtube'),
  );

  return $form;
}

function hsu_kalatheme_header_bgimage_form() {
  $form['hsu_kalatheme_image'] = array(
    "#type"  => "fieldset",
    "#title" => "Header Image for OpenHSU",
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  // Manually set hsu_kalatheme header images
  $header_options = array(
    t('OpenHSU Headers')  => array(
      'gold-hgh.jpg'        => t('Harry Griffith Hall & Autumn Leaves'),
      'lostcoast.jpg'       => t('Backpacking the Lost Coast'),
      'bios012115_004.jpg'  => t('Old Home Beach, Trinidad'),
      'bios093011_276.jpg'  => t('Indian Beach, Trinidad Bay'),
      'bios022109_458.jpg'  => t('Mossy Forest'),
      'fore031314_119.jpg'  => t('Redwoods'),
      'land101608_122.jpg'  => t('Ferns'),
      'bios012115_019.jpg'  => t('Cloudy Sky'),
      'dunes.jpg'           => t('Buckwheat Beach Dunes'),
      'founders.jpg'        => t('Founders Hall'),
      'kra.jpg'             => t('Student Recreation Center'),
      'library.jpg'         => t('Library'),
      'quad-night.jpg'      => t('UC Quad at Night'),
      'students.jpg'        => t('Students'),
      'college-creek.jpg'   => t('College Creek'),
      'canoe.jpg'           => t('Canoes'),
      'redwoods.jpg'        => t('Redwood Needles'),
      'students-beach.jpg'  => t('Students at the Beach'),
      'bicycle.jpg'         => t('Bicycles'),
      'students-zoo.jpg'    => t('Students at the Zoo'),
      'jacks-fans.jpg'      => t('Lumberjack Fans'),
      'campus-night.jpg'    => t('Campus Rooftops at Night'),
      'bss.jpg'             => t('Behavioral & Social Sciences'),
    ),
  );

  //Header image is optional
  $form['hsu_kalatheme_image']['hsu_kalatheme_image_toggle'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use a header image'),
    '#default_value' => theme_get_setting('hsu_kalatheme_image_toggle'),
    '#description' => t('Check if you want to set a header image that will appear behind your site name.'),
  );

  // Select Header Image
  $form['hsu_kalatheme_image']['hsu_kalatheme_header_image'] = array(
    '#type'          => 'select',
    '#title'         => t('Select an Image'),
    '#options'       => $header_options,
    '#description'   => t('<div style="padding:10px;margin:15px 0;border:solid 1px #ccc;"><p>The image will appear behind your site name near the top of your site. <a href="https://brand.humboldt.edu/standards/web/banner-images" target="_blank"><strong>Preview all images</strong></a> <i class="fa fa-external-link"></i></p></div>'),
    '#default_value' => theme_get_setting('hsu_kalatheme_header_image'),
    //Disable ajax callback because it is busted when using with Domain Access
    // '#ajax'          => array(
    //   'callback'     => 'hsu_kalatheme_image_preview_callback',
    //   'wrapper'      => 'header_image_div',
    //  ),
     '#states' => array(
       'invisible' => array(
         ':input[name="hsu_kalatheme_image_toggle"]' => array('checked' => FALSE),
       ),
     ),
  );

  //Disable ajax callback because it is busted when using with Domain Access
  // Header Image Preview
  // $form['hsu_kalatheme_image']['hsu_kalatheme_header_image_preview'] = array(
  //   '#type'          => 'fieldset',
  //   '#title'         => t('Preview of the Currently Selected Image'),
  //   'image'          => hsu_kalatheme_image_preview_initial(),
  //   '#collapsible'   => TRUE,
  //   '#collapsed'     => FALSE,
  //   '#states' => array(
  //     'invisible' => array(
  //       ':input[name="hsu_kalatheme_image_toggle"]' => array('checked' => FALSE),
  //     ),
  //   ),
  // );
  return $form;
  }


  /**
  * Display the initial header image
  */
  function hsu_kalatheme_image_preview_initial() {

  //Get theme setting for header image
  $image_file = theme_get_setting('hsu_kalatheme_header_image');

  return hsu_kalatheme_image_preview($image_file);

  }

  /**
  * Ajax callback for selected header image
  */
  function hsu_kalatheme_image_preview_callback($form, $form_state) {

  //Get current header image from $form_state
  $image_file = $form_state['values']['hsu_kalatheme_header_image'];

  return hsu_kalatheme_image_preview($image_file);

  }

  /**
  * Preview the selected header image
  */
  function hsu_kalatheme_image_preview($image_file) {

  $image_preview = array();

  //Build full path to image
  $image_path = drupal_get_path('theme', 'hsu_kalatheme') . '/img/banners';
  $image_path .= "/$image_file";

  $variables = array(
    'path' => "$image_path",
    'alt' => 'Preview of header image',
    'title' => 'Preview of header image',
    'width' => '100%',
    'height' => 'auto',
  );

  // Image preview
  $image_preview = array(
    '#markup' => theme('image', $variables),
    '#prefix' => '<div id="header_image_div">',
    '#suffix' => '</div>',

  );

  return $image_preview;
}
