<?php
/**
 * @file openhsu.profile
 */

/**
 * Implements hook_install_tasks().
 *
 * Note, these tasks run after the "Configure site" step (where the admin
 * password is set).
 */
function openhsu_install_tasks($install_state) {
  // Add custom tasks to the tasks array.
  $tasks = array();

  // Add our custom CSS file for the installation process
  drupal_add_css(drupal_get_path('profile', 'openhsu') . '/openhsu.css');

  // Add subtheme generator to installation workflow
  $tasks['openhsu_hsu_configure_form'] = array(
    'display_name' => t('Configure OpenHSU'),
    'type' => 'form',
  );

  return $tasks;
}

/**
 * Implements hook_install_tasks_alter()
 */
function openhsu_install_tasks_alter(&$tasks, $install_state) {
  // Magically go one level deeper in solving years of dependency problems.
  require_once(drupal_get_path('module', 'panopoly_core') . '/panopoly_core.profile.inc');
  $tasks['install_load_profile']['function'] = 'panopoly_core_install_load_profile';

  // Force the SSL for installation
  if (isset($_SERVER['PANTHEON_ENVIRONMENT'])) {
    if (!isset($_SERVER['HTTP_X_SSL']) || $_SERVER['HTTP_X_SSL'] != 'ON') {
      header('HTTP/1.0 301 Moved Permanently');
      header('Location: https://' . $_SERVER['HTTP_HOST'] . $_SERVER['REQUEST_URI']);
      exit();
    }
  }
}

/**
 * Form to configure the OpenHSU
 * @todo we should move this stuff into kalatheme so it can be used in other
 * install profiles
 */
function openhsu_hsu_configure_form($form, &$form_state) {
  // Grab some forms we can use
  require_once dirname(__FILE__) . '/themes/hsu_kalatheme/includes/config.inc';

  // Set the page title
  drupal_set_title(t('Configure OpenHSU'));

  // OpenHSU settings
  $form = array();
  $form += hsu_kalatheme_header_image_form();
  $form += hsu_kalatheme_location_form();
  $form += hsu_kalatheme_social_form();
  $form = system_settings_form($form);
  // We don't want to call system_settings_form_submit(), so change #submit.
  array_pop($form['#submit']);
  // Add the theme enable magix here
  array_unshift($form['#submit'], 'openhsu_enable_theme');

  return $form;
}

/**
 * Wrapper function to the Kalatheme validation magic
 */
function openhsu_enable_theme($form, &$form_state) {
  // Rebuild theme registry stuff
  system_rebuild_theme_data();
  drupal_theme_rebuild();
  // Enable new theme
  theme_enable(array('hsu_kalatheme'));
  $theme_settings = variable_get('theme_hsu_kalatheme_settings');
  // Location things
  $theme_settings['street'] = $form_state['values']['street'];
  $theme_settings['citystatezip'] = $form_state['values']['citystatezip'];
  $theme_settings['phone'] = $form_state['values']['phone'];
  $theme_settings['fax'] = $form_state['values']['fax'];
  $theme_settings['email'] = $form_state['values']['email'];
  // Banner things
  $theme_settings['use_banner'] = $form_state['values']['use_banner'];
  $theme_settings['header_file'] = $form_state['values']['header_file'];
  // Social things
  $theme_settings['twitter'] = $form_state['values']['twitter'];
  $theme_settings['facebook'] = $form_state['values']['facebook'];
  $theme_settings['instagram'] = $form_state['values']['instagram'];
  $theme_settings['youtube'] = $form_state['values']['youtube'];
  variable_set('theme_hsu_kalatheme_settings', $theme_settings);
  variable_set('theme_default', 'hsu_kalatheme');
  // We need to do the big dump
  drupal_flush_all_caches();
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function openhsu_form_install_configure_form_alter(&$form, $form_state) {

  // Hide some messages from various modules that are just too chatty.
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // Set reasonable defaults for site configuration form
  $form['site_information']['site_name']['#default_value'] = 'My Awesome OpenHSU Site!';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';

  // Define a default email address if we can guess a valid one
  if (valid_email_address('admin@' . $_SERVER['HTTP_HOST'])) {
    $form['site_information']['site_mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];
    $form['admin_account']['account']['mail']['#default_value'] = 'admin@' . $_SERVER['HTTP_HOST'];
  }

  // Set the location to be in San Francisco CA
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/Los_Angeles';
  $form['server_settings']['date_default_timezone']['#attributes']['class'] = array();
}
