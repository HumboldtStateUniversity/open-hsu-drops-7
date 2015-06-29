<?php
/**
 * @file
 * hsu_people.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function hsu_people_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Staff',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 4,
    'uuid' => '0a3d5914-ea0e-4de1-94bf-73a1921df8c5',
    'vocabulary_machine_name' => 'hsu_people_job_classifications',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Faculty',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '8a0dd058-eea0-4dc7-8eed-b9abb4ab80b0',
    'vocabulary_machine_name' => 'hsu_people_job_classifications',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
