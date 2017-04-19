<?php
/**
 * @file
 * blog_post.features.inc
 */

/**
 * Implements hook_views_api().
 */
function blog_post_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function blog_post_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('blog post'),
      'base' => 'node_content',
      'description' => t('Blog posts'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Title for the post'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
