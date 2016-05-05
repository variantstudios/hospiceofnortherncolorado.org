<?php
/**
 * @file
 * vs_static_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function vs_static_page_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_static-page:node/add/page
  $menu_links['navigation_static-page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Static Page',
    'options' => array(
      'attributes' => array(
        'title' => 'Creates static pages, such as an \'About us\' page.',
      ),
      'identifier' => 'navigation_static-page:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Static Page');


  return $menu_links;
}
