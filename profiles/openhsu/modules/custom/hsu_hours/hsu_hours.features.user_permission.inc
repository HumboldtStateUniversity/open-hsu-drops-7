<?php

/**
 * @file
 * hsu_hours.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hsu_hours_user_default_permissions()
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
