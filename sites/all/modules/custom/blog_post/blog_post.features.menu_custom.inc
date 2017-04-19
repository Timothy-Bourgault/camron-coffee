<?php
/**
 * @file
 * blog_post.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function blog_post_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Features');
  t('Management');
  t('Menu items for any enabled features.');
  t('The <em>Management</em> menu contains links for administrative tasks.');

  return $menus;
}
