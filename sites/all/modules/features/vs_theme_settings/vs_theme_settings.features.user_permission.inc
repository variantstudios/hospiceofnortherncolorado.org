<?php
/**
 * @file
 * vs_theme_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vs_theme_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer blockify'.
  $permissions['administer blockify'] = array(
    'name' => 'administer blockify',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'blockify',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'system',
  );

  return $permissions;
}
