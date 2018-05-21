<?php
// Plugin definition
$plugin = array(
  'title' => t('Accordion // Full Width Header'),
  'icon' => 'accordion_fullwidth_header.png',
  'category' => t('OpenHSU'),
  'theme' => 'accordion_fullwidth_header',
  'regions' => array(
    'header' => t('Header'),
    'column-top' => t('Content Top'),
    'column-middle' => t('Content Middle'),
    'column-footer' => t('Content Footer'),
    'sidebar' => t('Sidebar'),
  ),
);
