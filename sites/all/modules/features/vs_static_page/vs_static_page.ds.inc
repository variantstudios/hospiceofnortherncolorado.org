<?php
/**
 * @file
 * vs_static_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function vs_static_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'page-title',
        'ft' => array(),
      ),
    ),
    'field_sub_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => 'sub-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_action_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'action-btn',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_text_overlay' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'text-overlay',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_layout_2_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'layout-2',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function vs_static_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'hospice_static';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'title',
        1 => 'field_sub_title',
        2 => 'body',
      ),
      'middle' => array(
        3 => 'field_full_width_image',
        4 => 'field_text_overlay',
        5 => 'field_layout_2_images',
      ),
      'bottom' => array(
        6 => 'field_second_body',
        7 => 'field_layout2_second_body',
        8 => 'field_action_link',
      ),
    ),
    'fields' => array(
      'title' => 'top',
      'field_sub_title' => 'top',
      'body' => 'top',
      'field_full_width_image' => 'middle',
      'field_text_overlay' => 'middle',
      'field_layout_2_images' => 'middle',
      'field_second_body' => 'bottom',
      'field_layout2_second_body' => 'bottom',
      'field_action_link' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'middle' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_global_static',
        1 => 'group_static_layout_1',
        2 => 'title',
        3 => 'field_sub_title',
        4 => 'group_static_layout_2',
        5 => 'body',
        6 => 'xmlsitemap',
        7 => 'field_action_link',
        8 => 'redirect',
        9 => 'field_full_width_image',
        10 => 'path',
        11 => 'metatags',
        12 => 'field_text_overlay',
        13 => 'field_second_body',
        14 => 'field_layout_2_images',
        15 => 'field_layout2_second_body',
      ),
      'hidden' => array(
        16 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_global_static' => 'ds_content',
      'group_static_layout_1' => 'ds_content',
      'title' => 'ds_content',
      'field_sub_title' => 'ds_content',
      'group_static_layout_2' => 'ds_content',
      'body' => 'ds_content',
      'xmlsitemap' => 'ds_content',
      'field_action_link' => 'ds_content',
      'redirect' => 'ds_content',
      'field_full_width_image' => 'ds_content',
      'path' => 'ds_content',
      'metatags' => 'ds_content',
      'field_text_overlay' => 'ds_content',
      'field_second_body' => 'ds_content',
      'field_layout_2_images' => 'ds_content',
      'field_layout2_second_body' => 'ds_content',
      '_add_existing_field' => 'hidden',
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
  );
  $export['node|page|form'] = $ds_layout;

  return $export;
}
