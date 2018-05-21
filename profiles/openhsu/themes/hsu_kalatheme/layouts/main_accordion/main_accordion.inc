<?php
// Plugin definition
$plugin = array(
  'title' => t('Accordion with Header and Footer'),
  'icon' => 'main_accordion.png',
  'category' => t('OpenHSU'),
  'theme' => 'main_accordion',
  'regions' => array(
    'column-top' => t('Content Top'),
    'column-middle' => t('Content Middle'),
    'column-footer' => t('Content Footer'),
    'sidebar' => t('Sidebar'),
  ),
);
