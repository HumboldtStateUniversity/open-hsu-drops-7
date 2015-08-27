module.exports = function(grunt) {

  require('load-grunt-tasks')(grunt);

  var themeJs = [];

  grunt.initConfig({

    concat: {
      themeJs: {
        files: {
          'js/dist/hot_bs_carousel.js': themeJs
        }
      }
    },
    uglify: {
      options: {
        sourceMap: false
      },
      themeJs: {
        files: {
          'js/dist/hot_bs_carousel.js': 'js/dist/hot_bs_carousel.js'
        }
      }
    },
    cssmin: {
      target: {
        files: {
          'css/hot_bs_carousel.css': 'css/hot_bs_carousel.css'
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
      themeJs: {
        files: themeJs,
        tasks: ['concat:themeJs']
      }
    },
    sass: {
      options: {
        sourcemap: true,
        trace: true,
        includePaths: []
      },
      dev: {
        options: {
          lineNumbers: true,
          outputStyle: 'nested'
        },
        files: {
          'css/hot_bs_carousel.css': 'scss/hot_bs_carousel.scss',
        }
      },
      dist: {
        options: {
          compressed: true
        },
        files: {
          'css/hot_bs_carousel.css': 'scss/hot_bs_carousel.scss'
        }
      }
    },
    jshint: {
      themeJs: {
        files: {
          src: ['js/hot_bs_carousel.js']
        },
        options: {
          reporter: require('jshint-stylish'),
          jshintrc: '.jshintrc'
        }
      }
    },
  });

  grunt.registerTask("productionbuild", ['newer:concat', 'uglify', 'sass:dist', 'cssmin']);
  grunt.registerTask("devbuild", ['newer:concat', 'sass:dev',]);
  grunt.registerTask("develop", ['devbuild','watch']);
  grunt.registerTask("default", ['develop']);
  return grunt.registerTask('guide');

};
