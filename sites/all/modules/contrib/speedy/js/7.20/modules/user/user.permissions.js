(function($){Drupal.behaviors.permissions={attach:function(context){var self=this;$("table#permissions").once("permissions",function(){var $table=$(this);if($table.prev().length){var $ancestor=$table.prev(),method="after"}else{var $ancestor=$table.parent(),method="append"}$table.detach();var $dummy=$('<input type="checkbox" class="dummy-checkbox" disabled="disabled" checked="checked" />').attr("title",Drupal.t("This permission is inherited from the authenticated user role.")).hide();$("input[type=checkbox]",this).not(".rid-2, .rid-1").addClass("real-checkbox").each(function(){$dummy.clone().insertAfter(this)});$("input[type=checkbox].rid-2",this).bind("click.permissions",self.toggle).each(self.toggle);$ancestor[method]($table)})},toggle:function(){var authCheckbox=this,$row=$(this).closest("tr");$row.find(".real-checkbox").each(function(){this.style.display=authCheckbox.checked?"none":""});$row.find(".dummy-checkbox").each(function(){this.style.display=authCheckbox.checked?"":"none"})}}})(jQuery);
