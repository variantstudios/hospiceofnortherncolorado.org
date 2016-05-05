<?php
/**
 * @file
 * vs_performance.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vs_performance_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'bypass advanced aggregation'.
  $permissions['bypass advanced aggregation'] = array(
    'name' => 'bypass advanced aggregation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advagg',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'admin_menu',
  );

  return $permissions;
}
