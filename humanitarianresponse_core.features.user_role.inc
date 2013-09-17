<?php
/**
 * @file
 * humanitarianresponse_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function humanitarianresponse_core_user_default_roles() {
  $roles = array();

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => 70,
    'machine_name' => 'contributor',
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 80,
    'machine_name' => 'editor',
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 90,
    'machine_name' => 'manager',
  );

  // Exported role: moderator.
  $roles['moderator'] = array(
    'name' => 'moderator',
    'weight' => 85,
    'machine_name' => 'moderator',
  );

  return $roles;
}
