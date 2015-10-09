<?php
/**
 * @file
 * hsu_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hsu_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hsu_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function hsu_news_field_default_field_instances_alter(&$data) {
  if (isset($data['node-panopoly_news_article-field_featured_image'])) {
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_crop_info'] = TRUE; /* WAS: '' */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_default_crop_area'] = TRUE; /* WAS: '' */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_enable'] = FALSE; /* WAS: '' */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_inline_crop'] = FALSE; /* WAS: '' */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_instant_crop'] = FALSE; /* WAS: '' */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_instant_preview'] = TRUE; /* WAS: '' */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_keyboard'] = TRUE; /* WAS: '' */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_maximize_default_crop_area'] = FALSE; /* WAS: '' */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_require_cropping'] = array(); /* WAS: '' */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_styles_list'] = array(); /* WAS: '' */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_styles_mode'] = 'include'; /* WAS: '' */
    $data['node-panopoly_news_article-field_featured_image']['widget']['settings']['manualcrop_thumblist'] = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function hsu_news_default_page_manager_pages_alter(&$data) {
  if (isset($data['panopoly_news_articles_author'])) {
    $data['panopoly_news_articles_author']->default_handlers['page_panopoly_news_articles_author_panel_context']->conf['display']->uuid = '23390ad6-54a8-46ed-a1f6-65b835c7a400'; /* WAS: '' */
    unset($data['panopoly_news_articles_author']->default_handlers['page_panopoly_news_articles_author_panel_context']->conf['display']->content['new-1']);
    unset($data['panopoly_news_articles_author']->default_handlers['page_panopoly_news_articles_author_panel_context']->conf['display']->content['new-2']);
    unset($data['panopoly_news_articles_author']->default_handlers['page_panopoly_news_articles_author_panel_context']->conf['display']->content['new-3']);
    unset($data['panopoly_news_articles_author']->default_handlers['page_panopoly_news_articles_author_panel_context']->conf['display']->content['new-4']);
    unset($data['panopoly_news_articles_author']->default_handlers['page_panopoly_news_articles_author_panel_context']->conf['display']->content['new-5']);
    unset($data['panopoly_news_articles_author']->default_handlers['page_panopoly_news_articles_author_panel_context']->conf['display']->panels['contentmain']);
    unset($data['panopoly_news_articles_author']->default_handlers['page_panopoly_news_articles_author_panel_context']->conf['display']->panels['footer']);
    unset($data['panopoly_news_articles_author']->default_handlers['page_panopoly_news_articles_author_panel_context']->conf['display']->panels['sidebar']);
  }
  if (isset($data['panopoly_news_home_page'])) {
    $data['panopoly_news_home_page']->default_handlers['page_panopoly_news_home_page_panel_context']->conf['display']->uuid = '7801271a-6c78-4c3a-8391-be24a123d7fe'; /* WAS: '' */
    unset($data['panopoly_news_home_page']->default_handlers['page_panopoly_news_home_page_panel_context']->conf['display']->content['new-10']);
    unset($data['panopoly_news_home_page']->default_handlers['page_panopoly_news_home_page_panel_context']->conf['display']->content['new-11']);
    unset($data['panopoly_news_home_page']->default_handlers['page_panopoly_news_home_page_panel_context']->conf['display']->content['new-6']);
    unset($data['panopoly_news_home_page']->default_handlers['page_panopoly_news_home_page_panel_context']->conf['display']->content['new-7']);
    unset($data['panopoly_news_home_page']->default_handlers['page_panopoly_news_home_page_panel_context']->conf['display']->content['new-8']);
    unset($data['panopoly_news_home_page']->default_handlers['page_panopoly_news_home_page_panel_context']->conf['display']->content['new-9']);
    unset($data['panopoly_news_home_page']->default_handlers['page_panopoly_news_home_page_panel_context']->conf['display']->panels['contentcolumn1']);
    unset($data['panopoly_news_home_page']->default_handlers['page_panopoly_news_home_page_panel_context']->conf['display']->panels['contentcolumn2']);
    unset($data['panopoly_news_home_page']->default_handlers['page_panopoly_news_home_page_panel_context']->conf['display']->panels['contentfooter']);
    unset($data['panopoly_news_home_page']->default_handlers['page_panopoly_news_home_page_panel_context']->conf['display']->panels['sidebar']);
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function hsu_news_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:panopoly_news_article:default'])) {
    $data['node:panopoly_news_article:default']->display->uuid = 'f84bc0ce-63fe-48b9-bf11-0765b98d36c3'; /* WAS: '' */
    unset($data['node:panopoly_news_article:default']->display->content['new-1']);
    unset($data['node:panopoly_news_article:default']->display->content['new-2']);
    unset($data['node:panopoly_news_article:default']->display->content['new-3']);
    unset($data['node:panopoly_news_article:default']->display->panels['contentmain']);
    unset($data['node:panopoly_news_article:default']->display->panels['sidebar']);
  }
  if (isset($data['node:panopoly_news_article:default:default'])) {
    $data['node:panopoly_news_article:default:default']->display->title_pane = 0; /* WAS: 'new-4' */
    $data['node:panopoly_news_article:default:default']->display->uuid = 'e31e6997-70a4-4f9c-9e30-249820c0d3f5'; /* WAS: '' */
    unset($data['node:panopoly_news_article:default:default']->display->content['new-4']);
    unset($data['node:panopoly_news_article:default:default']->display->content['new-5']);
    unset($data['node:panopoly_news_article:default:default']->display->content['new-6']);
    unset($data['node:panopoly_news_article:default:default']->display->panels['contentmain']);
  }
  if (isset($data['node:panopoly_news_article:default:featured'])) {
    $data['node:panopoly_news_article:default:featured']->display->uuid = '407550e7-23a6-4bae-a9e8-567ef81346cb'; /* WAS: '' */
    unset($data['node:panopoly_news_article:default:featured']->display->content['new-7']);
    unset($data['node:panopoly_news_article:default:featured']->display->content['new-8']);
    unset($data['node:panopoly_news_article:default:featured']->display->panels['contentmain']);
  }
  if (isset($data['node:panopoly_news_article:default:teaser'])) {
    $data['node:panopoly_news_article:default:teaser']->display->title_pane = 0; /* WAS: 'new-11' */
    $data['node:panopoly_news_article:default:teaser']->display->uuid = '8cd61e3d-f02f-46a1-8cae-d8a4e66e2512'; /* WAS: '' */
    unset($data['node:panopoly_news_article:default:teaser']->display->content['new-10']);
    unset($data['node:panopoly_news_article:default:teaser']->display->content['new-11']);
    unset($data['node:panopoly_news_article:default:teaser']->display->content['new-9']);
    unset($data['node:panopoly_news_article:default:teaser']->display->panels['center']);
  }
}
