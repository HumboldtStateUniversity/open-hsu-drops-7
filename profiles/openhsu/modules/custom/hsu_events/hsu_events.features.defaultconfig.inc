<?php
/**
 * @file
 * hsu_events.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hsu_events_defaultconfig_features() {
  return array(
    'hsu_events' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hsu_events_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create hsu_event content'.
  $permissions['create hsu_event content'] = array(
    'name' => 'create hsu_event content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hsu_event content'.
  $permissions['delete any hsu_event content'] = array(
    'name' => 'delete any hsu_event content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hsu_event content'.
  $permissions['delete own hsu_event content'] = array(
    'name' => 'delete own hsu_event content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any hsu_event content'.
  $permissions['edit any hsu_event content'] = array(
    'name' => 'edit any hsu_event content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hsu_event content'.
  $permissions['edit own hsu_event content'] = array(
    'name' => 'edit own hsu_event content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
