( function ($) {
  jQuery( document ).ready( function (){

    // utility toggles
    var $menuTrigger = $( '.hsu-header-has-subnav > a' ),
        e = window.event || e;
    
    $menuTrigger.click( function ( e ) {
      e.preventDefault();
      e.stopPropagation();
      var $this = $( this );
      $this.closest( '.hsu-header-has-subnav' ).siblings().children().removeClass( 'active' );
      $this.next( 'ul' ).toggleClass( 'active' );
    });

    $( document ).click( function () {
      $( '.hsu-header-has-subnav ul' ).removeClass( 'active' );
     });

  });
}) ( jQuery );