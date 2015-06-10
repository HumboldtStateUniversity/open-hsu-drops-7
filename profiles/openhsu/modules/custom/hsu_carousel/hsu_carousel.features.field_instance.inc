<?php
/**
 * @file
 * hsu_carousel.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hsu_carousel_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-hot_bs_carousel-field_hsu_carousel_style'
  $field_instances['fieldable_panels_pane-hot_bs_carousel-field_hsu_carousel_style'] = array(
    'bundle' => 'hot_bs_carousel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the way you wish the carousel to display.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_hsu_carousel_style',
    'label' => 'Style',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Select the way you wish the carousel to display.');
  t('Style');

  return $field_instances;
}
