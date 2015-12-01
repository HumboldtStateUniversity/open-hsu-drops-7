<?php
/**
 * @file
 * hsu_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hsu_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hsu_events';
  $view->description = 'Content Panes for HSU Events.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HSU Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all events';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_hsu_event_date']['id'] = 'field_hsu_event_date';
  $handler->display->display_options['fields']['field_hsu_event_date']['table'] = 'field_data_field_hsu_event_date';
  $handler->display->display_options['fields']['field_hsu_event_date']['field'] = 'field_hsu_event_date';
  $handler->display->display_options['fields']['field_hsu_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_event_date']['settings'] = array(
    'format_type' => 'hsu_events_listing',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_hsu_event_date) */
  $handler->display->display_options['sorts']['field_hsu_event_date_value']['id'] = 'field_hsu_event_date_value';
  $handler->display->display_options['sorts']['field_hsu_event_date_value']['table'] = 'field_data_field_hsu_event_date';
  $handler->display->display_options['sorts']['field_hsu_event_date_value']['field'] = 'field_hsu_event_date_value';
  /* Sort criterion: Content: Date - end date (field_hsu_event_date:value2) */
  $handler->display->display_options['sorts']['field_hsu_event_date_value2']['id'] = 'field_hsu_event_date_value2';
  $handler->display->display_options['sorts']['field_hsu_event_date_value2']['table'] = 'field_data_field_hsu_event_date';
  $handler->display->display_options['sorts']['field_hsu_event_date_value2']['field'] = 'field_hsu_event_date_value2';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
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
    'hsu_event' => 'hsu_event',
  );
  /* Filter criterion: Content: Date -  start date (field_hsu_event_date) */
  $handler->display->display_options['filters']['field_hsu_event_date_value']['id'] = 'field_hsu_event_date_value';
  $handler->display->display_options['filters']['field_hsu_event_date_value']['table'] = 'field_data_field_hsu_event_date';
  $handler->display->display_options['filters']['field_hsu_event_date_value']['field'] = 'field_hsu_event_date_value';
  $handler->display->display_options['filters']['field_hsu_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_hsu_event_date_value']['default_date'] = 'now';

  /* Display: Upcoming Events Content pane */
  $handler = $view->new_display('panel_pane', 'Upcoming Events Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_hsu_event_date']['id'] = 'field_hsu_event_date';
  $handler->display->display_options['fields']['field_hsu_event_date']['table'] = 'field_data_field_hsu_event_date';
  $handler->display->display_options['fields']['field_hsu_event_date']['field'] = 'field_hsu_event_date';
  $handler->display->display_options['fields']['field_hsu_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;

  /* Display: Events Page */
  $handler = $view->new_display('page', 'Events Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_hsu_event_date']['id'] = 'field_hsu_event_date';
  $handler->display->display_options['fields']['field_hsu_event_date']['table'] = 'field_data_field_hsu_event_date';
  $handler->display->display_options['fields']['field_hsu_event_date']['field'] = 'field_hsu_event_date';
  $handler->display->display_options['fields']['field_hsu_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_event_date']['settings'] = array(
    'format_type' => 'hsu_events_listing',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['hsu_events'] = $view;

  return $export;
}
