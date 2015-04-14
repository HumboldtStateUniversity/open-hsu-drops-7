<div <?php print drupal_attributes($variables['attributes_array']); ?>>
  <?php print render($carousel_indicators); ?>

  <!-- Wrapper for slides -->
  <div class="carousel-inner">
    <?php
      print render($slides);
    ?>
  </div>

  <!-- Controls -->
  <?php print render($carousel_controls); ?>
</div>
