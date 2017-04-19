<?php
/**
 * @file
 * blog_post.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function blog_post_user_default_roles() {
  $roles = array();

  // Exported role: VIP.
  $roles['VIP'] = array(
    'name' => 'VIP',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  // Exported role: moderator.
  $roles['moderator'] = array(
    'name' => 'moderator',
    'weight' => 3,
  );

  return $roles;
}
