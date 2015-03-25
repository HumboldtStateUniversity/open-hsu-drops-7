<?php
/**
 * @file
 * Some forms we can use
 */

function hsu_kalatheme_location_form() {
  $form = array();

  $form['open_hsu_contact_info'] = array (
    '#type' => 'fieldset',
    '#title' => 'Site Contact Info',
    '#weight' => -98,
  );

  $form['open_hsu_contact_info']['street'] = array(
    '#type' => 'textfield',
    '#title' => t('Street'),
    '#default_value' =>theme_get_setting('street'),
  );

  $form['open_hsu_contact_info']['citystatezip'] = array(
    '#type' => 'textfield',
    '#title' => t('City/State/Zip'),
    '#default_value' =>theme_get_setting('citystatezip'),
  );

  $form['open_hsu_contact_info']['phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Phone'),
    '#default_value' =>theme_get_setting('phone'),
  );

  $form['open_hsu_contact_info']['fax'] = array(
    '#type' => 'textfield',
    '#title' => t('Fax'),
    '#default_value' =>theme_get_setting('fax'),
  );

  return $form;
}


function hsu_kalatheme_header_image_form() {
  $form = array();

  $form['open_hsu_header_image'] = array (
    '#type' => 'fieldset',
    '#title' => 'Site Banner Image',
    '#weight' => -99,
  );

  $form['open_hsu_header_image']['header_file'] = array(
    '#type' => 'file',
    '#title' => t('File'),
    '#description' => t('Upload a file, allowed extensions: jpg, jpeg, png'),
    '#default_value' =>theme_get_setting('header_file'),
  );

  if (theme_get_setting('header_file')) {
    $using = (theme_get_setting('header_file')) ? theme_get_setting('header_file') : '<em>No file set</em>';
    $form['open_hsu_header_image']['header_file']['#description'] .= '<br>Currently using ' . $using;
  }

  $form['#validate'][] = 'hsu_kalatheme_header_image_form_validate';
  $form['#submit'][] = 'hsu_kalatheme_header_image_form_submit';

  return $form;
}

function hsu_kalatheme_header_image_form_validate($form, &$form_state) {
  if ($_FILES['files']['name']['header_file']) {
    $file = file_save_upload('header_file', array(
      // Validates file is really an image.
      'file_validate_is_image' => array(),
      // Validate extensions.
      'file_validate_extensions' => array('png jpg jpeg'),
    ));
    // If the file passed validation:
    if ($file) {
      // Move the file into the Drupal file system.
      if ($file = file_move($file, 'public://')) {
        // Save the file for use in the submit handler.
        $form_state['storage']['header_file'] = $file;
        $form_state['values']['header_file'] = file_create_url($file->uri);
      }
      else {
        form_set_error('header_file', t("Failed to write the uploaded file to the site's file folder."));
      }
    }
    else {
      $form_state['storage']['header_file'] = $file;
      form_set_error('header_file', t('No file was uploaded.'));
    }
  }
}

function hsu_kalatheme_header_image_form_submit($form, &$form_state) {
  if (isset($form_state['storage']['header_file'])) {
    $file = $form_state['storage']['header_file'];
    // We are done with the file, remove it from storage.
    unset($form_state['storage']['header_file']);
    // Make the storage of the file permanent.
    $file->status = FILE_STATUS_PERMANENT;
    // Save file status.
    file_save($file);
    // Set a response to the user.
    drupal_set_message(t('The form has been submitted and the image has been saved, filename: @filename.', array('@filename' => $file->filename)));
  }
}
