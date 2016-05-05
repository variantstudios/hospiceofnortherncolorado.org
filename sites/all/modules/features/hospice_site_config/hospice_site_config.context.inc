<?php
/**
 * @file
 * hospice_site_config.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hospice_site_config_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menu';
  $context->description = 'Adding the site\'s menu / navigation.';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adding the site\'s menu / navigation.');
  t('sitewide');
  $export['menu'] = $context;

  return $export;
}
