<?php
/**
 * @file
 * vs_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vs_users_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
