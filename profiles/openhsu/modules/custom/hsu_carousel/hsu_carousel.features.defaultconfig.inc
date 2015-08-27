<?php
/**
 * @file
 * hsu_carousel.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hsu_carousel_defaultconfig_features() {
  return array(
    'hsu_carousel' => array(
      'field_default_fields' => 'field_default_fields',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function hsu_carousel_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-hot_bs_carousel-field_hsu_carousel_autoplay'.
  $fields['fieldable_panels_pane-hot_bs_carousel-field_hsu_carousel_autoplay'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_hsu_carousel_autoplay',
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
          0 => 0,
          1 => 1,
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'hot_bs_carousel',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Do you want the slideshow to automatically play when the page loads?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_hsu_carousel_autoplay',
      'label' => 'Autoplay',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hot_bs_carousel-field_hsu_carousel_style'.
  $fields['fieldable_panels_pane-hot_bs_carousel-field_hsu_carousel_style'] = array(
    'field_config' => array(
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
    ),
    'field_instance' => array(
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
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Autoplay');
  t('Do you want the slideshow to automatically play when the page loads?');
  t('Select the way you wish the carousel to display.');
  t('Style');

  return $fields;
}
