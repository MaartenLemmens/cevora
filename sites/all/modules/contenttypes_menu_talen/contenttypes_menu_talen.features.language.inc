<?php
/**
 * @file
 * contenttypes_menu_talen.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function contenttypes_menu_talen_locale_default_languages() {
  $languages = array();

  // Exported language: fr.
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n>1)',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => 0,
  );
  // Exported language: nl.
  $languages['nl'] = array(
    'language' => 'nl',
    'name' => 'Dutch',
    'native' => 'Nederlands',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'nl',
    'weight' => 0,
  );
  return $languages;
}
