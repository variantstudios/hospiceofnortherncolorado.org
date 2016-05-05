<?php
/**
 * @file
 * vs_date.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vs_date_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_mini';
  $strongarm->value = 'n/j/y';
  $export['date_format_mini'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_mini_date';
  $strongarm->value = 'n/j/y';
  $export['date_format_mini_date'] = $strongarm;

  return $export;
}
