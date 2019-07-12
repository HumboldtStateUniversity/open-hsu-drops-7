const sass = require('node-sass');

module.exports = function (grunt) {

  "use strict";

  require('load-grunt-tasks')(grunt);


  grunt.initConfig({
    uglify: {
      target: {
        files: {
          'js/hsu_kalatheme.js': ['bower_components/bootstrap-sass-official/assets/javascripts/bootstrap.js', 'js/src/hsu_kalatheme.js']
        }
      }
    },
    cssmin: {
      target: {
        files: {
          'css/main.css': 'css/main.css'
        }
      }
    },
    watch: {
      gruntfile: {
        files: 'Gruntfile.js',
        options: {
          reload: true
        }
      },
      sass: {
        files: 'scss/**/*.scss',
        tasks: ['sass:dev'],
        options: {
          livereload: true
        }
      },
      scripts: {
        files: 'js/src/hsu_kalatheme.js',
        tasks: ['uglify']
      }
    },
    sass: {
      options: {
        implementation: sass,
        sourceMap: true,
        trace: true,
        includePaths: [
          'bower_components',
          'bower_components/bootstrap-sass-official/assets/stylesheets/',
          'bower_components/fontawesome/scss/'
        ]
      },
      dev: {
        options: {
          lineNumbers: true,
          outputStyle: 'nested'
        },
        files: {
          'css/main.css': 'scss/main.scss',
        }
      },
      dist: {
        options: {
          compressed: true
        },
        files: {
          'css/main.css': 'scss/main.scss'
        }
      }
    },
    // jshint: {
    //   themeJs: {
    //     files: {
    //       src: ['js/src/hsu_kalatheme.js']
    //     },
    //     options: {
    //       reporter: require('jshint-stylish'),
    //       jshintrc: '.jshintrc'
    //     }
    //   }
    // }
  });

  grunt.registerTask("productionbuild", ['uglify', 'sass:dist', 'cssmin']);
  grunt.registerTask("devbuild", ['uglify', 'sass:dev']);
  grunt.registerTask("develop", ['devbuild', 'watch']);
  return grunt.registerTask("default", ['develop']);
};
