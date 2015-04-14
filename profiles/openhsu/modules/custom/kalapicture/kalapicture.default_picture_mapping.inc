<?php
/**
 * @file
 * kalapicture.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function kalapicture_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'kalapicture_12';
  $picture_mapping->machine_name = 'kalapicture_12';
  $picture_mapping->breakpoint_group = 'kalapicture_12';
  $picture_mapping->mapping = array(
    'breakpoints.kalapicture.screen-xxs' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_12_breakpoints_kalapicture_screen-xxs_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_12_breakpoints_kalapicture_screen-xxs_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-xs' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_12_breakpoints_kalapicture_screen-xs_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_12_breakpoints_kalapicture_screen-xs_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-sm' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_12_breakpoints_kalapicture_screen-sm_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_12_breakpoints_kalapicture_screen-sm_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-md' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_12_breakpoints_kalapicture_screen-md_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_12_breakpoints_kalapicture_screen-md_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-lg' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_12_breakpoints_kalapicture_screen-lg_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_12_breakpoints_kalapicture_screen-lg_2x',
      ),
    ),
  );
  $export['kalapicture_12'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'kalapicture_3';
  $picture_mapping->machine_name = 'kalapicture_3';
  $picture_mapping->breakpoint_group = 'kalapicture_3';
  $picture_mapping->mapping = array(
    'breakpoints.kalapicture.screen-xxs' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_3_breakpoints_kalapicture_screen-xxs_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_3_breakpoints_kalapicture_screen-xxs_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-xs' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_3_breakpoints_kalapicture_screen-xs_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_3_breakpoints_kalapicture_screen-xs_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-sm' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_3_breakpoints_kalapicture_screen-sm_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_3_breakpoints_kalapicture_screen-sm_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-md' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_3_breakpoints_kalapicture_screen-md_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_3_breakpoints_kalapicture_screen-md_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-lg' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_3_breakpoints_kalapicture_screen-lg_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_3_breakpoints_kalapicture_screen-lg_2x',
      ),
    ),
  );
  $export['kalapicture_3'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'kalapicture_col_md_9';
  $picture_mapping->machine_name = 'kalapicture_col_md_9';
  $picture_mapping->breakpoint_group = 'kalapicture_col_md_9';
  $picture_mapping->mapping = array(
    'breakpoints.kalapicture.screen-xs' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-xs_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-xs_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-xxs' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-xxs_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-xxs_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-sm' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-sm_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-sm_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-md' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-md_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-md_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-lg' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-lg_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_col_md_9_breakpoints_kalapicture_screen-lg_2x',
      ),
    ),
  );
  $export['kalapicture_col_md_9'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'kalapicture_jumbotron';
  $picture_mapping->machine_name = 'kalapicture_jumbotron';
  $picture_mapping->breakpoint_group = 'kalapicture_jumbotron';
  $picture_mapping->mapping = array(
    'breakpoints.kalapicture.screen-xs' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-xs_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-xs_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-xxs' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-xxs_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-xxs_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-sm' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-sm_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-sm_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-md' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-md_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-md_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-lg' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-lg_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-lg_2x',
      ),
    ),
    'breakpoints.kalapicture.screen-xl' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-xl_1x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'kalapicture_jumbotron_breakpoints_kalapicture_screen-xl_2x',
      ),
    ),
  );
  $export['kalapicture_jumbotron'] = $picture_mapping;

  return $export;
}
