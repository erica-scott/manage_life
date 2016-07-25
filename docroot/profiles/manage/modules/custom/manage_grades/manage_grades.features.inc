<?php
/**
 * @file
 * manage_grades.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function manage_grades_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function manage_grades_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function manage_grades_node_info() {
  $items = array(
    'grades' => array(
      'name' => t('Grades'),
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
