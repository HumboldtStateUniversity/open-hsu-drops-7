<?php
/**
 * @file
 * hsu_people.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function hsu_people_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hsu_people';
  $page->task = 'page';
  $page->admin_title = 'People';
  $page->admin_description = '';
  $page->path = 'people';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'People',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_hsu_people__panel';
  $handler->task = 'page';
  $handler->subtask = 'hsu_people';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'People',
    'panels_breadcrumbs_paths' => '<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0b4d0f58-582c-4d0c-bd47-3bc911e54e85';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_hsu_people__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5b9f9389-bb17-4fac-838f-afa38c5789af';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'hsu_people_directory-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5b9f9389-bb17-4fac-838f-afa38c5789af';
  $display->content['new-5b9f9389-bb17-4fac-838f-afa38c5789af'] = $pane;
  $display->panels['contentmain'][0] = 'new-5b9f9389-bb17-4fac-838f-afa38c5789af';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hsu_people'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hsu_people_by_job_classification';
  $page->task = 'page';
  $page->admin_title = 'People by Job Classification';
  $page->admin_description = '';
  $page->path = 'people/%classification';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'classification' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          2 => '2',
          1 => 0,
          3 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_hsu_people_by_job_classification__panel';
  $handler->task = 'page';
  $handler->subtask = 'hsu_people_by_job_classification';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'People
%classification',
    'panels_breadcrumbs_paths' => 'people
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%classification';
  $display->uuid = 'edda32e0-883f-4e3c-a533-af293db6fb02';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_hsu_people_by_job_classification__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5d54b55e-7089-4ac2-9c03-65b6cbd88229';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'hsu_people_directory-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5d54b55e-7089-4ac2-9c03-65b6cbd88229';
  $display->content['new-5d54b55e-7089-4ac2-9c03-65b6cbd88229'] = $pane;
  $display->panels['contentmain'][0] = 'new-5d54b55e-7089-4ac2-9c03-65b6cbd88229';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hsu_people_by_job_classification'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'people_list';
  $page->task = 'page';
  $page->admin_title = 'People List';
  $page->admin_description = '';
  $page->path = 'people-list';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'People',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_list__panel_context_5fccdd2c-bc4c-4948-aa7d-89b853caa7e5';
  $handler->task = 'page';
  $handler->subtask = 'people_list';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'People',
    'panels_breadcrumbs_paths' => '<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'People';
  $display->uuid = '0b4d0f58-582c-4d0c-bd47-3bc911e54e85';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_hsu_people__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0682ddd3-34e5-49f7-8c83-34f8c7c3a3d7';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'hsu_people_directory-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0682ddd3-34e5-49f7-8c83-34f8c7c3a3d7';
  $display->content['new-0682ddd3-34e5-49f7-8c83-34f8c7c3a3d7'] = $pane;
  $display->panels['contentmain'][0] = 'new-0682ddd3-34e5-49f7-8c83-34f8c7c3a3d7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['people_list'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'people_list_by_job_classification';
  $page->task = 'page';
  $page->admin_title = 'People List by Job Classification';
  $page->admin_description = '';
  $page->path = 'people-list/%classification';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'classification' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          2 => '2',
          1 => 0,
          3 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_list_by_job_classification__panel_context_c97037f6-25e7-4d01-9592-92d2c1f781ec';
  $handler->task = 'page';
  $handler->subtask = 'people_list_by_job_classification';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'People
%classification',
    'panels_breadcrumbs_paths' => 'people
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%classification';
  $display->uuid = 'edda32e0-883f-4e3c-a533-af293db6fb02';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_hsu_people_by_job_classification__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f92fa262-7b10-4a5d-afee-f550d0d64023';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'hsu_people_directory-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f92fa262-7b10-4a5d-afee-f550d0d64023';
  $display->content['new-f92fa262-7b10-4a5d-afee-f550d0d64023'] = $pane;
  $display->panels['contentmain'][0] = 'new-f92fa262-7b10-4a5d-afee-f550d0d64023';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['people_list_by_job_classification'] = $page;

  return $pages;

}
