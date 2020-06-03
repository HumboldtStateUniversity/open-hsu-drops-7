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

<div class="panel-display clearfix <?php if (!empty($classes)) {
                                      print $classes;
                                    } ?><?php if (!empty($class)) {
                                          print $class;
                                        } ?>" <?php if (!empty($css_id)) {
                                                print "id=\"$css_id\"";
                                              } ?>>
  <div class="container-fluid">
    <div class="row">
      <div class="col-md-12 radix-layouts-header panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['header']; ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-md-4 radix-layouts-column1 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['column1']; ?>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-column2 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['column2']; ?>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-column2 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['column3']; ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-md-12 radix-layouts-middle panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['header2']; ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-md-4 radix-layouts-secondcolumn1 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['2column1']; ?>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-secondcolumn2 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['2column2']; ?>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-secondcolumn2 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['2column3']; ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-md-12 radix-layouts-footer panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['header3']; ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-md-4 radix-layouts-secondcolumn1 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['3column1']; ?>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-secondcolumn2 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['3column2']; ?>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-secondcolumn2 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['3column3']; ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-md-12 radix-layouts-footer panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['header4']; ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-md-4 radix-layouts-secondcolumn1 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['4column1']; ?>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-secondcolumn2 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['4column2']; ?>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-secondcolumn2 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['4column3']; ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-md-12 radix-layouts-footer panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['header5']; ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-md-4 radix-layouts-secondcolumn1 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['5column1']; ?>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-secondcolumn2 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['5column2']; ?>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-secondcolumn2 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['5column3']; ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-md-12 radix-layouts-footer panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['header6']; ?>
        </div>
      </div>
    </div>

    <div class="row">
      <div class="col-md-4 radix-layouts-secondcolumn1 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['6column1']; ?>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-secondcolumn2 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['6column2']; ?>
        </div>
      </div>
      <div class="col-md-4 radix-layouts-secondcolumn2 panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['6column3']; ?>
        </div>
      </div>
    </div>

  </div>

</div><!-- /. -->
