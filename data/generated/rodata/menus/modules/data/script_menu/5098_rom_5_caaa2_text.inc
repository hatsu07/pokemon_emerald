	@ src/data/script_menu.h:65 script_menu_line_65
	.globl gText_Rom_5CAAA2
gText_Rom_5CAAA2: @ 0x085CAAA2
	.string "マッハ$"
	.if (. - gText_Rom_5CAAA2) > 0x4
	.error "gText_Rom_5CAAA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAA2) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAA2)
	.endif
