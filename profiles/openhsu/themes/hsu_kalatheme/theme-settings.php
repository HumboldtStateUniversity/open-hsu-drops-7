<?php

/**
 * @file
 * Theme setting callbacks for kalatheme.
 */

require_once dirname(__FILE__) . '/includes/config.inc';

/**
 * Implements hook_form_FORM_ID_alter().
 */
function hsu_kalatheme_form_system_theme_settings_alter(&$form, &$form_state) {

  $form['bootstrap']['#access'] = false;
  $form['subtheme']['#access'] = false;
  $form['backend_check']['#access'] =false;

  // Add the location form
  $form += hsu_kalatheme_header_image_form();
  $form += hsu_kalatheme_location_form();
  $form += hsu_kalatheme_social_form();

  $form_state['build_info']['files'][] = drupal_get_path('theme', 'hsu_kalatheme') . '/includes/config.inc';
}
