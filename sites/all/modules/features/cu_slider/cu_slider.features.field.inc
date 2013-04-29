<?php
/**
 * @file
 * cu_slider.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function cu_slider_field_default_fields() {
  $fields = array();

  // Exported field: 'bean-slider-field_slider_slide'.
  $fields['bean-slider-field_slider_slide'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_slider_slide',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'field_collection',
      'settings' => array(
        'hide_blank_items' => TRUE,
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'slider',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_fields',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'bean',
      'fences_wrapper' => 'div',
      'field_name' => 'field_slider_slide',
      'label' => 'Slide',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'bean-slider-field_slider_style'.
  $fields['bean-slider-field_slider_style'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_slider_style',
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
          'wide' => 'Wide',
          'wide_teaser' => 'Wide with Teaser',
          'large' => 'Large',
          'medium' => 'Medium',
          'small' => 'Small',
          'original' => 'Original',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'slider',
      'default_value' => array(
        0 => array(
          'value' => 'wide',
        ),
      ),
      'default_value_function' => '',
      'default_value_php' => '',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_key',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'bean',
      'fences_wrapper' => 'no_wrapper',
      'field_name' => 'field_slider_style',
      'label' => 'Style',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_slider_slide-field_slider_caption'.
  $fields['field_collection_item-field_slider_slide-field_slider_caption'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_slider_caption',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_slider_slide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'fences_wrapper' => 'div',
      'field_name' => 'field_slider_caption',
      'label' => 'Caption',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '150',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_slider_slide-field_slider_image'.
  $fields['field_collection_item-field_slider_slide-field_slider_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_slider_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'profile2_private' => FALSE,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'field_slider_slide',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'fences_wrapper' => 'div',
      'field_name' => 'field_slider_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'imagecrop' => array(
          'slider' => 'slider',
          'slider-medium' => 'slider-medium',
        ),
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'colorbox__grid-12' => 0,
            'colorbox__grid-3' => 0,
            'colorbox__grid-4' => 0,
            'colorbox__grid-6' => 0,
            'colorbox__grid-9' => 0,
            'colorbox__large' => 0,
            'colorbox__medium' => 0,
            'colorbox__slider' => 0,
            'colorbox__slider-medium' => 0,
            'colorbox__slider-teaser' => 0,
            'colorbox__square_thumbnail' => 0,
            'colorbox__thumbnail' => 0,
            'image' => 0,
            'image_grid-12' => 0,
            'image_grid-3' => 0,
            'image_grid-4' => 0,
            'image_grid-6' => 0,
            'image_grid-9' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_slider' => 0,
            'image_slider-medium' => 0,
            'image_slider-teaser' => 0,
            'image_square_thumbnail' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_slider_slide-field_slider_teaser'.
  $fields['field_collection_item-field_slider_slide-field_slider_teaser'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_slider_teaser',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_slider_slide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This field only displays on wide, and wide with teaser sliders. Too much text will cause your slider to have display issues. Please keep your teaser text to less than 200 characters.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'fences_wrapper' => 'div',
      'field_name' => 'field_slider_teaser',
      'label' => 'Teaser',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_slider_slide-field_slider_url'.
  $fields['field_collection_item-field_slider_slide-field_slider_url'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_slider_url',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_slider_slide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'fences_wrapper' => 'div',
      'field_name' => 'field_slider_url',
      'label' => 'Link',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '150',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Caption');
  t('Image');
  t('Link');
  t('Slide');
  t('Style');
  t('Teaser');
  t('This field only displays on wide, and wide with teaser sliders. Too much text will cause your slider to have display issues. Please keep your teaser text to less than 200 characters.');

  return $fields;
}
