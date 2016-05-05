<?php
/**
 * @file
 * hospice_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hospice_events_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details_group|node|events|form';
  $field_group->group_name = 'group_event_details_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_event_date_and_time',
      2 => 'field_event_image',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-details-group field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_details_group|node|events|form'] = $field_group;

  return $export;
}
