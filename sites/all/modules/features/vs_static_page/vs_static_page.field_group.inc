<?php
/**
 * @file
 * vs_static_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function vs_static_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_global_static|node|page|form';
  $field_group->group_name = 'group_global_static';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Global Static',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_sub_title',
      2 => 'field_action_link',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-global-static field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_global_static|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_static_layout_1|node|page|form';
  $field_group->group_name = 'group_static_layout_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Layout #1',
    'weight' => '1',
    'children' => array(
      0 => 'field_full_width_image',
      1 => 'field_text_overlay',
      2 => 'field_second_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-static-layout-1 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_static_layout_1|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_static_layout_2|node|page|form';
  $field_group->group_name = 'group_static_layout_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Layout #2',
    'weight' => '2',
    'children' => array(
      0 => 'field_layout_2_images',
      1 => 'field_layout2_second_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-static-layout-2 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_static_layout_2|node|page|form'] = $field_group;

  return $export;
}
