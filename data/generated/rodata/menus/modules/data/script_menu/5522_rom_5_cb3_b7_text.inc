	@ src/data/script_menu.h:237 script_menu_line_237 (+1 aliases)
	.globl gText_Rom_5CB3B7
gText_Rom_5CB3B7: @ 0x085CB3B7
	.string "ジャンプ$"
	.if (. - gText_Rom_5CB3B7) > 0x5
	.error "gText_Rom_5CB3B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB3B7) < 0x5
	.space 0x5 - (. - gText_Rom_5CB3B7)
	.endif
	@ Decoded text from ROM range: offset=0x5CB3BC, size=0x7
	.string "かべがみ　　$"
