<?php
/**
 * @file
 * humanitarianresponse_core.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function humanitarianresponse_core_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'teaser_labels';
  $ds_field->label = 'Teaser Labels';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<span class="clusters">[node:field_clusters]</span> <span class="locations">[node:field_locations]</span> <span class="themes">[node:field_themes]</span>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['teaser_labels'] = $ds_field;

  return $export;
}
