	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5A987D
gText_Rom_5A987D: @ 0x085A987D
	.string "かった！$"
	.if (. - gText_Rom_5A987D) > 0x5
	.error "gText_Rom_5A987D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A987D) < 0x5
	.space 0x5 - (. - gText_Rom_5A987D)
	.endif
	.incbin "baserom.gba", 0x5a9882, 0x43

