<?php
/**
 * @file
 * hsu_carousel.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hsu_carousel_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_hsu_carousel_style'
  $field_bases['field_hsu_carousel_style'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hsu_carousel_style',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'img_12_text_over' => 'Image full width, text over-layed',
        'img_6_text_left' => 'Image half width, text to the left',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
