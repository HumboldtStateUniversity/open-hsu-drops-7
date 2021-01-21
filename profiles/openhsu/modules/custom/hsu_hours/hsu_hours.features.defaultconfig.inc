<?php

/**
 * @file
 * hsu_hours.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hsu_hours_defaultconfig_features()
{
  return array(
    'hsu_hours' => array(
      'default_fieldable_panels_pane_type' => 'default_fieldable_panels_pane_type',
      'field_default_fields' => 'field_default_fields',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_fieldable_panels_pane_type().
 */
function hsu_hours_defaultconfig_default_fieldable_panels_pane_type()
{
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'office_hours';
  $fieldable_panels_pane_type->title = 'Office Hours';
  $fieldable_panels_pane_type->description = '';
  $export['office_hours'] = $fieldable_panels_pane_type;

  return $export;
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function hsu_hours_defaultconfig_field_default_fields()
{
  $fields = array();

  // Exported field: 'fieldable_panels_pane-office_hours-field_additional_notes_details'.
  $fields['fieldable_panels_pane-office_hours-field_additional_notes_details'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_additional_notes_details',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'office_hours',
      'default_value' => NULL,
      'deleted' => 0,
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_additional_notes_details',
      'label' => 'Additional Notes/Details',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 3,
        ),
        'type' => 'text_textarea',
        'weight' => -2,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-office_hours-field_office_details'.
  $fields['fieldable_panels_pane-office_hours-field_office_details'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_office_details',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'office_hours',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Describe the state that your office is functioning in. Virtual, face-to-face, hybrid.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_office_details',
      'label' => 'Office Details',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 3,
        ),
        'type' => 'text_textarea',
        'weight' => -4,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-office_hours-field_time_slot'.
  $fields['fieldable_panels_pane-office_hours-field_time_slot'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_time_slot',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'office_hours',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Enter day and time scenarios<br>
    Use "add another item" button below for each line.<br><br>
<strong>Examples:</strong><br>
Mon-Fri: 8 AM - 12 PM and 1 - 5 PM<br>
Daily Noon-6pm<br>
24/7, ring bell',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_time_slot',
      'label' => 'Time Slot',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => -3,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Notes/Details');
  t('Describe the state that your office is functioning in. Virtual, face-to-face, hybrid.');
  t('Enter day and time scenarios<br>
    Use "add another item" button below for each line.<br><br>
<strong>Examples:</strong><br>
Mon-Fri: 8 AM - 12 PM and 1 - 5 PM<br>
Daily Noon-6pm<br>
24/7, ring bell');
  t('Office Details');
  t('Time Slot');

  return $fields;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function hsu_hours_defaultconfig_strongarm()
{
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__office_hours';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'preview' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__office_hours'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hsu_hours_defaultconfig_user_default_permissions()
{
  $permissions = array();

  // Exported permission: 'create fieldable office_hours'.
  $permissions['create fieldable office_hours'] = array(
    'name' => 'create fieldable office_hours',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable office_hours'.
  $permissions['delete fieldable office_hours'] = array(
    'name' => 'delete fieldable office_hours',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable office_hours'.
  $permissions['edit fieldable office_hours'] = array(
    'name' => 'edit fieldable office_hours',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
