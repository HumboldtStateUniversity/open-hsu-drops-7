<?php
/**
 * @file
 * hsu_people.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hsu_people_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hsu_people_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function hsu_people_image_default_styles() {
  $styles = array();

  // Exported image style: hsu_people_detail.
  $styles['hsu_people_detail'] = array(
    'label' => 'hsu_people_detail',
    'effects' => array(
      10 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 280,
          'height' => '',
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'hsu_people_detail',
        ),
        'weight' => 0,
      ),
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 280,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      9 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 280,
          'height' => 270,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: hsu_people_listing.
  $styles['hsu_people_listing'] = array(
    'label' => 'hsu_people_listing',
    'effects' => array(
      11 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'hsu_people_detail',
          'apply_all_effects' => 0,
        ),
        'weight' => 0,
      ),
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 120,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      6 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 120,
          'height' => 115,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: hsu_people_w280.
  $styles['hsu_people_w280'] = array(
    'label' => 'hsu_people_w280',
    'effects' => array(
      12 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'hsu_people_detail',
          'apply_all_effects' => 0,
        ),
        'weight' => 0,
      ),
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 280,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function hsu_people_node_info() {
  $items = array(
    'hsu_people' => array(
      'name' => t('People'),
      'base' => 'node_content',
      'description' => t('Creates a person who will appear in the directory listing at /people.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
