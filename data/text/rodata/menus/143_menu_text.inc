	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AABA9
gText_Rom_5AABA9: @ 0x085AABA9
	.string "かった！$"
	.if (. - gText_Rom_5AABA9) > 0x5
	.error "gText_Rom_5AABA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABA9) < 0x5
	.space 0x5 - (. - gText_Rom_5AABA9)
	.endif
	.incbin "baserom.gba", 0x5aabae, 0xd

	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AABBB
gText_Rom_5AABBB: @ 0x085AABBB
	.string "かった！$"
	.if (. - gText_Rom_5AABBB) > 0x5
	.error "gText_Rom_5AABBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABBB) < 0x5
	.space 0x5 - (. - gText_Rom_5AABBB)
	.endif
	.incbin "baserom.gba", 0x5aabc0, 0xf

