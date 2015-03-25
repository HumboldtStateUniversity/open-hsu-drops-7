<?php
/**
 * @file
 * hsu_people.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hsu_people_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hsu_people_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HSU People Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People Directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_hsu_people_first_name']['id'] = 'field_hsu_people_first_name';
  $handler->display->display_options['fields']['field_hsu_people_first_name']['table'] = 'field_data_field_hsu_people_first_name';
  $handler->display->display_options['fields']['field_hsu_people_first_name']['field'] = 'field_hsu_people_first_name';
  $handler->display->display_options['fields']['field_hsu_people_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hsu_people_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_hsu_people_last_name']['id'] = 'field_hsu_people_last_name';
  $handler->display->display_options['fields']['field_hsu_people_last_name']['table'] = 'field_data_field_hsu_people_last_name';
  $handler->display->display_options['fields']['field_hsu_people_last_name']['field'] = 'field_hsu_people_last_name';
  $handler->display->display_options['fields']['field_hsu_people_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hsu_people_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Job title */
  $handler->display->display_options['fields']['field_hsu_people_job_title']['id'] = 'field_hsu_people_job_title';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['table'] = 'field_data_field_hsu_people_job_title';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['field'] = 'field_hsu_people_job_title';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_job_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_hsu_people_job_title']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_hsu_people_email']['id'] = 'field_hsu_people_email';
  $handler->display->display_options['fields']['field_hsu_people_email']['table'] = 'field_data_field_hsu_people_email';
  $handler->display->display_options['fields']['field_hsu_people_email']['field'] = 'field_hsu_people_email';
  $handler->display->display_options['fields']['field_hsu_people_email']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['id'] = 'field_hsu_people_phone_number';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['table'] = 'field_data_field_hsu_people_phone_number';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['field'] = 'field_hsu_people_phone_number';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['hide_empty'] = TRUE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_hsu_event_location']['id'] = 'field_hsu_event_location';
  $handler->display->display_options['fields']['field_hsu_event_location']['table'] = 'field_data_field_hsu_event_location';
  $handler->display->display_options['fields']['field_hsu_event_location']['field'] = 'field_hsu_event_location';
  $handler->display->display_options['fields']['field_hsu_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_event_location']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Last name (field_hsu_people_last_name) */
  $handler->display->display_options['sorts']['field_hsu_people_last_name_value']['id'] = 'field_hsu_people_last_name_value';
  $handler->display->display_options['sorts']['field_hsu_people_last_name_value']['table'] = 'field_data_field_hsu_people_last_name';
  $handler->display->display_options['sorts']['field_hsu_people_last_name_value']['field'] = 'field_hsu_people_last_name_value';
  /* Sort criterion: Content: First name (field_hsu_people_first_name) */
  $handler->display->display_options['sorts']['field_hsu_people_first_name_value']['id'] = 'field_hsu_people_first_name_value';
  $handler->display->display_options['sorts']['field_hsu_people_first_name_value']['table'] = 'field_data_field_hsu_people_first_name';
  $handler->display->display_options['sorts']['field_hsu_people_first_name_value']['field'] = 'field_hsu_people_first_name_value';
  /* Sort criterion: Content: Job title (field_hsu_people_job_title) */
  $handler->display->display_options['sorts']['field_hsu_people_job_title_tid']['id'] = 'field_hsu_people_job_title_tid';
  $handler->display->display_options['sorts']['field_hsu_people_job_title_tid']['table'] = 'field_data_field_hsu_people_job_title';
  $handler->display->display_options['sorts']['field_hsu_people_job_title_tid']['field'] = 'field_hsu_people_job_title_tid';
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
    'hsu_people' => 'hsu_people',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'people';
  $export['hsu_people_directory'] = $view;

  return $export;
}
