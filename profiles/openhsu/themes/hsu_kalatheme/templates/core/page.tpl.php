<?php

/**
 * @file
 * Kalatheme's implementation to display a single Drupal page.
 *
 * The doctype, html, head, and body tags are not in this template. Instead
 * they can be found in the html.tpl.php template normally located in the
 * core/modules/system directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 * - $hide_site_name: TRUE if the site name has been toggled off on the theme
 *   settings page. If hidden, the "element-invisible" class is added to make
 *   the site name visually hidden, but still accessible.
 * - $hide_site_slogan: TRUE if the site slogan has been toggled off on the
 *   theme settings page. If hidden, the "element-invisible" class is added to
 *   make the site slogan visually hidden, but still accessible.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $main_menu_expanded (array): An array containing 2 depths of the Main
 *   menu links
 *   for the site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on
 *   the menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node entity, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Kalatheme:
 * - $no_panels: A boolean that is true if the current page is not a panels page
 * - $always_show_page_title: A boolean that is true if we're to always print
 *   the page title, even on panelized pages.
 *
 * Regions:
 * - $page['content']: The main content of the current page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see bartik_process_page()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<div id="page-wrapper"><div id="page">

  <!-- Site Header -->
  <header role="banner" class="header-container">

    <div class="hsu-header">
      <div class="container department-brand">
      <?php if ($logo): ?>
        <div class="logo">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
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

      <?php if ($page['header_search']): ?>
        <div class="searchbox">
          <?php print render($region['header_search']); ?>
          <button class="searchbox-icon">GO</button>
        </div>
      <?php endif; ?>
      </div><!-- /.department-brand -->
    </div><!-- /.hsu-header -->
  </header>
  <!-- Site Navigation -->
  <?php print render($page['hsu_navbar']); ?>

  <!-- Content Top -->
  <?php if ($page['content_top']): ?>
    <div class="content_top">
      <?php print render($page['content_top']); ?>
    </div>
  <?php endif; ?>

  <!-- Page Main -->
  <div id="main-wrapper" class="clearfix">
    <main id="main" class="clearfix" role="main">
      <div id="top-content">
        <div class="column container">
          <?php if (($no_panels || $always_show_page_title) && $title): ?>
            <h1 class="page-header title">
              <?php print $title; ?>
            </h1>
          <?php endif; ?>

          <?php if ($messages): ?>
            <div class="alerts">
              <?php print $messages; ?>
            </div>
          <?php endif; ?>

          <?php if (!empty($tabs['#primary']) || !empty($tabs['#secondary'])): ?>
            <div id="tabs">
              <?php print render($tabs); ?>
            </div>
          <?php endif; ?>

          <?php if ($action_links): ?>
            <div id="action-links">
              <?php print render($action_links); ?>
            </div>
          <?php endif; ?>
        </div>
      </div> <!-- /.section, /#top-content -->

      <div id="content" class="container">
        <div class="column <?php $no_panels ? print 'container' : ''; ?>">
          <?php print render($page['content']); ?>
        </div>
      </div> <!-- /.section, /#content -->

    </main><!-- /#main -->
  </div> <!-- /#main-wrapper -->

  <div class="footer-wrapper">
    <div class="container">
      <div class="circleh">
        <svg width="50" height="50" viewBox="0 0 50 50" xmlns="http://www.w3.org/2000/svg" aria-labelledby="hsuTitle" role="img">
        <title>Cal Poly Humboldt</title>
        <ellipse cx="25.1" cy="24.9" rx="25.1" ry="24.9" style="fill:#fff"/>
        <path  class="circleh-color" d="M25.1,3A21.9,21.9,0,1,0,47,24.9,21.89,21.89,0,0,0,25.1,3ZM36.8,36.8H28.1v-.5c.7-.1,1.1-.6,1.3-1.5s.2-2.9.2-6.3V27H20.5v1.4a62.43,62.43,0,0,0,.2,6.3A1.52,1.52,0,0,0,22,36.2v.5H13.4v-.5c.7-.1,1.1-.6,1.3-1.7.1-.9.2-3.6.2-8.2V22.6c0-4.2-.1-6.8-.2-7.6-.1-1.1-.5-1.6-1.2-1.7v-.5h8.4v.5q-.9.15-1.2,1.5c-.1.8-.2,2.9-.2,6.4v1.1h9.1V21.2a62.43,62.43,0,0,0-.2-6.3c-.1-.9-.5-1.4-1.1-1.5v-.5h8.3v.5c-.6.1-.9.6-1.1,1.7-.1.9-.2,3.4-.2,7.6v3.7c0,4.5.1,7.3.2,8.2.1,1.1.6,1.7,1.3,1.7Z"/>
        </svg>
        <span class="element-invisible">Cal Poly Humboldt</span>
      </div>
      <div class="row">
        <?php if ($page['footer_first'] || $footer_first_column_display): ?>
          <div class="<?php print $hsu_footer_first_css; ?>">
            <?php print $footer_first_column_display; ?>
            <?php print render($page['footer_first']); ?>
          </div>
        <?php endif; ?>

        <?php if ($page['footer_second'] || $footer_second_column_display): ?>
          <div class="<?php print $hsu_footer_second_css; ?>">
            <?php print $footer_second_column_display; ?>
            <?php print render($page['footer_second']); ?>
          </div>
        <?php endif; ?>

        <?php if ($page['footer_third'] || $footer_third_column_display): ?>
          <div class="<?php print $hsu_footer_third_css; ?>">
            <?php print $footer_third_column_display; ?>
            <?php print render($page['footer_third']); ?>
          </div>
        <?php endif; ?>

        <?php if ($page['footer_last'] || $footer_last_column_display): ?>
          <div class="<?php print $hsu_footer_last_css; ?>">
            <?php print $footer_last_column_display; ?>
            <?php print render($page['footer_last']); ?>
          </div>
        <?php endif; ?>
      </div>
    </div>
  </div>

</div></div> <!-- /#page, /#page-wrapper -->
