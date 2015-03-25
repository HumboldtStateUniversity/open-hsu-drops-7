<?php
/**
 * @file
 * hsu_people.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hsu_people_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hsu_people_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hsu_people_node_info() {
  $items = array(
    'hsu_people' => array(
      'name' => t('People'),
      'base' => 'node_content',
      'description' => t('Creates a person who will appear in the directory listing at /people.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
