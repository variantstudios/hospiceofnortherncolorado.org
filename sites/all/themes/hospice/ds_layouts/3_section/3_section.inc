<?php

/**
 * @file
 * Display Suite 3 Section configuration.
 */

function ds_3_section() {
  return array(
    'label' => t('3 Section'),
    'regions' => array(
      'left' => t('left'),
      'right' => t('right'),
      'bottom' => t('bottom'),
    ),
    // Uncomment if you want to include a CSS file for this layout (3_section.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (3_section.png)
    // 'image' => TRUE,
  );
}
