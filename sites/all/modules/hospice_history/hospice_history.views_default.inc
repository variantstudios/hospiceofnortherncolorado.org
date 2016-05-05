<?php
/**
 * @file
 * hospice_history.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hospice_history_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'our_history';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Our History';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our History';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Milestone (field_milestone) */
  $handler->display->display_options['relationships']['field_milestone_value']['id'] = 'field_milestone_value';
  $handler->display->display_options['relationships']['field_milestone_value']['table'] = 'field_data_field_milestone';
  $handler->display->display_options['relationships']['field_milestone_value']['field'] = 'field_milestone_value';
  $handler->display->display_options['relationships']['field_milestone_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Field collection item: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['relationship'] = 'field_milestone_value';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Milestone */
  $handler->display->display_options['fields']['field_milestone_text']['id'] = 'field_milestone_text';
  $handler->display->display_options['fields']['field_milestone_text']['table'] = 'field_data_field_milestone_text';
  $handler->display->display_options['fields']['field_milestone_text']['field'] = 'field_milestone_text';
  $handler->display->display_options['fields']['field_milestone_text']['relationship'] = 'field_milestone_value';
  $handler->display->display_options['fields']['field_milestone_text']['label'] = '';
  $handler->display->display_options['fields']['field_milestone_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_milestone_text']['alter']['text'] = '<div class="year">
    <h6>[field_year]</h6>
</div>
<div class="milestone">
    <div class="connector"></div>
<p>[field_milestone_text]</p>
</div>';
  $handler->display->display_options['fields']['field_milestone_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_milestone_text']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'history' => 'history',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['our_history'] = $view;

  return $export;
}
