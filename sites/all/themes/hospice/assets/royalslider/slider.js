(function ($) {
	$(document).ready(function() {


 $('#home-slider').royalSlider({
         arrowsNav: true,
    loop: true,
    keyboardNavEnabled: true,
    controlsInside: false,
    imageScaleMode: 'fill',
    arrowsNavAutoHide: false,
    autoScaleSlider: true, 
    //autoScaleSliderWidth: 960,     
    //autoScaleSliderHeight: 460,
    controlNavigation: 'bullets',
    thumbsFitInViewport: false,
    navigateByClick: true,
    startSlideId: 0,
    transitionType:'move',
    globalCaption:  false,
    numImagesToPreload: 3,
    usePreloader: true,
    autoPlay:  {
    		// autoplay options go gere
    		enabled: true,
    		delay: 6000
    	}
    });	        
/*

$('#home-slider').royalSlider({
    arrowsNav: true,
    loop: false,
    keyboardNavEnabled: true,
    controlsInside: false,
    imageScaleMode: 'fill',
    arrowsNavAutoHide: false,
    autoScaleSlider: true, 
    autoScaleSliderWidth: 960,     
    autoScaleSliderHeight: 350,
    controlNavigation: 'bullets',
    thumbsFitInViewport: false,
    navigateByClick: true,
    startSlideId: 0,
    autoPlay: false,
    transitionType:'move',
    globalCaption: false,
    autoPlay:  {
    		// autoplay options go gere
    		enabled: true,
    		delay: 6000
    	},
    imgWidth: 1400,
    imgHeight: 680
  });


*/

	});
})(jQuery);
