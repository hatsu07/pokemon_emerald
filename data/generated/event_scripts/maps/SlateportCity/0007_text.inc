	@ data/maps/SlateportCity/scripts.inc:928 SlateportCity_Text_PleaseGiveItThisEffortRibbon
	.globl gText_Rom_1DC9E7
gText_Rom_1DC9E7: @ 0x081DC9E7
	.string "ものすごく がんばったのね!\pごほうびと して\nこの がんばリボンを つけてあげて!{EOS}"
	.if (. - gText_Rom_1DC9E7) > 0x2b
	.error "gText_Rom_1DC9E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DC9E7) < 0x2b
	.space 0x2b - (. - gText_Rom_1DC9E7)
	.endif
