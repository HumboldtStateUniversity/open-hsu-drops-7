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
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hsu_people_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create hsu_people content'.
  $permissions['create hsu_people content'] = array(
    'name' => 'create hsu_people content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hsu_people content'.
  $permissions['delete any hsu_people content'] = array(
    'name' => 'delete any hsu_people content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hsu_people content'.
  $permissions['delete own hsu_people content'] = array(
    'name' => 'delete own hsu_people content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any hsu_people content'.
  $permissions['edit any hsu_people content'] = array(
    'name' => 'edit any hsu_people content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hsu_people content'.
  $permissions['edit own hsu_people content'] = array(
    'name' => 'edit own hsu_people content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
