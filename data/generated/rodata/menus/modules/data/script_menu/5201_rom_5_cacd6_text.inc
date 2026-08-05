	@ src/data/script_menu.h:1326 script_menu_line_1326
	.globl gText_Rom_5CACD6
gText_Rom_5CACD6: @ 0x085CACD6
	.string "たいせつなもの$"
	.if (. - gText_Rom_5CACD6) > 0x8
	.error "gText_Rom_5CACD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACD6) < 0x8
	.space 0x8 - (. - gText_Rom_5CACD6)
	.endif
