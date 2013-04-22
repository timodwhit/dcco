<?php
/**
 * @file
 * dcco_feature.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function dcco_feature_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:event:update body field'
  $permissions['node:event:update body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:event:update field_experience field'
  $permissions['node:event:update field_experience field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:event:update field_slides field'
  $permissions['node:event:update field_slides field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:event:update field_speakers field'
  $permissions['node:event:update field_speakers field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:event:view body field'
  $permissions['node:event:view body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:event:view field_experience field'
  $permissions['node:event:view field_experience field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:event:view field_slides field'
  $permissions['node:event:view field_slides field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:event:view field_speakers field'
  $permissions['node:event:view field_speakers field'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
