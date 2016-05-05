(function ($) {
	$(document).ready(function() {
		
				
	if(Modernizr.mq('only all')) {
    $('html').addClass('mq');
  } else {
    $('html').addClass('no-mq');
  };
    
    
		// JS Respond Breakpoints
		var jRes = jRespond([{
		    label: 'small',
		    enter: 0,
		    exit: 979
		},{
		    label: 'large',
		    enter: 980,
		    exit: 10000
		}]);
		
		
		jRes.addFunc({
		    breakpoint: 'small',
		    enter: function() {
	
			    $('ul.nice-menu ul').css('display', '');
					$('ul.nice-menu ul').css('visibility', '');
					$('.nice-menu').slicknav({
						prependTo:'.page-wrap'
					});
		    },
		    exit: function() {
		    $('.slicknav_menu').remove();
		    }
		});
 

	});
})(jQuery);