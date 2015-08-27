<?php
/**
 * @file
 * hsu_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hsu_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'hsu_kalatheme';
  $export['theme_default'] = $strongarm;

  return $export;
}
