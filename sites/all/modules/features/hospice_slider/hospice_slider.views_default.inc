<?php
/**
 * @file
 * hospice_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hospice_slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'home_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Home Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'slider' => 'slider',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_slider_body']['id'] = 'field_slider_body';
  $handler->display->display_options['fields']['field_slider_body']['table'] = 'field_data_field_slider_body';
  $handler->display->display_options['fields']['field_slider_body']['field'] = 'field_slider_body';
  $handler->display->display_options['fields']['field_slider_body']['label'] = '';
  $handler->display->display_options['fields']['field_slider_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slider_body']['type'] = 'text_plain';
  /* Field: Content: Slider Link */
  $handler->display->display_options['fields']['field_slider_link']['id'] = 'field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['table'] = 'field_data_field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['field'] = 'field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['label'] = '';
  $handler->display->display_options['fields']['field_slider_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slider_link']['click_sort_column'] = 'url';
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_slider_images']['id'] = 'field_slider_images';
  $handler->display->display_options['fields']['field_slider_images']['table'] = 'field_data_field_slider_images';
  $handler->display->display_options['fields']['field_slider_images']['field'] = 'field_slider_images';
  $handler->display->display_options['fields']['field_slider_images']['label'] = '';
  $handler->display->display_options['fields']['field_slider_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_images']['alter']['text'] = '[field_slider_images]
<div class="home-intro-block">
<h4>[title]</h4>
<p>[field_slider_body]</p>
<div class="donate-btn">[field_slider_link]</div>
</div>';
  $handler->display->display_options['fields']['field_slider_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slider_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $export['home_slider'] = $view;

  return $export;
}
