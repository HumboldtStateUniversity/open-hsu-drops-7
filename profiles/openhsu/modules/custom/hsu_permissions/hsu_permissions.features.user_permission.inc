<?php
/**
 * @file
 * hsu_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hsu_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node panopoly_landing_page defaults'.
  $permissions['administer panelizer node panopoly_landing_page defaults'] = array(
    'name' => 'administer panelizer node panopoly_landing_page defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node panopoly_page defaults'.
  $permissions['administer panelizer node panopoly_page defaults'] = array(
    'name' => 'administer panelizer node panopoly_page defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term panopoly_categories defaults'.
  $permissions['administer panelizer taxonomy_term panopoly_categories defaults'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
