<?php
/**
 * @file
 * hospice_history.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hospice_history_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_milestone'
  $field_bases['field_milestone'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_milestone',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
