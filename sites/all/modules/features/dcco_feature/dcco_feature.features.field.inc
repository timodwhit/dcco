<?php
/**
 * @file
 * dcco_feature.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function dcco_feature_field_default_fields() {
  $fields = array();

  // Exported field: 'commerce_product-cod_paid_event-field_registration_level'.
  $fields['commerce_product-cod_paid_event-field_registration_level'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_registration_level',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          10 => 'Standard Registration',
          35 => 'Registration with $25 Sponsorship',
          60 => 'Registration with $50 Sponsorship',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'cod_paid_event',
      'commerce_cart_settings' => array(
        'attribute_field' => 1,
        'attribute_widget' => 'radios',
      ),
      'default_value' => array(
        0 => array(
          'value' => '10',
        ),
      ),
      'deleted' => '0',
      'description' => 'Choose how much you want to pay - $10 for a standard registration, or add $25 or $50 to become an individual sponsor.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 2,
        ),
        'line_item' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'node_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'commerce_product',
      'field_name' => 'field_registration_level',
      'label' => 'Registration Level',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '38',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Choose how much you want to pay - $10 for a standard registration, or add $25 or $50 to become an individual sponsor.');
  t('Registration Level');

  return $fields;
}
