	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AA60C
gText_Rom_5AA60C: @ 0x085AA60C
	.string "かった！$"
	.if (. - gText_Rom_5AA60C) > 0x5
	.error "gText_Rom_5AA60C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA60C) < 0x5
	.space 0x5 - (. - gText_Rom_5AA60C)
	.endif
	.incbin "baserom.gba", 0x5aa611, 0x6d

