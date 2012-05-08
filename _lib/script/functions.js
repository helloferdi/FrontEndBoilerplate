$('html').removeClass('nojs');  // We got JS.

$(function() {  // When the document is ready

    // Search Field Clear
    $(".clear").focus(function() {
            if (this.value == this.defaultValue) {
                    this.value = "";
            }
    }).blur(function() {
            if (!this.value.length) {
                    this.value = this.defaultValue;
            }
    })

});