<?php
/**
 * @file
 * Display Suite Hospice Static template.
 *
 * Available variables:
 *
 * Layout:
 * - $classes: String of classes that can be used to style this layout.
 * - $contextual_links: Renderable array of contextual links.
 * - $layout_wrapper: wrapper surrounding the layout.
 *
 * Regions:
 *
 * - $top: Rendered content for the "top" region.
 * - $top_classes: String of classes that can be used to style the "top" region.
 *
 * - $middle: Rendered content for the "middle" region.
 * - $middle_classes: String of classes that can be used to style the "middle" region.
 *
 * - $bottom: Rendered content for the "bottom" region.
 * - $bottom_classes: String of classes that can be used to style the "bottom" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> clearfix">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

    <<?php print $top_wrapper; ?> class="static-top<?php print $top_classes; ?>">
      <?php print $top; ?>
    </<?php print $top_wrapper; ?>>

    <?php if (!empty($middle)): ?>
      <<?php print $middle_wrapper; ?> class="static-middle<?php print $middle_classes; ?>">
        <?php print $middle; ?>
      </<?php print $middle_wrapper; ?>>
    <?php endif; ?>

    <?php if (!empty($bottom)): ?>
      <<?php print $bottom_wrapper; ?> class="static-bottom<?php print $bottom_classes; ?>">
        <?php print $bottom; ?>
      </<?php print $bottom_wrapper; ?>>
    <?php endif; ?>


    <?php if (!empty($front_left)): ?>
      <<?php print $front_left_wrapper; ?> class="front-left<?php print $front_left_classes; ?>">
        <?php print $front_left; ?>
      </<?php print $front_left_wrapper; ?>>
    <?php endif; ?>


    <?php if (!empty($front_right)): ?>
    <<?php print $front_right_wrapper; ?> class="front-right<?php print $front_right_classes; ?>">
      <?php print $front_right; ?>
    </<?php print $front_right_wrapper; ?>>
    <?php endif; ?>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
