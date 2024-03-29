; Panopoly Search Makefile

api = 2
core = 7.x

; Search API and Facet API Modules

projects[facetapi][version] = 1.6
projects[facetapi][subdir] = contrib

projects[search_api][version] = 1.27
projects[search_api][subdir] = contrib

projects[search_api_solr][version] = 1.15
projects[search_api_solr][subdir] = contrib

projects[search_api_db][version] = 1.8
projects[search_api_db][subdir] = contrib

; Solr PHP Client Library

libraries[SolrPhpClient][type] = library
libraries[SolrPhpClient][download][type] = get
libraries[SolrPhpClient][download][url] = https://github.com/PTCInc/solr-php-client/archive/master.zip
