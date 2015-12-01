<?php
/**
 * @file
 * kalapicture.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kalapicture_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function kalapicture_image_default_styles() {
  $styles = array();

  // Exported image style: kalapicture_12.
  $styles['kalapicture_12'] = array(
    'label' => 'Picture Full',
    'effects' => array(
      32 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1170,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-lg_1x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-lg_1x'] = array(
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-lg_1x',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1140,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-lg_2x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-lg_2x'] = array(
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-lg_2x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2280,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-md_1x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-md_1x'] = array(
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-md_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-md_2x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-md_2x'] = array(
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-md_2x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1880,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-sm_1x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-sm_1x'] = array(
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-sm_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 720,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-sm_2x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-sm_2x'] = array(
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-sm_2x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-xs_1x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-xs_1x'] = array(
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-xs_1x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 737,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-xs_2x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-xs_2x'] = array(
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-xs_2x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1474,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-xxs_1x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-xxs_1x'] = array(
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-xxs_1x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 449,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-xxs_2x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-xxs_2x'] = array(
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-xxs_2x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 898,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_3.
  $styles['kalapicture_3'] = array(
    'label' => 'Picture Quarter',
    'effects' => array(
      22 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 263,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-lg_1x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-lg_1x'] = array(
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-lg_1x',
    'effects' => array(
      23 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 263,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-lg_2x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-lg_2x'] = array(
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-lg_2x',
    'effects' => array(
      24 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 526,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-md_1x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-md_1x'] = array(
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-md_1x',
    'effects' => array(
      25 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 213,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-md_2x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-md_2x'] = array(
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-md_2x',
    'effects' => array(
      26 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 426,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-sm_1x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-sm_1x'] = array(
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-sm_1x',
    'effects' => array(
      28 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 158,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-sm_2x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-sm_2x'] = array(
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-sm_2x',
    'effects' => array(
      29 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 316,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-xs_1x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-xs_1x'] = array(
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-xs_1x',
    'effects' => array(
      33 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 210,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-xs_2x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-xs_2x'] = array(
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-xs_2x',
    'effects' => array(
      34 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 420,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-xxs_1x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-xxs_1x'] = array(
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-xxs_1x',
    'effects' => array(
      30 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 130,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-xxs_2x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-xxs_2x'] = array(
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-xxs_2x',
    'effects' => array(
      31 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 260,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_6.
  $styles['kalapicture_6'] = array(
    'label' => 'Picture Half',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 555,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-lg_1x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-lg_1x'] = array(
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-lg_1x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 555,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-lg_2x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-lg_2x'] = array(
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-lg_2x',
    'effects' => array(
      15 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1110,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-md_1x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-md_1x'] = array(
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-md_1x',
    'effects' => array(
      16 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 455,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-md_2x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-md_2x'] = array(
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-md_2x',
    'effects' => array(
      17 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 910,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-sm_1x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-sm_1x'] = array(
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-sm_1x',
    'effects' => array(
      18 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 345,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-sm_2x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-sm_2x'] = array(
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-sm_2x',
    'effects' => array(
      19 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 690,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-xs_1x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-xs_1x'] = array(
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-xs_1x',
    'effects' => array(
      20 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 354,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-xs_2x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-xs_2x'] = array(
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-xs_2x',
    'effects' => array(
      21 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 690,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-xxs_1x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-xxs_1x'] = array(
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-xxs_1x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 450,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-xxs_2x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-xxs_2x'] = array(
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-xxs_2x',
    'effects' => array(
      13 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 900,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_col_md_9.
  $styles['kalapicture_col_md_9'] = array(
    'label' => 'kalapicture_col_md_9',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 450,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_col_md_9_breakpoints_kalapicture_screen-lg_1x.
  $styles['kalapicture_col_md_9_breakpoints_kalapicture_screen-lg_1x'] = array(
    'label' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-lg_1x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 848,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_col_md_9_breakpoints_kalapicture_screen-lg_2x.
  $styles['kalapicture_col_md_9_breakpoints_kalapicture_screen-lg_2x'] = array(
    'label' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-lg_2x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1696,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_col_md_9_breakpoints_kalapicture_screen-md_1x.
  $styles['kalapicture_col_md_9_breakpoints_kalapicture_screen-md_1x'] = array(
    'label' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-md_1x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 693,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_col_md_9_breakpoints_kalapicture_screen-md_2x.
  $styles['kalapicture_col_md_9_breakpoints_kalapicture_screen-md_2x'] = array(
    'label' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-md_2x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1386,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_col_md_9_breakpoints_kalapicture_screen-sm_1x.
  $styles['kalapicture_col_md_9_breakpoints_kalapicture_screen-sm_1x'] = array(
    'label' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-sm_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 720,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_col_md_9_breakpoints_kalapicture_screen-sm_2x.
  $styles['kalapicture_col_md_9_breakpoints_kalapicture_screen-sm_2x'] = array(
    'label' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-sm_2x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1440,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_col_md_9_breakpoints_kalapicture_screen-xs_1x.
  $styles['kalapicture_col_md_9_breakpoints_kalapicture_screen-xs_1x'] = array(
    'label' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-xs_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 737,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_col_md_9_breakpoints_kalapicture_screen-xs_2x.
  $styles['kalapicture_col_md_9_breakpoints_kalapicture_screen-xs_2x'] = array(
    'label' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-xs_2x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1474,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_col_md_9_breakpoints_kalapicture_screen-xxs_1x.
  $styles['kalapicture_col_md_9_breakpoints_kalapicture_screen-xxs_1x'] = array(
    'label' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-xxs_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 450,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_col_md_9_breakpoints_kalapicture_screen-xxs_2x.
  $styles['kalapicture_col_md_9_breakpoints_kalapicture_screen-xxs_2x'] = array(
    'label' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-xxs_2x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 900,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_jumbotron.
  $styles['kalapicture_jumbotron'] = array(
    'label' => 'Jumbotron',
    'effects' => array(),
  );

  // Exported image style: kalapicture_jumbotron_breakpoints_kalapicture_screen-lg_1x.
  $styles['kalapicture_jumbotron_breakpoints_kalapicture_screen-lg_1x'] = array(
    'label' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-lg_1x',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1399,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_jumbotron_breakpoints_kalapicture_screen-lg_2x.
  $styles['kalapicture_jumbotron_breakpoints_kalapicture_screen-lg_2x'] = array(
    'label' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-lg_2x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2798,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_jumbotron_breakpoints_kalapicture_screen-md_1x.
  $styles['kalapicture_jumbotron_breakpoints_kalapicture_screen-md_1x'] = array(
    'label' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-md_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1199,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_jumbotron_breakpoints_kalapicture_screen-md_2x.
  $styles['kalapicture_jumbotron_breakpoints_kalapicture_screen-md_2x'] = array(
    'label' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-md_2x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2398,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_jumbotron_breakpoints_kalapicture_screen-sm_1x.
  $styles['kalapicture_jumbotron_breakpoints_kalapicture_screen-sm_1x'] = array(
    'label' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-sm_1x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 991,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_jumbotron_breakpoints_kalapicture_screen-sm_2x.
  $styles['kalapicture_jumbotron_breakpoints_kalapicture_screen-sm_2x'] = array(
    'label' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-sm_2x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1982,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_jumbotron_breakpoints_kalapicture_screen-xl_1x.
  $styles['kalapicture_jumbotron_breakpoints_kalapicture_screen-xl_1x'] = array(
    'label' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-xl_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1800,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_jumbotron_breakpoints_kalapicture_screen-xl_2x.
  $styles['kalapicture_jumbotron_breakpoints_kalapicture_screen-xl_2x'] = array(
    'label' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-xl_2x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 3600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_jumbotron_breakpoints_kalapicture_screen-xs_1x.
  $styles['kalapicture_jumbotron_breakpoints_kalapicture_screen-xs_1x'] = array(
    'label' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-xs_1x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 767,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_jumbotron_breakpoints_kalapicture_screen-xs_2x.
  $styles['kalapicture_jumbotron_breakpoints_kalapicture_screen-xs_2x'] = array(
    'label' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-xs_2x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1534,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_jumbotron_breakpoints_kalapicture_screen-xxs_1x.
  $styles['kalapicture_jumbotron_breakpoints_kalapicture_screen-xxs_1x'] = array(
    'label' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-xxs_1x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 479,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: kalapicture_jumbotron_breakpoints_kalapicture_screen-xxs_2x.
  $styles['kalapicture_jumbotron_breakpoints_kalapicture_screen-xxs_2x'] = array(
    'label' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-xxs_2x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 958,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
