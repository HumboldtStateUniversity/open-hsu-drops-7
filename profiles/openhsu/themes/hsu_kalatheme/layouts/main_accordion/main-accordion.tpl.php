<?php
/**
 * @file
 * Main Accordion.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="container-fluid">
    <div class="row">
      <div class="col-md-8 radix-layouts-content panel-panel">
        <div class="row">
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-top']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-middle']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-footer']; ?>
            </div>
          </div>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['sidebar']; ?>
        </div>
      </div>
    </div>
</div><!-- /. -->
