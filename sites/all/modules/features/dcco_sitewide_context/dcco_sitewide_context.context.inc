<?php
/**
 * @file
 * dcco_sitewide_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function dcco_sitewide_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mobile_menu_toggle-mobile_menu_toggle' => array(
          'module' => 'mobile_menu_toggle',
          'delta' => 'mobile_menu_toggle',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  return $export;
}
