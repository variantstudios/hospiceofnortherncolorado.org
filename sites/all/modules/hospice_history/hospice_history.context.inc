<?php
/**
 * @file
 * hospice_history.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hospice_history_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'history';
  $context->description = '';
  $context->tag = 'About Us';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us' => 'about-us',
        'about-hnc' => 'about-hnc',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-our_history-block' => array(
          'module' => 'views',
          'delta' => 'our_history-block',
          'region' => 'content',
          'weight' => '19',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  $export['history'] = $context;

  return $export;
}
