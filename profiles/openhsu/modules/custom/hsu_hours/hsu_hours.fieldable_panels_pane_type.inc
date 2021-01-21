<?php

/**
 * @file
 * hsu_hours.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function hsu_hours_default_fieldable_panels_pane_type()
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
