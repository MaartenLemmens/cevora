<?php
/**
 * @file
 * contenttypes_menu_talen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contenttypes_menu_talen_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function contenttypes_menu_talen_node_info() {
  $items = array(
    'evenementen' => array(
      'name' => t('Evenementen'),
      'base' => 'node_content',
      'description' => t('Alle CEVORA evenementen'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'geplande_opleiding' => array(
      'name' => t('Geplande opleiding'),
      'base' => 'node_content',
      'description' => t('Alle geplande opleidingen.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nieuws' => array(
      'name' => t('Nieuws'),
      'base' => 'node_content',
      'description' => t('Nieuws items'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'opleiding' => array(
      'name' => t('Opleiding'),
      'base' => 'node_content',
      'description' => t('Opleidingen van CEVORA'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
