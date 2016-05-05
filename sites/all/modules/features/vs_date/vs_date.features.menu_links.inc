<?php
/**
 * @file
 * vs_date.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function vs_date_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_date-popup:admin/config/date/date_popup
  $menu_links['management_date-popup:admin/config/date/date_popup'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/date_popup',
    'router_path' => 'admin/config/date/date_popup',
    'link_title' => 'Date Popup',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the Date Popup settings.',
      ),
      'identifier' => 'management_date-popup:admin/config/date/date_popup',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_date-api:admin/config/date',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Date Popup');


  return $menu_links;
}
