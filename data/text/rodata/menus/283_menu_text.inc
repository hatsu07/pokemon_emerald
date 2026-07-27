	@ src/data/script_menu.h:13 script_menu_line_13
	.globl gText_Rom_5E816B
gText_Rom_5E816B: @ 0x085E816B
	.string "はいる$"
	.if (. - gText_Rom_5E816B) > 0x4
	.error "gText_Rom_5E816B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E816B) < 0x4
	.space 0x4 - (. - gText_Rom_5E816B)
	.endif
	.incbin "baserom.gba", 0x5e816f, 0xd3

