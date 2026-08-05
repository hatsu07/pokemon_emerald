	@ src/data/script_menu.h:249 script_menu_line_249
	.globl gText_Rom_5CAB69
gText_Rom_5CAB69: @ 0x085CAB69
	.string "しんかいのキバ$"
	.if (. - gText_Rom_5CAB69) > 0x8
	.error "gText_Rom_5CAB69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB69) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB69)
	.endif
