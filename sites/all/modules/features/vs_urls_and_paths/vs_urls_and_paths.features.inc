<?php
/**
 * @file
 * vs_urls_and_paths.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vs_urls_and_paths_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
