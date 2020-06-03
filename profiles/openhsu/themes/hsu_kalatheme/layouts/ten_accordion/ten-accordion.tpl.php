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
      <div class="col-md-8 radix-layouts-content panel-panel">
        <div class="row">
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-one']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-two']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-three']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-four']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-five']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-six']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-seven']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-eight']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-nine']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-ten']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-eleven']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-twelve']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-thirteen']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-fourteen']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-fifteen']; ?>
            </div>
          </div>
          <div class="col-md-12">
            <div class="panel-panel-inner">
              <?php print $content['column-sixteen']; ?>
            </div>
          </div>
        </div>
      </div>
      <!-- end main col-->
      <div class="col-md-4 radix-layouts-sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['sidebar']; ?>
        </div>
      </div>
    </div>
  </div><!-- /. -->
