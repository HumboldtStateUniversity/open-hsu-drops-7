<header role="banner" class="masthead">
 <div class="container">
  <div class="row">
    <div class="col-sm-6">
    <?php if ($logo): ?>
      <div class='brand pull-left'>

        <p class="hsumark brand pull-left">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
          </a>
          <span class="visuallyhidden">Humboldt State University</span>
          
        </p>


      </div>
    <?php endif; ?>

    </div><!-- /.col-sm-6 -->

    <div class="col-sm-6">
      <?php if ($site_slogan): ?>
        <div id="site-slogan" <?php if ($hide_site_slogan) { print 'class="element-invisible"'; } ?>>
          <p class="lead text-right">
            <?php print $site_slogan; ?>
          </p>
        </div>
      <?php endif; ?>
    </div><!-- /.col-sm-6 -->

  </div><!--/.row-->

 </div><!--/.container-->

  <?php if ($hsu_banner && $hsu_header): ?>
    <div class="row">
      <div class="hsu-header">
        <?php print render($hsu_header_image); ?>
        <?php if ($site_name): ?>
          <div class="container">
            <span class="hsu-header-site-name"><?php print $site_name; ?></span>
          </div>
        <?php endif; ?>
      </div>
    </div>
  <?php endif; ?>

</header>
