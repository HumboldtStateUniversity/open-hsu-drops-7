<?php
/**
 * @file
 * hsu_news.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hsu_news_defaultconfig_features() {
  return array(
    'hsu_news' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function hsu_news_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_hsu_news_listing';
  $strongarm->value = 'M j Y';
  $export['date_format_hsu_news_listing'] = $strongarm;

  return $export;
}
