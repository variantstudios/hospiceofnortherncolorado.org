<?php
/**
 * @file
 * vs_users.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function vs_users_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: user.
  $config['user'] = array(
    'instance' => 'user',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[user:name] | [site:name]',
      ),
    ),
  );

  return $config;
}
