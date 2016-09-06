<?php
/**
 * @file
 * manage_food_plan.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function manage_food_plan_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'food_plan';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Food Plan';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Food Plan';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_day_of_the_week',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_food' => 'field_food',
    'field_day_of_the_week' => 'field_day_of_the_week',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_food' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_day_of_the_week' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Food */
  $handler->display->display_options['fields']['field_food']['id'] = 'field_food';
  $handler->display->display_options['fields']['field_food']['table'] = 'field_data_field_food';
  $handler->display->display_options['fields']['field_food']['field'] = 'field_food';
  $handler->display->display_options['fields']['field_food']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_food']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_food']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_food']['multi_type'] = 'ul';
  /* Field: Content: Day of the Week */
  $handler->display->display_options['fields']['field_day_of_the_week']['id'] = 'field_day_of_the_week';
  $handler->display->display_options['fields']['field_day_of_the_week']['table'] = 'field_data_field_day_of_the_week';
  $handler->display->display_options['fields']['field_day_of_the_week']['field'] = 'field_day_of_the_week';
  $handler->display->display_options['fields']['field_day_of_the_week']['label'] = '';
  $handler->display->display_options['fields']['field_day_of_the_week']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_day_of_the_week']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'food_plan' => 'food_plan',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'food-plan';
  $export['food_plan'] = $view;

  return $export;
}
