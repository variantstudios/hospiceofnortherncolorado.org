<?php
/**
 * @file
 * vs_date.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vs_date_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer date tools'.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'date_tools',
  );

  return $permissions;
}
