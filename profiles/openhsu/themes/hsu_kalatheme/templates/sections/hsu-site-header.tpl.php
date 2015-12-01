<header role="banner">
  <div class="hsu-header">
    <div class="container department-brand">
    <?php if ($logo): ?>
      <div class="logo"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
              <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
            </a>
        </div>
    <?php endif; ?>

    <?php if ($site_name): ?>
      <h1 <?php if ($hide_site_name) { print ' class="element-invisible"'; } ?> <?php {print ' class="kilo"'; }?>>
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
      </h1>  
    <?php endif; ?>

    <?php if ($site_slogan): ?>
      <div id="site-slogan"<?php if ($hide_site_slogan) { print ' class="element-invisible"'; } ?>>
        <p class="department-slogan"><?php print $site_slogan; ?></p>
      </div>

    <?php endif; ?>
        </div> <!-- /#name-and-slogan -->

   <?php if ($hsu_header): ?>
      <div class="header-image">
        <?php print render($hsu_header_image); ?>
      </div>
    <?php endif; ?>
  </div>
</header>
