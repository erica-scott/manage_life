<?php
/**
 * @file
 * manage_food_plan.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function manage_food_plan_taxonomy_default_vocabularies() {
  return array(
    'manage_food' => array(
      'name' => 'Food',
      'machine_name' => 'manage_food',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
