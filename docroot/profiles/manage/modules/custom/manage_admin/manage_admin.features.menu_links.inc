<?php
/**
 * @file
 * manage_admin.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function manage_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_admin:admin/config/manage_admin.
  $menu_links['main-menu_admin:admin/config/manage_admin'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/config/manage_admin',
    'router_path' => 'admin/config',
    'link_title' => 'Admin',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_admin:admin/config/manage_admin',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_login:user/login.
  $menu_links['main-menu_login:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_logout:user/logout.
  $menu_links['main-menu_logout:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin');
  t('Login');
  t('Logout');

  return $menu_links;
}
