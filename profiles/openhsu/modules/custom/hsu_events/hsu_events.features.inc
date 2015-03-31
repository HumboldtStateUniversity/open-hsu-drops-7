<?php
/**
 * @file
 * hsu_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hsu_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hsu_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hsu_events_node_info() {
  $items = array(
    'hsu_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An event to display to users on your site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
