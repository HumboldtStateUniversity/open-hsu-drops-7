<?php
/**
 * @file
 * hsu_people.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hsu_people_taxonomy_default_vocabularies() {
  return array(
    'hsu_people_job_classifications' => array(
      'name' => 'Job classification',
      'machine_name' => 'hsu_people_job_classifications',
      'description' => 'Splits people into two listings in the HSU People Feature, either Faculty or Staff.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'hsu_people_job_titles' => array(
      'name' => 'Job titles',
      'machine_name' => 'hsu_people_job_titles',
      'description' => 'Vocabulary used to help sort the /people listing in the HSU People Feature.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
