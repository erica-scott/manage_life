(function ($, Drupal, window, document, undefined) {

  field_collection_id = 0;

  Drupal.behaviors.foodPlan = {
    attach: function(context, settings) {
      $('.field-name-field-food td select').change(function() {
        var id = $(this).attr('id');
        id = id.match(/\d+/);
        field_collection_id = id;
        var tid = this.value;
        $.get('/food-plan/get_term/' + parseInt(tid, 10), null, servingSize);
      });
    }
  }

  var servingSize = function(response) {
    var serving_size = response;
    $('#edit-field-food-und-' + field_collection_id + '-field-serving-size').html("Serving Size: " + serving_size);
  }

})(jQuery, Drupal, this, this.document);
