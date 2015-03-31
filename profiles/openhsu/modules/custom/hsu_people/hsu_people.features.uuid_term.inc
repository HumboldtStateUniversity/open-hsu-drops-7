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
    'weight' => 0,
    'uuid' => '0a3d5914-ea0e-4de1-94bf-73a1921df8c5',
    'vocabulary_machine_name' => 'hsu_people_job_classifications',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Adjunct',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 2,
    'uuid' => '15359e7a-8db8-4ba9-abcc-f82d904d03d0',
    'vocabulary_machine_name' => 'hsu_people_job_titles',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Emeritus',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '2707fc87-e36a-4969-bd1e-956c9b914803',
    'vocabulary_machine_name' => 'hsu_people_job_titles',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Lecturer',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 1,
    'uuid' => '3df9a13d-29aa-410c-9d91-d154ac26090e',
    'vocabulary_machine_name' => 'hsu_people_job_titles',
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
  $terms[] = array(
    'name' => 'Student Assistant',
    'description' => NULL,
    'format' => NULL,
    'weight' => 3,
    'uuid' => 'c1561d50-5ab3-4d32-9495-aad5446b55e1',
    'vocabulary_machine_name' => 'hsu_people_job_titles',
  );
  return $terms;
}
