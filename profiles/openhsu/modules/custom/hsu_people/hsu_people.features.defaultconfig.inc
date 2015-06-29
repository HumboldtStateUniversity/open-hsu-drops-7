<?php
/**
 * @file
 * hsu_people.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hsu_people_defaultconfig_features() {
  return array(
    'hsu_people' => array(
      'field_group_info' => 'field_group_info',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_group_info().
 */
function hsu_people_defaultconfig_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hsu_people_right|node|hsu_people|default';
  $field_group->group_name = 'group_hsu_people_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hsu_people';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right Sidebar',
    'weight' => '0',
    'children' => array(
      0 => 'field_hsu_people_email',
      1 => 'field_hsu_people_location',
      2 => 'field_hsu_people_phone_number',
      3 => 'field_hsu_people_profile_image',
      4 => 'field_hsu_people_website',
      5 => 'field_hsu_people_cv',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right Sidebar',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_hsu_people_right|node|hsu_people|default'] = $field_group;

  return $export;
}
