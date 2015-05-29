(function($) {
	jQuery.expr[':'].Contains = function(a,i,m){
      return (a.textContent || a.innerText || "").toUpperCase().indexOf(m[3].toUpperCase())>=0;
  };
	//first condition
	function firstCond(){
		$('input').val("");
		$('#listSearch .ui-listview-item').slideUp(500);
	};
	// accending sort
	function asc_sort(a, b){
		return ($(b).text()) < ($(a).text()) ? 1 : -1;    
	}
	// decending sort
	function dec_sort(a, b){
		return ($(b).text()) > ($(a).text()) ? 1 : -1;    
	}
	//remove duplicate
	function removeDup(a){
		var seen = {};
		$(a).each(function() {
			var txt = $(this).text();
				if (seen[txt])
					$(this).remove();
				else
					seen[txt] = true;
		});
	}
	var typingTimeout;
	function listFilter(header, list) { 
	// header is any element, list is an unordered list
   // create and add the filter form to the header
    var form = $("<div>").attr({"class":"filterform"}),
        input = $("<input>").attr({"class":"filterinput","type":"text","id":"searchinput","placeholder":"Type to search..."});
    $(form).append(input).appendTo(header);

     $(input)
		.click( function(){firstCond();})
		.keyup( function () {
			var filter = $(this).val();
			$(list).find(".ui-listview-item").hide();
			if (filter && filter != " " && filter != "" && filter.length > 0) {
				clearTimeout(typingTimeout);
				typingTimeout = setTimeout(function(){
					$(list).hide();				

					// the query executed immediatelly for each keypress, this will cause performance issue
					// give some delay while typing

					// this finds all links in a list that contain the input,
					// and hide the ones not containing the input while showing the ones that do
					$(list).find("a:not(:Contains(" + filter + "))").parent().hide();
					$(list).find("a:Contains(" + filter + ")").parent().show();
					$(list).fadeIn();				
				}, 500);
			} else {
				$(list).find(".ui-listview-item").hide();
			}
			return false;
		})
		.keypress(function(e){
			if(e.which==13){
				var a = $(list).find(".ui-listview-item:visible").first().children().attr('desktop');
				Utils.run_desktop(a);
				firstCond();
			}
		});
  }
  //ondomready
	$(document).ready(function() {
		var 	header=$('#header'),
				listSearch=$('#listSearch'),
				listSearch_child=$('#listSearch .ui-listview-item');	
		$(document).keydown(function() {$("input").focus();});
		listFilter(header, listSearch);
		listSearch_child.sort(asc_sort).appendTo(listSearch);
		listSearch_child.mouseup(function() {firstCond();});
		removeDup(listSearch_child);
	});
}) (jQuery);																																								
