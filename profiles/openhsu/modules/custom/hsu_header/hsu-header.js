(function ($) {
  jQuery(document).ready(function (){

    // utility toggles
    var $menu = $('#utility-menu'),
    $menulink = $('.utility-menu-link'),
    $menuTrigger = $('.has-subnav > a');
    
    $menulink.click(function(e) {
      e.preventDefault();
      $menulink.toggleClass('active');
      $menu.toggleClass('active');
    });
    
    $menuTrigger.click(function(e) {
      e.preventDefault();
      event.stopPropagation();
      var $this = $(this);
      $this.toggleClass('test').next('ul').toggleClass('active');
    });
    $(document).click(function(){
      $('ul').removeClass('active');
     });

  });
}) (jQuery);