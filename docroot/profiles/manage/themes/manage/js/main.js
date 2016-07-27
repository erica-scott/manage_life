/**
 * @file
 * main.js
 *
 * Implementation JavaScript functions in this theme.
 */

(function ($) {
  Drupal.behaviors.manageTheme = {
    attach: function (context, settings) {
      $('#edit-add-content').click(function() {
        var bg = $(this).css('background-image');
        if (bg.indexOf('up-arrow') >= 0) {
          $(this).css('background-image', 'url("/profiles/manage/themes/manage/images/down-arrow.png")');
        }
        else {
          $(this).css('background-image', 'url("/profiles/manage/themes/manage/images/up-arrow.png")');
        }
        $('#add-content-list').toggle();
      });
    }
  };
})(jQuery);
