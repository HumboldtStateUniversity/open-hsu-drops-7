<?php
/**
 * @file
 * hot_bs_carousel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hot_bs_carousel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hot_bs_carousel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
