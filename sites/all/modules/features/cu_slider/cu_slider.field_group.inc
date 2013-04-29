<?php
/**
 * @file
 * cu_slider.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_slider_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slider_slide_content|field_collection_item|field_slider_slide|form';
  $field_group->group_name = 'group_slider_slide_content';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_slider_slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slide Text',
    'weight' => '2',
    'children' => array(
      0 => 'field_slider_caption',
      1 => 'field_slider_url',
      2 => 'field_slider_teaser',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Slide Text',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_slider_slide_content|field_collection_item|field_slider_slide|form'] = $field_group;

  return $export;
}
