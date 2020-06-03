api = 2
core = 7.x

; Drupal Core

projects[drupal][type] = core
projects[drupal][download][type] = git
projects[drupal][download][url] = git://github.com/pantheon-systems/drops-7.git
projects[drupal][download][branch] = master
projects[drupal][patch][1334818] = https://drupal.org/files/issues/D7-install-profile-ajax-1334818-8.patch

; The Panopoly Foundation

projects[panopoly_core][version] = 1.74
projects[panopoly_core][subdir] = panopoly

projects[panopoly_images][version] = 1.74
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.74
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_theme][patch][2777847] = https://www.drupal.org/files/issues/accordion-style-id-fix.2777847.8.patch


projects[panopoly_magic][version] = 1.74
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.74
projects[panopoly_widgets][subdir] = panopoly

projects[panopoly_admin][version] = 1.74
projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.74
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset

projects[panopoly_pages][version] = 1.74
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.74
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.74
projects[panopoly_search][subdir] = panopoly

; Demo Content

projects[panopoly_demo][version] = 1.74
projects[panopoly_demo][subdir] = panopoly
