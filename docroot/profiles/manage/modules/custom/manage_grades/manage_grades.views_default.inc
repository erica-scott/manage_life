<?php
/**
 * @file
 * manage_grades.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function manage_grades_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'grades';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Grades';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Grades';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_semester_year',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_percentage' => 'field_percentage',
    'field_credits' => 'field_credits',
    'php' => 'php',
    'field_semester_year' => 'field_semester_year',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_percentage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_credits' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_semester_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Class Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Percentage */
  $handler->display->display_options['fields']['field_percentage']['id'] = 'field_percentage';
  $handler->display->display_options['fields']['field_percentage']['table'] = 'field_data_field_percentage';
  $handler->display->display_options['fields']['field_percentage']['field'] = 'field_percentage';
  /* Field: Content: Completed */
  $handler->display->display_options['fields']['field_completed']['id'] = 'field_completed';
  $handler->display->display_options['fields']['field_completed']['table'] = 'field_data_field_completed';
  $handler->display->display_options['fields']['field_completed']['field'] = 'field_completed';
  $handler->display->display_options['fields']['field_completed']['exclude'] = TRUE;
  /* Field: Content: Credits */
  $handler->display->display_options['fields']['field_credits']['id'] = 'field_credits';
  $handler->display->display_options['fields']['field_credits']['table'] = 'field_data_field_credits';
  $handler->display->display_options['fields']['field_credits']['field'] = 'field_credits';
  $handler->display->display_options['fields']['field_credits']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Earned Credits';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php if ($data->field_field_completed[0][\'raw\'][\'value\'] == 1) { $static = number_format(($data->field_field_percentage[0][\'raw\'][\'value\'])*($data->field_field_credits[0][\'raw\'][\'value\']/100), 2); } else { $static = \'0.00\'; } print $static; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Semester/Year */
  $handler->display->display_options['fields']['field_semester_year']['id'] = 'field_semester_year';
  $handler->display->display_options['fields']['field_semester_year']['table'] = 'field_data_field_semester_year';
  $handler->display->display_options['fields']['field_semester_year']['field'] = 'field_semester_year';
  $handler->display->display_options['fields']['field_semester_year']['label'] = '';
  $handler->display->display_options['fields']['field_semester_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_semester_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_semester_year']['settings'] = array(
    'format_type' => 'month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
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
    'grades' => 'grades',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'grades';
  $export['grades'] = $view;

  return $export;
}
