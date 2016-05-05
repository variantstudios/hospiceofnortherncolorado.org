<?php
/**
 * @file
 * vs_webform.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function vs_webform_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 1,
  );

  return $roles;
}
