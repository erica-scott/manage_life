<?php
/**
 * @file
 * manage_admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function manage_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create grades content'.
  $permissions['create grades content'] = array(
    'name' => 'create grades content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create money content'.
  $permissions['create money content'] = array(
    'name' => 'create money content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own grades content'.
  $permissions['delete own grades content'] = array(
    'name' => 'delete own grades content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own money content'.
  $permissions['delete own money content'] = array(
    'name' => 'delete own money content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own grades content'.
  $permissions['edit own grades content'] = array(
    'name' => 'edit own grades content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own money content'.
  $permissions['edit own money content'] = array(
    'name' => 'edit own money content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
