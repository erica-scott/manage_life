<?php
/**
 * @file
 * manage_food_plan.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function manage_food_plan_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function manage_food_plan_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function manage_food_plan_node_info() {
  $items = array(
    'food_plan' => array(
      'name' => t('Food Plan'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
