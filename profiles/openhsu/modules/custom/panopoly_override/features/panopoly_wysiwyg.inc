<?php
/**
 * @file
 * Panopoly Wysiwyg overrides
 */

/** 
 * Implements hook_filter_default_formats_alter()
 */
if (!function_exists('panopoly_wysiwyg_filter_default_formats_alter')) {
  function panopoly_wysiwyg_filter_default_formats_alter(&$data) {
    if (isset($data['panopoly_wysiwyg_text'])) {
      $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_color']['color'] = 0;
      $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_dimension']['height'] = 'height';
      $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['style_dimension']['width'] = 'width';
      $data['panopoly_wysiwyg_text']['filters']['wysiwyg']['settings']['valid_elements'] = '@[style|class],
a[!href|target<_blank|title],
div[align<center?justify?left?right],
br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
span,p,
table[cellpadding|cellspacing|border],tr[align|valign],td[align|valign|scope],th[align|valign|scope],
tbody,thead,tfoot,caption, 
h1,h2,h3,h4,h5,h6,
img[!src|title|alt|width|height|hspace|vspace],#p';
    }
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
if (!function_exists('panopoly_wysiwyg_wysiwyg_default_profiles_alter')) {
  function panopoly_wysiwyg_wysiwyg_default_profiles_alter(&$data) {
    if (isset($data['panopoly_wysiwyg_text'])) {
      $data['panopoly_wysiwyg_text']['settings']['buttons']['default']['link'] = 1;
      $data['panopoly_wysiwyg_text']['settings']['buttons']['imce'] = array(
        'imce' => 1,
      );
      $data['panopoly_wysiwyg_text']['settings']['buttons']['table'] = array(
        'tablecontrols' => 1,
      );
      unset($data['panopoly_wysiwyg_text']['settings']['buttons']['default']['forecolor']);
    }
  }
}

/**
 * Implements hook_default_linkit_profiles_alter().
 */
if (!function_exists('panopoly_wysiwyg_default_linkit_profiles_alter')) {
  function panopoly_wysiwyg_default_linkit_profiles_alter(&$data) {
    if (isset($data['content_editors'])) {
      $data['content_editors']->data['imce'] = 1;
    }
  }
}

/**
 * Implements hook_strongarm_alter()
 */
if (!function_exists('panopoly_wysiwyg_strongarm_alter')) {
  function panopoly_wysiwyg_strongarm_alter(&$data) {
    
    /* Example: Override media__wysiwyg_browser_plugins
    if (isset($data['media__wysiwyg_browser_plugins'])) {
      $data['media__wysiwyg_browser_plugins']->value['0'] = 'upload';
      $data['media__wysiwyg_browser_plugins']->value['1'] = 'media_default--media_browser_1';
      $data['media__wysiwyg_browser_plugins']->value['2'] = 'media_internet'; 
      unset($data['media__wysiwyg_browser_plugins']->value['library']);
      unset($data['media__wysiwyg_browser_plugins']->value['media_default--media_browser_1']);
      unset($data['media__wysiwyg_browser_plugins']->value['media_default--media_browser_my_files']);
      unset($data['media__wysiwyg_browser_plugins']->value['media_internet']);
      unset($data['media__wysiwyg_browser_plugins']->value['upload']);
    }*/
    
  }
}

/**
 * Implements hook_system_info_alter()
 *
 * This is used to alter features info files. This may be useful for removing fields from entities,
 * dependencies, etc.
 *
 */
if (!function_exists('panopoly_wysiwyg_system_info_alter')) {
  function panopoly_wysiwyg_system_info_alter(&$info, $file, $type) {
    if ($file->name == 'panopoly_wysiwyg') {
      /*
      array_push($info['dependencies'], "imce");
      array_push($info['dependencies'], "imce_wysiwyg");
      */
    }
  }
}