var gulp = require('gulp');
var sass = require('gulp-sass');
var minifyCSS = require('gulp-cssnano');
var prefix = require('gulp-autoprefixer');
var del = require ('del');

gulp.task('styles', function () {
  return gulp.src('scss/**/*.scss')
    .pipe(sass())
    .pipe(minifyCSS({ zindex: false }))
    .pipe(prefix())
    .pipe(gulp.dest('css'));
});

gulp.task('clean', function(done) {
  del(['css'], done);
});

gulp.task('watch', function(done) {
  gulp.watch(['scss/**/*.scss'], ['styles']);
  done();
});

gulp.task('default', ['watch', 'clean', 'styles']);
