<?php
/**
 * @file
 * hsu_people.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function hsu_people_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'hsu_people';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:hsu_people:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = 'people-wrap';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'radix_burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:field_hsu_people_job_title';
  $display->uuid = '53d47603-76d7-4163-9c9e-70114fe9f873';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:hsu_people:default:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b759b601-0f93-4139-a602-77340ebb0493';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b759b601-0f93-4139-a602-77340ebb0493';
  $display->content['new-b759b601-0f93-4139-a602-77340ebb0493'] = $pane;
  $display->panels['contentmain'][0] = 'new-b759b601-0f93-4139-a602-77340ebb0493';
  $pane = new stdClass();
  $pane->pid = 'new-dc5db706-b685-49e3-9579-dad7b8da6539';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_hsu_people';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dc5db706-b685-49e3-9579-dad7b8da6539';
  $display->content['new-dc5db706-b685-49e3-9579-dad7b8da6539'] = $pane;
  $display->panels['contentmain'][1] = 'new-dc5db706-b685-49e3-9579-dad7b8da6539';
  $pane = new stdClass();
  $pane->pid = 'new-60e76fab-26f0-41ca-b02f-3b883e112064';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_hsu_people_research';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '60e76fab-26f0-41ca-b02f-3b883e112064';
  $display->content['new-60e76fab-26f0-41ca-b02f-3b883e112064'] = $pane;
  $display->panels['contentmain'][2] = 'new-60e76fab-26f0-41ca-b02f-3b883e112064';
  $pane = new stdClass();
  $pane->pid = 'new-81295bc7-cef6-429d-9d1d-7d53028da221';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_hsu_people_teaching';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '81295bc7-cef6-429d-9d1d-7d53028da221';
  $display->content['new-81295bc7-cef6-429d-9d1d-7d53028da221'] = $pane;
  $display->panels['contentmain'][3] = 'new-81295bc7-cef6-429d-9d1d-7d53028da221';
  $pane = new stdClass();
  $pane->pid = 'new-ad10aae2-bb2a-4ebd-b602-b5f7c949149d';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_hsu_people_degrees';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ad10aae2-bb2a-4ebd-b602-b5f7c949149d';
  $display->content['new-ad10aae2-bb2a-4ebd-b602-b5f7c949149d'] = $pane;
  $display->panels['contentmain'][4] = 'new-ad10aae2-bb2a-4ebd-b602-b5f7c949149d';
  $pane = new stdClass();
  $pane->pid = 'new-747d8ffa-4912-4802-b7ae-f25da9a356a4';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_hsu_people_courses_taught';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '747d8ffa-4912-4802-b7ae-f25da9a356a4';
  $display->content['new-747d8ffa-4912-4802-b7ae-f25da9a356a4'] = $pane;
  $display->panels['contentmain'][5] = 'new-747d8ffa-4912-4802-b7ae-f25da9a356a4';
  $pane = new stdClass();
  $pane->pid = 'new-bd49aaa9-1501-473f-b563-7a7cb4c25bf4';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_hsu_people_publications';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'bd49aaa9-1501-473f-b563-7a7cb4c25bf4';
  $display->content['new-bd49aaa9-1501-473f-b563-7a7cb4c25bf4'] = $pane;
  $display->panels['contentmain'][6] = 'new-bd49aaa9-1501-473f-b563-7a7cb4c25bf4';
  $pane = new stdClass();
  $pane->pid = 'new-794d0e0b-18ea-43df-845a-a9ff553f30f1';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_hsu_people_job_class';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'hidden',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '794d0e0b-18ea-43df-845a-a9ff553f30f1';
  $display->content['new-794d0e0b-18ea-43df-845a-a9ff553f30f1'] = $pane;
  $display->panels['contentmain'][7] = 'new-794d0e0b-18ea-43df-845a-a9ff553f30f1';
  $pane = new stdClass();
  $pane->pid = 'new-18123829-30dd-4d28-bccc-23a0a617ba57';
  $pane->panel = 'contentmain';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'default',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '18123829-30dd-4d28-bccc-23a0a617ba57';
  $display->content['new-18123829-30dd-4d28-bccc-23a0a617ba57'] = $pane;
  $display->panels['contentmain'][8] = 'new-18123829-30dd-4d28-bccc-23a0a617ba57';
  $pane = new stdClass();
  $pane->pid = 'new-a162c4ed-b1ec-45f6-a0e9-97fad998e69a';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_hsu_people_profile_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_link' => '',
      'image_style' => 'hsu_people_detail',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a162c4ed-b1ec-45f6-a0e9-97fad998e69a';
  $display->content['new-a162c4ed-b1ec-45f6-a0e9-97fad998e69a'] = $pane;
  $display->panels['sidebar'][0] = 'new-a162c4ed-b1ec-45f6-a0e9-97fad998e69a';
  $pane = new stdClass();
  $pane->pid = 'new-1a931433-d1c6-49b9-beb1-fce21f327eec';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_hsu_people_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'email_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1a931433-d1c6-49b9-beb1-fce21f327eec';
  $display->content['new-1a931433-d1c6-49b9-beb1-fce21f327eec'] = $pane;
  $display->panels['sidebar'][1] = 'new-1a931433-d1c6-49b9-beb1-fce21f327eec';
  $pane = new stdClass();
  $pane->pid = 'new-41b16ddf-cf93-4766-b510-b5f817e14410';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_hsu_people_phone_number';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'phone',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '41b16ddf-cf93-4766-b510-b5f817e14410';
  $display->content['new-41b16ddf-cf93-4766-b510-b5f817e14410'] = $pane;
  $display->panels['sidebar'][2] = 'new-41b16ddf-cf93-4766-b510-b5f817e14410';
  $pane = new stdClass();
  $pane->pid = 'new-ee0fca4b-b3df-4c69-b0ba-1574b24758d6';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_hsu_people_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ee0fca4b-b3df-4c69-b0ba-1574b24758d6';
  $display->content['new-ee0fca4b-b3df-4c69-b0ba-1574b24758d6'] = $pane;
  $display->panels['sidebar'][3] = 'new-ee0fca4b-b3df-4c69-b0ba-1574b24758d6';
  $pane = new stdClass();
  $pane->pid = 'new-09ae8359-b148-4c7f-8006-4622393b338e';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_hsu_people_cv';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_download_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'text' => 'Curriculum Vitae',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '09ae8359-b148-4c7f-8006-4622393b338e';
  $display->content['new-09ae8359-b148-4c7f-8006-4622393b338e'] = $pane;
  $display->panels['sidebar'][4] = 'new-09ae8359-b148-4c7f-8006-4622393b338e';
  $pane = new stdClass();
  $pane->pid = 'new-5ad1c8d1-e2ee-445f-a806-dc32e22a3eea';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_hsu_people_website';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '5ad1c8d1-e2ee-445f-a806-dc32e22a3eea';
  $display->content['new-5ad1c8d1-e2ee-445f-a806-dc32e22a3eea'] = $pane;
  $display->panels['sidebar'][5] = 'new-5ad1c8d1-e2ee-445f-a806-dc32e22a3eea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a162c4ed-b1ec-45f6-a0e9-97fad998e69a';
  $panelizer->display = $display;
  $export['node:hsu_people:default:default'] = $panelizer;

  return $export;
}
