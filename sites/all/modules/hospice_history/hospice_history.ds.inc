<?php
/**
 * @file
 * hospice_history.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function hospice_history_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|history|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'history';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_milestone',
      ),
    ),
    'fields' => array(
      'field_milestone' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|history|default'] = $ds_layout;

  return $export;
}
