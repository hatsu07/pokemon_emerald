	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5A9E04
gText_Rom_5A9E04: @ 0x085A9E04
	.string "かった！$"
	.if (. - gText_Rom_5A9E04) > 0x5
	.error "gText_Rom_5A9E04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9E04) < 0x5
	.space 0x5 - (. - gText_Rom_5A9E04)
	.endif
	.incbin "baserom.gba", 0x5a9e09, 0x1f

