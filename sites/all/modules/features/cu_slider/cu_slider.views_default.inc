<?php
/**
 * @file
 * cu_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cu_slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cu_slider_large';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'CU Slider Large';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'wide_flex_slider';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'bid' => 0,
    'field_slider_url' => 0,
    'field_slider_image' => 0,
    'field_slider_caption_1' => 0,
    'field_slider_teaser' => 0,
    'field_slider_caption' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'bid' => 0,
    'field_slider_url' => 0,
    'field_slider_image' => 0,
    'field_slider_caption_1' => 0,
    'field_slider_teaser' => 0,
    'field_slider_caption' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Block: Slide (field_slider_slide) */
  $handler->display->display_options['relationships']['field_slider_slide_value']['id'] = 'field_slider_slide_value';
  $handler->display->display_options['relationships']['field_slider_slide_value']['table'] = 'field_data_field_slider_slide';
  $handler->display->display_options['relationships']['field_slider_slide_value']['field'] = 'field_slider_slide_value';
  $handler->display->display_options['relationships']['field_slider_slide_value']['delta'] = '-1';
  /* Field: Block: Internal, numeric block ID */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'bean';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';
  $handler->display->display_options['fields']['bid']['exclude'] = TRUE;
  /* Field: Field collection item: Link */
  $handler->display->display_options['fields']['field_slider_url']['id'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['table'] = 'field_data_field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['field'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_url']['label'] = '';
  $handler->display->display_options['fields']['field_slider_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_url']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_slider_image']['id'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['table'] = 'field_data_field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['field'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_image']['label'] = '';
  $handler->display->display_options['fields']['field_slider_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slider_image']['alter']['path'] = '[field_slider_url]';
  $handler->display->display_options['fields']['field_slider_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_image']['settings'] = array(
    'image_style' => 'slider-large',
    'image_link' => '',
  );
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_slider_caption_1']['id'] = 'field_slider_caption_1';
  $handler->display->display_options['fields']['field_slider_caption_1']['table'] = 'field_data_field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption_1']['field'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption_1']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_slider_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption_1']['alter']['path'] = '[field_slider_url]';
  $handler->display->display_options['fields']['field_slider_caption_1']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Teaser */
  $handler->display->display_options['fields']['field_slider_teaser']['id'] = 'field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['table'] = 'field_data_field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['field'] = 'field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_slider_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaser']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaser']['alter']['text'] = '<div class="slide-teaser">[field_slider_teaser]</div>';
  $handler->display->display_options['fields']['field_slider_teaser']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_slider_caption']['id'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['table'] = 'field_data_field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['field'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_caption']['label'] = '';
  $handler->display->display_options['fields']['field_slider_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption']['alter']['text'] = '<h2>[field_slider_caption_1]</h2>
[field_slider_teaser]';
  $handler->display->display_options['fields']['field_slider_caption']['element_label_colon'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Contextual filter: Block: Internal, numeric block ID */
  $handler->display->display_options['arguments']['bid']['id'] = 'bid';
  $handler->display->display_options['arguments']['bid']['table'] = 'bean';
  $handler->display->display_options['arguments']['bid']['field'] = 'bid';
  $handler->display->display_options['arguments']['bid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['bid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['bid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bid']['summary_options']['items_per_page'] = '25';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['entity_type'] = 'bean';
  $handler->display->display_options['bundles'] = array(
    0 => 'slider',
  );
  $export['cu_slider_large'] = $view;

  $view = new view();
  $view->name = 'cu_slider_medium';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'CU Slider Medium';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'medium_flex_slider';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'bid' => 0,
    'field_slider_url' => 0,
    'field_slider_image' => 0,
    'field_slider_caption_1' => 0,
    'field_slider_teaser' => 0,
    'field_slider_caption' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'bid' => 0,
    'field_slider_url' => 0,
    'field_slider_image' => 0,
    'field_slider_caption_1' => 0,
    'field_slider_teaser' => 0,
    'field_slider_caption' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Block: Slide (field_slider_slide) */
  $handler->display->display_options['relationships']['field_slider_slide_value']['id'] = 'field_slider_slide_value';
  $handler->display->display_options['relationships']['field_slider_slide_value']['table'] = 'field_data_field_slider_slide';
  $handler->display->display_options['relationships']['field_slider_slide_value']['field'] = 'field_slider_slide_value';
  $handler->display->display_options['relationships']['field_slider_slide_value']['delta'] = '-1';
  /* Field: Block: Internal, numeric block ID */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'bean';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';
  $handler->display->display_options['fields']['bid']['exclude'] = TRUE;
  /* Field: Field collection item: Link */
  $handler->display->display_options['fields']['field_slider_url']['id'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['table'] = 'field_data_field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['field'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_url']['label'] = '';
  $handler->display->display_options['fields']['field_slider_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_url']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_slider_image']['id'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['table'] = 'field_data_field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['field'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_image']['label'] = '';
  $handler->display->display_options['fields']['field_slider_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slider_image']['alter']['path'] = '[field_slider_url]';
  $handler->display->display_options['fields']['field_slider_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_image']['settings'] = array(
    'image_style' => 'slider-medium',
    'image_link' => '',
  );
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_slider_caption_1']['id'] = 'field_slider_caption_1';
  $handler->display->display_options['fields']['field_slider_caption_1']['table'] = 'field_data_field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption_1']['field'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption_1']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_slider_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption_1']['alter']['path'] = '[field_slider_url]';
  $handler->display->display_options['fields']['field_slider_caption_1']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Teaser */
  $handler->display->display_options['fields']['field_slider_teaser']['id'] = 'field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['table'] = 'field_data_field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['field'] = 'field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_slider_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaser']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaser']['alter']['text'] = '<div class="slide-teaser">[field_slider_teaser]</div>';
  $handler->display->display_options['fields']['field_slider_teaser']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_slider_caption']['id'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['table'] = 'field_data_field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['field'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_caption']['label'] = '';
  $handler->display->display_options['fields']['field_slider_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption']['alter']['text'] = '<h2>[field_slider_caption_1]</h2>
[field_slider_teaser]';
  $handler->display->display_options['fields']['field_slider_caption']['element_label_colon'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Contextual filter: Block: Internal, numeric block ID */
  $handler->display->display_options['arguments']['bid']['id'] = 'bid';
  $handler->display->display_options['arguments']['bid']['table'] = 'bean';
  $handler->display->display_options['arguments']['bid']['field'] = 'bid';
  $handler->display->display_options['arguments']['bid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['bid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['bid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bid']['summary_options']['items_per_page'] = '25';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['entity_type'] = 'bean';
  $handler->display->display_options['bundles'] = array(
    0 => 'slider',
  );
  $export['cu_slider_medium'] = $view;

  $view = new view();
  $view->name = 'cu_slider_original';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'CU Slider Original';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'wide_flex_slider';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'bid' => 0,
    'field_slider_url' => 0,
    'field_slider_image' => 0,
    'field_slider_caption_1' => 0,
    'field_slider_teaser' => 0,
    'field_slider_caption' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'bid' => 0,
    'field_slider_url' => 0,
    'field_slider_image' => 0,
    'field_slider_caption_1' => 0,
    'field_slider_teaser' => 0,
    'field_slider_caption' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Block: Slide (field_slider_slide) */
  $handler->display->display_options['relationships']['field_slider_slide_value']['id'] = 'field_slider_slide_value';
  $handler->display->display_options['relationships']['field_slider_slide_value']['table'] = 'field_data_field_slider_slide';
  $handler->display->display_options['relationships']['field_slider_slide_value']['field'] = 'field_slider_slide_value';
  $handler->display->display_options['relationships']['field_slider_slide_value']['delta'] = '-1';
  /* Field: Block: Internal, numeric block ID */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'bean';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';
  $handler->display->display_options['fields']['bid']['exclude'] = TRUE;
  /* Field: Field collection item: Link */
  $handler->display->display_options['fields']['field_slider_url']['id'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['table'] = 'field_data_field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['field'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_url']['label'] = '';
  $handler->display->display_options['fields']['field_slider_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_url']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_slider_image']['id'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['table'] = 'field_data_field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['field'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_image']['label'] = '';
  $handler->display->display_options['fields']['field_slider_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slider_image']['alter']['path'] = '[field_slider_url]';
  $handler->display->display_options['fields']['field_slider_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_slider_caption_1']['id'] = 'field_slider_caption_1';
  $handler->display->display_options['fields']['field_slider_caption_1']['table'] = 'field_data_field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption_1']['field'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption_1']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_slider_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption_1']['alter']['path'] = '[field_slider_url]';
  $handler->display->display_options['fields']['field_slider_caption_1']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Teaser */
  $handler->display->display_options['fields']['field_slider_teaser']['id'] = 'field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['table'] = 'field_data_field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['field'] = 'field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_slider_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaser']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaser']['alter']['text'] = '<div class="slide-teaser">[field_slider_teaser]</div>';
  $handler->display->display_options['fields']['field_slider_teaser']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_slider_caption']['id'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['table'] = 'field_data_field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['field'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_caption']['label'] = '';
  $handler->display->display_options['fields']['field_slider_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption']['alter']['text'] = '<h2>[field_slider_caption_1]</h2>
[field_slider_teaser]';
  $handler->display->display_options['fields']['field_slider_caption']['element_label_colon'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Contextual filter: Block: Internal, numeric block ID */
  $handler->display->display_options['arguments']['bid']['id'] = 'bid';
  $handler->display->display_options['arguments']['bid']['table'] = 'bean';
  $handler->display->display_options['arguments']['bid']['field'] = 'bid';
  $handler->display->display_options['arguments']['bid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['bid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['bid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bid']['summary_options']['items_per_page'] = '25';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['entity_type'] = 'bean';
  $handler->display->display_options['bundles'] = array(
    0 => 'slider',
  );
  $export['cu_slider_original'] = $view;

  $view = new view();
  $view->name = 'cu_slider_small';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'CU Slider Small';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'small_flex_slider';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'bid' => 0,
    'field_slider_url' => 0,
    'field_slider_image' => 0,
    'field_slider_caption_1' => 0,
    'field_slider_teaser' => 0,
    'field_slider_caption' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'bid' => 0,
    'field_slider_url' => 0,
    'field_slider_image' => 0,
    'field_slider_caption_1' => 0,
    'field_slider_teaser' => 0,
    'field_slider_caption' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Block: Slide (field_slider_slide) */
  $handler->display->display_options['relationships']['field_slider_slide_value']['id'] = 'field_slider_slide_value';
  $handler->display->display_options['relationships']['field_slider_slide_value']['table'] = 'field_data_field_slider_slide';
  $handler->display->display_options['relationships']['field_slider_slide_value']['field'] = 'field_slider_slide_value';
  $handler->display->display_options['relationships']['field_slider_slide_value']['delta'] = '-1';
  /* Field: Block: Internal, numeric block ID */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'bean';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';
  $handler->display->display_options['fields']['bid']['exclude'] = TRUE;
  /* Field: Field collection item: Link */
  $handler->display->display_options['fields']['field_slider_url']['id'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['table'] = 'field_data_field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['field'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_url']['label'] = '';
  $handler->display->display_options['fields']['field_slider_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_url']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_slider_image']['id'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['table'] = 'field_data_field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['field'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_image']['label'] = '';
  $handler->display->display_options['fields']['field_slider_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slider_image']['alter']['path'] = '[field_slider_url]';
  $handler->display->display_options['fields']['field_slider_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_slider_caption_1']['id'] = 'field_slider_caption_1';
  $handler->display->display_options['fields']['field_slider_caption_1']['table'] = 'field_data_field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption_1']['field'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption_1']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_slider_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption_1']['alter']['path'] = '[field_slider_url]';
  $handler->display->display_options['fields']['field_slider_caption_1']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Teaser */
  $handler->display->display_options['fields']['field_slider_teaser']['id'] = 'field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['table'] = 'field_data_field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['field'] = 'field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_slider_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaser']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaser']['alter']['text'] = '<div class="slide-teaser">[field_slider_teaser]</div>';
  $handler->display->display_options['fields']['field_slider_teaser']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_slider_caption']['id'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['table'] = 'field_data_field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['field'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_caption']['label'] = '';
  $handler->display->display_options['fields']['field_slider_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption']['alter']['text'] = '<h2>[field_slider_caption_1]</h2>
[field_slider_teaser]';
  $handler->display->display_options['fields']['field_slider_caption']['element_label_colon'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Contextual filter: Block: Internal, numeric block ID */
  $handler->display->display_options['arguments']['bid']['id'] = 'bid';
  $handler->display->display_options['arguments']['bid']['table'] = 'bean';
  $handler->display->display_options['arguments']['bid']['field'] = 'bid';
  $handler->display->display_options['arguments']['bid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['bid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['bid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bid']['summary_options']['items_per_page'] = '25';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['entity_type'] = 'bean';
  $handler->display->display_options['bundles'] = array(
    0 => 'slider',
  );
  $export['cu_slider_small'] = $view;

  $view = new view();
  $view->name = 'cu_slider_wide';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'CU Slider Wide';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'wide_flex_slider';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'bid' => 0,
    'field_slider_url' => 0,
    'field_slider_image' => 0,
    'field_slider_caption_1' => 0,
    'field_slider_teaser' => 0,
    'field_slider_caption' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'bid' => 0,
    'field_slider_url' => 0,
    'field_slider_image' => 0,
    'field_slider_caption_1' => 0,
    'field_slider_teaser' => 0,
    'field_slider_caption' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Block: Slide (field_slider_slide) */
  $handler->display->display_options['relationships']['field_slider_slide_value']['id'] = 'field_slider_slide_value';
  $handler->display->display_options['relationships']['field_slider_slide_value']['table'] = 'field_data_field_slider_slide';
  $handler->display->display_options['relationships']['field_slider_slide_value']['field'] = 'field_slider_slide_value';
  $handler->display->display_options['relationships']['field_slider_slide_value']['delta'] = '-1';
  /* Field: Block: Internal, numeric block ID */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'bean';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';
  $handler->display->display_options['fields']['bid']['exclude'] = TRUE;
  /* Field: Field collection item: Link */
  $handler->display->display_options['fields']['field_slider_url']['id'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['table'] = 'field_data_field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['field'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_url']['label'] = '';
  $handler->display->display_options['fields']['field_slider_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_url']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_slider_image']['id'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['table'] = 'field_data_field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['field'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_image']['label'] = '';
  $handler->display->display_options['fields']['field_slider_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slider_image']['alter']['path'] = '[field_slider_url]';
  $handler->display->display_options['fields']['field_slider_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_image']['settings'] = array(
    'image_style' => 'slider',
    'image_link' => '',
  );
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_slider_caption_1']['id'] = 'field_slider_caption_1';
  $handler->display->display_options['fields']['field_slider_caption_1']['table'] = 'field_data_field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption_1']['field'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption_1']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_slider_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption_1']['alter']['path'] = '[field_slider_url]';
  $handler->display->display_options['fields']['field_slider_caption_1']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Teaser */
  $handler->display->display_options['fields']['field_slider_teaser']['id'] = 'field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['table'] = 'field_data_field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['field'] = 'field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_slider_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaser']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaser']['alter']['text'] = '<div class="slide-teaser">[field_slider_teaser]</div>';
  $handler->display->display_options['fields']['field_slider_teaser']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_slider_caption']['id'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['table'] = 'field_data_field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['field'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_caption']['label'] = '';
  $handler->display->display_options['fields']['field_slider_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption']['alter']['text'] = '<h2>[field_slider_caption_1]</h2>
[field_slider_teaser]';
  $handler->display->display_options['fields']['field_slider_caption']['element_label_colon'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Contextual filter: Block: Internal, numeric block ID */
  $handler->display->display_options['arguments']['bid']['id'] = 'bid';
  $handler->display->display_options['arguments']['bid']['table'] = 'bean';
  $handler->display->display_options['arguments']['bid']['field'] = 'bid';
  $handler->display->display_options['arguments']['bid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['bid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['bid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bid']['summary_options']['items_per_page'] = '25';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['entity_type'] = 'bean';
  $handler->display->display_options['bundles'] = array(
    0 => 'slider',
  );
  $export['cu_slider_wide'] = $view;

  $view = new view();
  $view->name = 'cu_slider_wide_teaser';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'CU Slider Wide Teaser';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'wide_teaser_flex_slider';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'bid' => 0,
    'field_slider_url' => 0,
    'field_slider_url_1' => 0,
    'field_slider_image' => 0,
    'field_slider_caption_1' => 0,
    'field_slider_teaser' => 0,
    'field_slider_caption' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'bid' => 0,
    'field_slider_url' => 0,
    'field_slider_url_1' => 0,
    'field_slider_image' => 0,
    'field_slider_caption_1' => 0,
    'field_slider_teaser' => 0,
    'field_slider_caption' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Block: Slide (field_slider_slide) */
  $handler->display->display_options['relationships']['field_slider_slide_value']['id'] = 'field_slider_slide_value';
  $handler->display->display_options['relationships']['field_slider_slide_value']['table'] = 'field_data_field_slider_slide';
  $handler->display->display_options['relationships']['field_slider_slide_value']['field'] = 'field_slider_slide_value';
  $handler->display->display_options['relationships']['field_slider_slide_value']['delta'] = '-1';
  /* Field: Block: Internal, numeric block ID */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'bean';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';
  $handler->display->display_options['fields']['bid']['exclude'] = TRUE;
  /* Field: Field collection item: Link */
  $handler->display->display_options['fields']['field_slider_url']['id'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['table'] = 'field_data_field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['field'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_url']['label'] = '';
  $handler->display->display_options['fields']['field_slider_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_url']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Link */
  $handler->display->display_options['fields']['field_slider_url_1']['id'] = 'field_slider_url_1';
  $handler->display->display_options['fields']['field_slider_url_1']['table'] = 'field_data_field_slider_url';
  $handler->display->display_options['fields']['field_slider_url_1']['field'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url_1']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_slider_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_url_1']['alter']['text'] = '<a href="[field_slider_url]" class="button">Read More</a>';
  $handler->display->display_options['fields']['field_slider_url_1']['alter']['path'] = '[field_slider_url]';
  $handler->display->display_options['fields']['field_slider_url_1']['alter']['link_class'] = 'button';
  $handler->display->display_options['fields']['field_slider_url_1']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_slider_image']['id'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['table'] = 'field_data_field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['field'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_image']['label'] = '';
  $handler->display->display_options['fields']['field_slider_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slider_image']['alter']['path'] = '[field_slider_url]';
  $handler->display->display_options['fields']['field_slider_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_image']['settings'] = array(
    'image_style' => 'slider-teaser',
    'image_link' => '',
  );
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_slider_caption_1']['id'] = 'field_slider_caption_1';
  $handler->display->display_options['fields']['field_slider_caption_1']['table'] = 'field_data_field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption_1']['field'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption_1']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_slider_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption_1']['alter']['path'] = '[field_slider_url]';
  $handler->display->display_options['fields']['field_slider_caption_1']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Teaser */
  $handler->display->display_options['fields']['field_slider_teaser']['id'] = 'field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['table'] = 'field_data_field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['field'] = 'field_slider_teaser';
  $handler->display->display_options['fields']['field_slider_teaser']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_slider_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaser']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaser']['alter']['text'] = '<p class="slide-teaser">[field_slider_teaser]</p>';
  $handler->display->display_options['fields']['field_slider_teaser']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_slider_caption']['id'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['table'] = 'field_data_field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['field'] = 'field_slider_caption';
  $handler->display->display_options['fields']['field_slider_caption']['relationship'] = 'field_slider_slide_value';
  $handler->display->display_options['fields']['field_slider_caption']['label'] = '';
  $handler->display->display_options['fields']['field_slider_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_caption']['alter']['text'] = '<h2>[field_slider_caption_1]</h2>
[field_slider_teaser]
[field_slider_url_1]';
  $handler->display->display_options['fields']['field_slider_caption']['element_label_colon'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Contextual filter: Block: Internal, numeric block ID */
  $handler->display->display_options['arguments']['bid']['id'] = 'bid';
  $handler->display->display_options['arguments']['bid']['table'] = 'bean';
  $handler->display->display_options['arguments']['bid']['field'] = 'bid';
  $handler->display->display_options['arguments']['bid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['bid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['bid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['bid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['bid']['summary_options']['items_per_page'] = '25';

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['entity_type'] = 'bean';
  $handler->display->display_options['bundles'] = array(
    0 => 'slider',
  );
  $export['cu_slider_wide_teaser'] = $view;

  return $export;
}
