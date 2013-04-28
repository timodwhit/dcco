<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 
 
 
 
function dcco2013_page_alter() {
  drupal_add_css('http://fonts.googleapis.com/css?family=Open+Sans:300italic,400italic,700italic,400,700,300', array('group' => CSS_DEFAULT, 'every_page' => TRUE));
 }


/**
 * Implements hook_process_region).
 */
function dcco2013_process_region(&$vars) {
  if (in_array($vars['elements']['#region'], array('user_second'))) {
    $theme = alpha_get_theme();

    switch ($vars['elements']['#region']) {

      case 'user_second':
        $vars['secondary_menu'] = $theme->page['secondary_menu'];
        break;


    }
  }
}

/**
 * Implements hook_link().
 */

function dcco2013_link($variables) {
	$variables['options']['html'] = TRUE;
  return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . drupal_attributes($variables['options']['attributes']) . '><span>' . ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</span></a>';
}




/**
 * Implements hook_preprocess_page().
 */
  
function dcco2013_preprocess_page(&$vars) {

  foreach ($vars['main_menu'] as $key => $value) {
    global $base_url;
    if($vars['main_menu'][$key]['href'] == '<front>') {
      $vars['main_menu'][$key]['attributes']['id'] = 'home-link';
      //$vars['main_menu'][$key]['title'] = '<img src="' . $base_url . '/'  . drupal_get_path('theme','dcco2013') . '/images/home.png" />';
    }
  }
}