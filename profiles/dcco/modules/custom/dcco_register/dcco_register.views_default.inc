<?php

/**
 * Implements hook_views_default_views().
 */
function dcco_register_views_default_views() {

  $views = array();
  
  $view = new view();
  $view->name = 'dcco_register_total_contributions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_payment_transaction';
  $view->human_name = 'Total Registration Contributions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Total Registration Contributions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>For DrupalCamp Colorado 2014, you can set your own registration price. <strong>How much is this camp worth to you?</strong></p>
  
  <p>Any registration contributions beyond our budget target will be donated to 3 charities: <a href="http://adainitiative.org/">The Ada Initiative</a>, <a href="http://code.org/">Code.org</a>, and <a href="https://www.eff.org/">Electronic Frontier Foundation</a>. Thank you for generously supporting the camp and these organizations.</p>
  
  <p>We have so far raised <span class="dcco-register-current">[amount]</span> of our <span class="dcco-register-total">$4000</span> goal.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: SUM(Commerce Payment Transaction: Amount) */
  $handler->display->display_options['fields']['amount']['id'] = 'amount';
  $handler->display->display_options['fields']['amount']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['amount']['field'] = 'amount';
  $handler->display->display_options['fields']['amount']['group_type'] = 'sum';
  $handler->display->display_options['fields']['amount']['label'] = '';
  $handler->display->display_options['fields']['amount']['alter']['text'] = '<span></span>';
  $handler->display->display_options['fields']['amount']['element_label_colon'] = FALSE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'pending' => 'pending',
    'completed' => 'completed',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  $views[$view->name] = $view;
  return $views;
 
}
