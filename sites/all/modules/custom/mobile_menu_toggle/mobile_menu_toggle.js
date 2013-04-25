(function ($) {
  Drupal.behaviors.mobile_menu_toggle = {
    attach: function (context, settings) {
     $("#mobile-menu-toggle", context).click(function(e, context) {
       if (typeof(Drupal.settings.mobile_menu_toggle) == 'undefined') {
        return false;
       }
       $(Drupal.settings.mobile_menu_toggle.css_class).slideToggle('fast');
       e.preventDefault();
     });
    }
  };
})(jQuery);
