<?php
/**
 * @file
 * manage_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function manage_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_money:money.
  $menu_links['main-menu_money:money'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'money',
    'router_path' => 'money',
    'link_title' => 'Money',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_money:money',
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
  t('Money');

  return $menu_links;
}
