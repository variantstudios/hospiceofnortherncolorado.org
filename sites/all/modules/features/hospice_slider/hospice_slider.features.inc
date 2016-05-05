<?php
/**
 * @file
 * hospice_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hospice_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hospice_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hospice_slider_node_info() {
  $items = array(
    'slider' => array(
      'name' => t('Slider'),
      'base' => 'node_content',
      'description' => t('Home Slider'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
