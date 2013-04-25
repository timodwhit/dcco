(function ($) {
  $(document).ready(function(){

    if (!Modernizr.svg) {
      $(".cloud-lg").attr("src", "/dccosplash/images/cloud-lg.png");
      $(".cloud-sm").attr("src", "/dccosplash/images/cloud-sm.png");
      $(".mountain").attr("src", "/dccosplash/images/mountain.png");
    }

    trackMouse();

  }); // END document.ready

  var fd = 0;
  var md = 0;
  var bd = 0;

  var ff = 15;
  var mf = 10;
  var bf = 5;

  function trackMouse() {
    $("body").mousemove(function(e){
      // console.log(e.pageX, e.pageY, $(this).outerWidth(), $(this).outerHeight());
      var p = (e.pageX/$(this).outerWidth());
      fd = -(p*ff - (ff/3));
      md = -(p*mf - (mf/3));
      bd = -(p*bf - (bf/3));
    });

    setInterval(moveMountains,50);
  }

  function moveMountains() {
    var f = $(".foreground");
    var m = $(".middleground");
    var b = $(".background");
    var s = $(".scene");
    var sw = s.outerWidth()/100;

    var fc = parseFloat(f.css("margin-left")) / sw;
    var fm = (fc + ((fd - fc)/2));
    f.css("margin-left", fm + "%");

    var mc = parseFloat(m.css("margin-left")) / sw;
    var mm = (mc + ((md - mc)/2));
    m.css("margin-left", mm + "%");

    var bc = parseFloat(b.css("margin-left")) / sw;
    var bm = (bc + ((bd - bc)/2));
    b.css("margin-left", bm + "%");
  }


})(jQuery); //$