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

; Bootstrap and Theme Framework
; Base Theme - Kalatheme
projects[kalatheme][version] = 4.x-dev
projects[kalatheme][type] = theme
projects[kalatheme][download][type] = git
projects[kalatheme][download][branch] = 7.x-4.x

; Bootstrap and Theme Framework - Subtheme - OpenHSU

;projects[openhsu_kalatheme][version] = 1.1
;projects[openhsu_kalatheme][type] = theme
;projects[openhsu_kalatheme][download][type] = git
;projects[openhsu_kalatheme][download][revision] = 0e10c11d
;projects[openhsu_kalatheme][download][branch] = 7.x-1.x
;projects[openhsu_kalatheme][download][url] =

;libraries[openhsu_kalatheme_bootstrap][download][type] = get
;libraries[openhsu_kalatheme_bootstrap][download][url] =

