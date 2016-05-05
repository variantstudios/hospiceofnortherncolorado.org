<?php

/**
 * @file
 * Display Suite Hospice Static configuration.
 */

function ds_hospice_static() {
  return array(
    'label' => t('Hospice Static'),
    'regions' => array(
      'top' => t('top'),
      'middle' => t('middle'),
      'bottom' => t('bottom'),
      'front_left' => t('front_left'),
      'front_right' => t('front_right'),
    ),
    // Uncomment if you want to include a CSS file for this layout (hospice_static.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (hospice_static.png)
    // 'image' => TRUE,
  );
}
