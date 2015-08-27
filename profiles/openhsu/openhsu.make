api = 2
core = 7.x

; Drupal Core

projects[drupal][type] = core
projects[drupal][download][type] = git
projects[drupal][download][url] = git://github.com/pantheon-systems/drops-7.git
projects[drupal][download][branch] = master
projects[drupal][patch][1334818] = https://drupal.org/files/issues/D7-install-profile-ajax-1334818-8.patch

; The Panopoly Foundation

projects[panopoly_core][version] = 1.19
projects[panopoly_core][subdir] = panopoly

projects[panopoly_images][version] = 1.19
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.19
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.19
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.19
projects[panopoly_widgets][subdir] = panopoly

projects[panopoly_admin][version] = 1.19
projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.19
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset

projects[panopoly_pages][version] = 1.19
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.19
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.19
projects[panopoly_search][subdir] = panopoly

; Demo Content

projects[panopoly_demo][version] = 1.19
projects[panopoly_demo][subdir] = panopoly

; HSU Modules

projects[hsu_core][version] = 1.0-dev
projects[hsu_core][subdir] = custom
projects[hsu_core][type] = module
projects[hsu_core][download][revision] = 4063799
projects[hsu_core][download][url] = https://github.com/kalamuna/hsu_core.git

projects[hsu_cas][version] = 1.0-dev
projects[hsu_cas][subdir] = custom
projects[hsu_cas][type] = module
projects[hsu_cas][download][revision] = 6964b77
projects[hsu_cas][download][url] = https://github.com/kalamuna/hsu_cas.git

projects[hsu_news][version] = 1.0-dev
projects[hsu_news][subdir] = custom
projects[hsu_news][type] = module
projects[hsu_news][download][revision] = e8d210f
projects[hsu_news][download][url] = https://github.com/kalamuna/hsu_news.git

projects[hsu_events][version] = 1.0-dev
projects[hsu_events][subdir] = custom
projects[hsu_events][type] = module
projects[hsu_events][download][revision] = 892f5b4
projects[hsu_events][download][url] = https://github.com/kalamuna/hsu_events.git

projects[hsu_people][version] = 1.0-dev
projects[hsu_people][subdir] = custom
projects[hsu_people][type] = module
projects[hsu_people][download][revision] = 6023169
projects[hsu_people][download][url] = https://github.com/kalamuna/hsu_people.git

projects[hsu_carousel][version] = 1.0-dev
projects[hsu_carousel][subdir] = custom
projects[hsu_carousel][type] = module
projects[hsu_carousel][download][revision] = 4f79ab9
projects[hsu_carousel][download][url] = https://github.com/kalamuna/hsu_carousel.git

; Bootstrap and Theme Framework
; Base Theme - Kalatheme

projects[kalatheme][version] = 3.x-dev
projects[kalatheme][type] = theme
projects[kalatheme][download][revision] = 8948b4a
projects[kalatheme][download][url] = http://git.drupal.org/project/kalatheme.git

; Bootstrap and Theme Framework - Subtheme - OpenHSU

projects[hsu_kalatheme][version] = 1.1
projects[hsu_kalatheme][type] = theme
projects[hsu_kalatheme][download][type] = git
projects[hsu_kalatheme][download][revision] = 0cff4db
projects[hsu_kalatheme][download][branch] = master
projects[hsu_kalatheme][download][url] = https://github.com/kalamuna/hsu_kalatheme.git

libraries[hsu_kalatheme_bootstrap][download][type] = get
libraries[hsu_kalatheme_bootstrap][download][url] = https://github.com/kalamuna/hsu_kalatheme_bootstrap/archive/v3.2.1.zip

