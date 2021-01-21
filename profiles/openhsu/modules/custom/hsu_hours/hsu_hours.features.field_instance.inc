<?php

/**
 * @file
 * hsu_hours.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hsu_hours_field_default_field_instances()
{
  $field_instances = array();

  // Exported field_instance:
  // 'fieldable_panels_pane-office_hours-field_additional_notes_details'.
  $field_instances['fieldable_panels_pane-office_hours-field_additional_notes_details'] = array(
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
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-office_hours-field_office_details'.
  $field_instances['fieldable_panels_pane-office_hours-field_office_details'] = array(
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
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-office_hours-field_time_slot'.
  $field_instances['fieldable_panels_pane-office_hours-field_time_slot'] = array(
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

  return $field_instances;
}
