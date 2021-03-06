<?php
/**
 * @file navbar.tpl.php
 *
 */

?>

<nav class="navbar navbar-default" id="main-navigation" role="navigation">
  <div class="container">
    <div class="navbar-header">
      <button class="navbar-toggle" type="button" data-toggle="collapse" data-target=".navbar-collapse">
        <span class="element-invisible">Toggle navigation</span>
        <span class="icon-bar" aria-hidden="true"></span>
        <span class="icon-bar" aria-hidden="true"></span>
        <span class="icon-bar" aria-hidden="true"></span>
        <span class="menu-text">Menu</span>
      </button>
    </div><!-- /.navbar-header -->

    <div class="collapse navbar-collapse <?php if (!$main_menu && !$secondary_menu) { print 'element-invisible'; } ?>">
      <?php
        $pri_attributes = array(
          'class' => array(
            'nav',
            'navbar-nav',
            'links'
          ),
        );
        if (!$main_menu) {
          $pri_attributes['class'][] = 'element-invisible';
        }
      ?>
      <?php print theme('links__system_main_menu', array(
        'links' => $main_menu_expanded,
        'attributes' => $pri_attributes
      )); ?>

      <?php
        $sec_attributes = array(
          'id' => 'secondary-menu-links',
          'class' => array('nav', 'navbar-nav', 'secondary-links', 'navbar-right'),
        );
        if (!$secondary_menu) {
          $sec_attributes['class'][] = 'element-invisible';
        }
      ?>
    </div>
  </div>
</nav>
