<?php
/**
 * @file
 * manage_grades.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function manage_grades_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_grades:grades.
  $menu_links['main-menu_grades:grades'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'grades',
    'router_path' => 'grades',
    'link_title' => 'Grades',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_grades:grades',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Grades');

  return $menu_links;
}
