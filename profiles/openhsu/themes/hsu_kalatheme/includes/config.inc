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


function hsu_kalatheme_custom_css_form() {
  $form = array();

  $form['hsu_custom_css'] = array(
    '#type' => 'fieldset',
    '#title' => t('Add custom css file'),
    '#weight' => -90,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['hsu_custom_css']['custom_css_file'] = array(
    '#type' => 'textfield',
    '#title' => t('File name in sites/all/libraries/custom-css'),
    '#default_value' =>theme_get_setting('custom_css_file'),
  );

  $form['#validate'][] = 'hsu_kalatheme_custom_css_form_validate';

  return $form;
}

function hsu_kalatheme_custom_css_form_validate($form, &$form_state) {
  $file = $form_state['values']['custom_css_file'];
  $filepath = libraries_get_path('custom-css') . '/' . $file;

  if ( $file != '' && !file_exists($filepath)) {
    form_set_error('custom_css_file', t('The file ' . $file . ' does not exist in the custom-css library directory.'));
  }
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
     '#states' => array(
       'invisible' => array(
         ':input[name="hsu_kalatheme_image_toggle"]' => array('checked' => FALSE),
       ),
     ),
  );

  return $form;
}

function hsu_kalatheme_footer_settings_form() {
  $form = array();

  $form['hsu_kalatheme_footer_settings'] = array (
    '#type' => 'fieldset',
    '#title' => 'Footer Settings',
    '#weight' => -90,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['hsu_kalatheme_footer_settings']['footer_first_css'] = array(
    '#type' => 'textfield',
    '#title' => t('CSS classes for Footer first'),
    '#default_value' => theme_get_setting('footer_first_css'),
  );

  $form['hsu_kalatheme_footer_settings']['footer_second_css'] = array(
    '#type' => 'textfield',
    '#title' => t('CSS classes for Footer second'),
    '#default_value' => theme_get_setting('footer_second_css'),

  );

  $form['hsu_kalatheme_footer_settings']['footer_third_css'] = array(
    '#type' => 'textfield',
    '#title' => t('CSS classes for Footer third'),
    '#default_value' => theme_get_setting('footer_third_css'),
  );

  $form['hsu_kalatheme_footer_settings']['footer_last_css'] = array(
    '#type' => 'textfield',
    '#title' => t('CSS classes for Footer last'),
    '#default_value' => theme_get_setting('footer_last_css'),
  );

  $form['hsu_kalatheme_footer_settings']['footer_location_display'] = array(
    '#type' => 'select',
    '#title' => t('Select column for location information'),
    '#options' => array(
      0 => t('Footer first'),
      1 => t('Footer second'),
      2 => t('Footer third'),
      3 => t('Footer last'),
    ),
    '#default_value' => theme_get_setting('footer_location_display'),
  );

  $form['hsu_kalatheme_footer_settings']['footer_social_display'] = array(
    '#type' => 'select',
    '#title' => t('Select column for social icons'),
    '#options' => array(
      0 => t('No Display'),
      1 => t('Footer first'),
      2 => t('Footer second'),
      3 => t('Footer third'),
      4 => t('Footer last'),
    ),
    '#default_value' => theme_get_setting('footer_social_display'),
  );

  $form['hsu_kalatheme_footer_settings']['footer_social_align'] = array(
    '#type' => 'checkbox',
    '#title' => t('Align social icons right on large screen'),
    '#default_value' => theme_get_setting('footer_social_align'),
  );

  return $form;
}
