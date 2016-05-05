<?php
/**
 * @file
 * vs_text_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vs_text_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
