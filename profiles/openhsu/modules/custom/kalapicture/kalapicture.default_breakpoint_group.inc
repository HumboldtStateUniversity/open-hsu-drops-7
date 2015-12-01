<?php
/**
 * @file
 * kalapicture.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function kalapicture_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'kalapicture_12';
  $breakpoint_group->name = 'Picture Full (12/12)';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.kalapicture.screen-xxs',
    1 => 'breakpoints.kalapicture.screen-xs',
    2 => 'breakpoints.kalapicture.screen-sm',
    3 => 'breakpoints.kalapicture.screen-md',
    4 => 'breakpoints.kalapicture.screen-lg',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['kalapicture_12'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'kalapicture_3';
  $breakpoint_group->name = 'Picture Quarter (3/12)';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.kalapicture.screen-xxs',
    1 => 'breakpoints.kalapicture.screen-xs',
    2 => 'breakpoints.kalapicture.screen-sm',
    3 => 'breakpoints.kalapicture.screen-md',
    4 => 'breakpoints.kalapicture.screen-lg',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['kalapicture_3'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'kalapicture_6';
  $breakpoint_group->name = 'Picture Half (6/12)';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.kalapicture.screen-xxs',
    1 => 'breakpoints.kalapicture.screen-xs',
    2 => 'breakpoints.kalapicture.screen-sm',
    3 => 'breakpoints.kalapicture.screen-md',
    4 => 'breakpoints.kalapicture.screen-lg',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['kalapicture_6'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'kalapicture_col_md_9';
  $breakpoint_group->name = 'Kalapicture 3/4 (col-md-9)';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.kalapicture.screen-xs',
    1 => 'breakpoints.kalapicture.screen-xxs',
    2 => 'breakpoints.kalapicture.screen-sm',
    3 => 'breakpoints.kalapicture.screen-md',
    4 => 'breakpoints.kalapicture.screen-lg',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['kalapicture_col_md_9'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'kalapicture_jumbotron';
  $breakpoint_group->name = 'Jumbotron 100% width';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.kalapicture.screen-xs',
    1 => 'breakpoints.kalapicture.screen-xxs',
    2 => 'breakpoints.kalapicture.screen-sm',
    3 => 'breakpoints.kalapicture.screen-md',
    4 => 'breakpoints.kalapicture.screen-lg',
    5 => 'breakpoints.kalapicture.screen-xl',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['kalapicture_jumbotron'] = $breakpoint_group;

  return $export;
}
