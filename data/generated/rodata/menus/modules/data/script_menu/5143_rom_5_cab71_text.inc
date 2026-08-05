	@ src/data/script_menu.h:250 script_menu_line_250
	.globl gText_Rom_5CAB71
gText_Rom_5CAB71: @ 0x085CAB71
	.string "しんかいのウロコ$"
	.if (. - gText_Rom_5CAB71) > 0x9
	.error "gText_Rom_5CAB71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB71) < 0x9
	.space 0x9 - (. - gText_Rom_5CAB71)
	.endif
