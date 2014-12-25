<?php
/**
 * @file
 * st_medicom_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function st_medicom_features_taxonomy_default_vocabularies() {
  return array(
    'blog_categories' => array(
      'name' => 'Blog categories',
      'machine_name' => 'blog_categories',
      'description' => 'Blog categories',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'catalog' => array(
      'name' => 'Catalog',
      'machine_name' => 'catalog',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'uc_catalog',
      'weight' => 0,
    ),
    'department_group' => array(
      'name' => 'Department group',
      'machine_name' => 'department_group',
      'description' => 'Department group',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'gallery_categories' => array(
      'name' => 'Gallery categories',
      'machine_name' => 'gallery_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'newsletter' => array(
      'name' => 'Newsletter',
      'machine_name' => 'newsletter',
      'description' => 'Simplenews newsletter categories.',
      'hierarchy' => 0,
      'module' => 'simplenews',
      'weight' => 0,
    ),
    'portfolio_categories' => array(
      'name' => 'Portfolio categories',
      'machine_name' => 'portfolio_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'product_categories' => array(
      'name' => 'Product categories',
      'machine_name' => 'product_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
