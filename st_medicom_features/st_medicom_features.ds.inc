<?php
/**
 * @file
 * st_medicom_features.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function st_medicom_features_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '23',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h4',
        'class' => '',
      ),
    ),
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|product|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function st_medicom_features_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'comments',
        1 => 'body',
        2 => 'field_additional_information',
        3 => 'group_image',
        4 => 'group_single_content',
        5 => 'group_product_des',
        6 => 'group_product_addinfo',
        7 => 'uc_product_image',
        8 => 'group_product_review',
        9 => 'group_top_content',
        10 => 'group_product_info',
        11 => 'title',
        12 => 'model',
        13 => 'field_product_rate',
        14 => 'sell_price',
        15 => 'field_product_category',
        16 => 'add_to_cart',
      ),
    ),
    'fields' => array(
      'comments' => 'ds_content',
      'body' => 'ds_content',
      'field_additional_information' => 'ds_content',
      'group_image' => 'ds_content',
      'group_single_content' => 'ds_content',
      'group_product_des' => 'ds_content',
      'group_product_addinfo' => 'ds_content',
      'uc_product_image' => 'ds_content',
      'group_product_review' => 'ds_content',
      'group_top_content' => 'ds_content',
      'group_product_info' => 'ds_content',
      'title' => 'ds_content',
      'model' => 'ds_content',
      'field_product_rate' => 'ds_content',
      'sell_price' => 'ds_content',
      'field_product_category' => 'ds_content',
      'add_to_cart' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|product|default'] = $ds_layout;

  return $export;
}
