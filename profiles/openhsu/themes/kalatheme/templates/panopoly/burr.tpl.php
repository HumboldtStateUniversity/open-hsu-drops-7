<?php
/**
 * @file
 * Template for Panopoly Burr.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display burr clearfix <?php !empty($class) ? print $class : ''; ?>" <?php !empty($css_id) ? print "id=\"$css_id\"" : ''; ?>>
  <section class="section">
    <div class="container">
      <div class="row">
        <div class="col-sm-<?php print kalatheme_grid_size(KALATHEME_GRID_THIRD); ?> burr-sidebar-region">
          <?php print $content['sidebar']; ?>
        </div>
        <div class="col-sm-<?php print kalatheme_grid_size(KALATHEME_GRID_THIRD * 2); ?> burr-main-content">
          <?php print $content['contentmain']; ?>
        </div>
      </div>
    </div>
  </section>
</div><!-- /.burr -->
