// search box
+function ($) {
  $(document).ready(function (){
    var submitIcon = $('.searchbox-icon');
    var inputBox = $('.searchbox-input');
    var searchBox = $('.searchbox');
    var isOpen = false;
    submitIcon.click(function(){
      if(isOpen == false){
        searchBox.addClass('searchbox-open');
        inputBox.focus();
        isOpen = true;
      } else {
        searchBox.removeClass('searchbox-open');
        inputBox.focusout();
        isOpen = false;
      }
    });
    submitIcon.mouseup(function(){
      return false;
    });
    searchBox.mouseup(function(){
      return false;
    });
    $(document).mouseup(function(){
      if(isOpen == true){
        $('.searchbox-icon').css('display','block');
        submitIcon.click();
      }
    });
  });
  function buttonUp(){
    var inputVal = $('.searchbox-input').val();
    inputVal = $.trim(inputVal).length;
    if( inputVal !== 0){
      $('.searchbox-icon').css('display','none');
    } else {
      $('.searchbox-input').val('');
      $('.searchbox-icon').css('display','block');
    }
  }
}(jQuery);

// skip link fix
+function ($) {
  $( document ).ready(function() {
    // bind a click event to the 'skip' link
    $("#skip-link a").click(function(event){

      // strip the leading hash and declare
      // the content we're skipping to
      var skipTo="#"+this.href.split('#')[1];

      // Setting 'tabindex' to -1 takes an element out of normal
      // tab flow but allows it to be focused via javascript
      $(skipTo).attr('tabindex', -1).on('blur focusout', function () {

        // when focus leaves this element,
        // remove the tabindex attribute
        $(this).removeAttr('tabindex');

      }).focus(); // focus on the content container
    });
  });
}(jQuery);