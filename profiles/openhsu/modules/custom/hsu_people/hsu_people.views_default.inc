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
  $handler->display->display_options['hide_attachment_summary'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_hsu_people_job_class',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_hsu_people_profile_image' => 'field_hsu_people_profile_image',
    'field_hsu_people_first_name' => 'field_hsu_people_first_name',
    'field_hsu_people_last_name' => 'field_hsu_people_last_name',
    'title' => 'title',
    'field_hsu_people_job_title' => 'title',
    'nothing' => 'nothing',
    'field_hsu_people_email' => 'nothing',
    'field_hsu_people_phone_number' => 'nothing',
    'field_hsu_people_location' => 'nothing',
    'field_hsu_people_job_class' => 'field_hsu_people_job_class',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_hsu_people_profile_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hsu_people_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hsu_people_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hsu_people_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hsu_people_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hsu_people_phone_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hsu_people_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hsu_people_job_class' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Job classification (field_hsu_people_job_class) */
  $handler->display->display_options['relationships']['field_hsu_people_job_class_tid']['id'] = 'field_hsu_people_job_class_tid';
  $handler->display->display_options['relationships']['field_hsu_people_job_class_tid']['table'] = 'field_data_field_hsu_people_job_class';
  $handler->display->display_options['relationships']['field_hsu_people_job_class_tid']['field'] = 'field_hsu_people_job_class_tid';
  /* Field: Content: Profile Image */
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['id'] = 'field_hsu_people_profile_image';
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['table'] = 'field_data_field_hsu_people_profile_image';
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['field'] = 'field_hsu_people_profile_image';
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['settings'] = array(
    'image_style' => 'hsu_people_listing',
    'image_link' => '',
  );
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
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'hsu-people-name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Job title */
  $handler->display->display_options['fields']['field_hsu_people_job_title']['id'] = 'field_hsu_people_job_title';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['table'] = 'field_data_field_hsu_people_job_title';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['field'] = 'field_hsu_people_job_title';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_job_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_hsu_people_job_title']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>Contact Information</strong>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'hsu-people-contact-information';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_hsu_people_email']['id'] = 'field_hsu_people_email';
  $handler->display->display_options['fields']['field_hsu_people_email']['table'] = 'field_data_field_hsu_people_email';
  $handler->display->display_options['fields']['field_hsu_people_email']['field'] = 'field_hsu_people_email';
  $handler->display->display_options['fields']['field_hsu_people_email']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_email']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_hsu_people_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['id'] = 'field_hsu_people_phone_number';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['table'] = 'field_data_field_hsu_people_phone_number';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['field'] = 'field_hsu_people_phone_number';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['hide_empty'] = TRUE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_hsu_people_location']['id'] = 'field_hsu_people_location';
  $handler->display->display_options['fields']['field_hsu_people_location']['table'] = 'field_data_field_hsu_people_location';
  $handler->display->display_options['fields']['field_hsu_people_location']['field'] = 'field_hsu_people_location';
  $handler->display->display_options['fields']['field_hsu_people_location']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_hsu_people_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_location']['hide_empty'] = TRUE;
  /* Field: Content: Job classification */
  $handler->display->display_options['fields']['field_hsu_people_job_class']['id'] = 'field_hsu_people_job_class';
  $handler->display->display_options['fields']['field_hsu_people_job_class']['table'] = 'field_data_field_hsu_people_job_class';
  $handler->display->display_options['fields']['field_hsu_people_job_class']['field'] = 'field_hsu_people_job_class';
  $handler->display->display_options['fields']['field_hsu_people_job_class']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_job_class']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hsu_people_job_class']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_hsu_people_job_class']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_job_class']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Last name (field_hsu_people_last_name) */
  $handler->display->display_options['sorts']['field_hsu_people_last_name_value']['id'] = 'field_hsu_people_last_name_value';
  $handler->display->display_options['sorts']['field_hsu_people_last_name_value']['table'] = 'field_data_field_hsu_people_last_name';
  $handler->display->display_options['sorts']['field_hsu_people_last_name_value']['field'] = 'field_hsu_people_last_name_value';
  /* Sort criterion: Content: First name (field_hsu_people_first_name) */
  $handler->display->display_options['sorts']['field_hsu_people_first_name_value']['id'] = 'field_hsu_people_first_name_value';
  $handler->display->display_options['sorts']['field_hsu_people_first_name_value']['table'] = 'field_data_field_hsu_people_first_name';
  $handler->display->display_options['sorts']['field_hsu_people_first_name_value']['field'] = 'field_hsu_people_first_name_value';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_hsu_people_job_class_tid';
  $handler->display->display_options['arguments']['name']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Job classification (field_hsu_people_job_class) */
  $handler->display->display_options['filters']['field_hsu_people_job_class_tid']['id'] = 'field_hsu_people_job_class_tid';
  $handler->display->display_options['filters']['field_hsu_people_job_class_tid']['table'] = 'field_data_field_hsu_people_job_class';
  $handler->display->display_options['filters']['field_hsu_people_job_class_tid']['field'] = 'field_hsu_people_job_class_tid';
  $handler->display->display_options['filters']['field_hsu_people_job_class_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_hsu_people_job_class_tid']['value'] = '';
  $handler->display->display_options['filters']['field_hsu_people_job_class_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_hsu_people_job_class_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_hsu_people_job_class_tid']['vocabulary'] = 'hsu_people_job_classifications';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_hsu_people_job_class',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Profile Image */
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['id'] = 'field_hsu_people_profile_image';
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['table'] = 'field_data_field_hsu_people_profile_image';
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['field'] = 'field_hsu_people_profile_image';
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hsu_people_profile_image']['settings'] = array(
    'image_style' => 'hsu_people_detail',
    'image_link' => 'content',
  );
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'hsu-people-name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Job title */
  $handler->display->display_options['fields']['field_hsu_people_job_title']['id'] = 'field_hsu_people_job_title';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['table'] = 'field_data_field_hsu_people_job_title';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['field'] = 'field_hsu_people_job_title';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hsu_people_job_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_hsu_people_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_job_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_hsu_people_job_title']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>Contact Information</strong>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'hsu-people-contact-information';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['id'] = 'field_hsu_people_phone_number';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['table'] = 'field_data_field_hsu_people_phone_number';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['field'] = 'field_hsu_people_phone_number';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_phone_number']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '[title]';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_hsu_people_location']['id'] = 'field_hsu_people_location';
  $handler->display->display_options['fields']['field_hsu_people_location']['table'] = 'field_data_field_hsu_people_location';
  $handler->display->display_options['fields']['field_hsu_people_location']['field'] = 'field_hsu_people_location';
  $handler->display->display_options['fields']['field_hsu_people_location']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hsu_people_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_hsu_people_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_location']['hide_empty'] = TRUE;
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_hsu_people_email']['id'] = 'field_hsu_people_email';
  $handler->display->display_options['fields']['field_hsu_people_email']['table'] = 'field_data_field_hsu_people_email';
  $handler->display->display_options['fields']['field_hsu_people_email']['field'] = 'field_hsu_people_email';
  $handler->display->display_options['fields']['field_hsu_people_email']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hsu_people_email']['alter']['text'] = '<div class="col-sm-6 people-list">
	<div class="col-sm-4">
	[field_hsu_people_profile_image]	
	</div>
	<div class="col-sm-8">
	<h3>[body]</h3>	
	<h4>[field_hsu_people_job_title]</h4>
	<ul>
		<li class="email">[field_hsu_people_email]</li>
		<li class="phone">[field_hsu_people_phone_number] </li>
		<li class="location">[field_hsu_people_location] </li>
	</ul> 
	</div>
</div>';
  $handler->display->display_options['fields']['field_hsu_people_email']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_hsu_people_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_email']['hide_empty'] = TRUE;
  /* Field: Content: Job classification */
  $handler->display->display_options['fields']['field_hsu_people_job_class']['id'] = 'field_hsu_people_job_class';
  $handler->display->display_options['fields']['field_hsu_people_job_class']['table'] = 'field_data_field_hsu_people_job_class';
  $handler->display->display_options['fields']['field_hsu_people_job_class']['field'] = 'field_hsu_people_job_class';
  $handler->display->display_options['fields']['field_hsu_people_job_class']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_people_job_class']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hsu_people_job_class']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_job_class']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_people_job_class']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['path'] = 'people';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_hsu_people_job_class_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['name']['summary_options']['separator'] = '|';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $export['hsu_people_directory'] = $view;

  return $export;
}
