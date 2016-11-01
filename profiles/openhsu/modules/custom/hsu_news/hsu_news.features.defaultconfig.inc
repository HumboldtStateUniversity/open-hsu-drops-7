<?php
/**
 * @file
 * hsu_news.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hsu_news_defaultconfig_features() {
  return array(
    'hsu_news' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hsu_news_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create panopoly_news_article content'.
  $permissions['create panopoly_news_article content'] = array(
    'name' => 'create panopoly_news_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panopoly_news_article content'.
  $permissions['delete any panopoly_news_article content'] = array(
    'name' => 'delete any panopoly_news_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panopoly_news_article content'.
  $permissions['delete own panopoly_news_article content'] = array(
    'name' => 'delete own panopoly_news_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panopoly_news_article content'.
  $permissions['edit any panopoly_news_article content'] = array(
    'name' => 'edit any panopoly_news_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panopoly_news_article content'.
  $permissions['edit own panopoly_news_article content'] = array(
    'name' => 'edit own panopoly_news_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
