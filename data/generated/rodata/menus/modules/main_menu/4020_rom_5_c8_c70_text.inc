	@ src/main_menu.c:264 gText_MainMenuNewGame
	.globl gText_Rom_5C8C70
gText_Rom_5C8C70: @ 0x085C8C70
	.string "さいしょから はじめる$"
	.if (. - gText_Rom_5C8C70) > 0xc
	.error "gText_Rom_5C8C70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C70) < 0xc
	.space 0xc - (. - gText_Rom_5C8C70)
	.endif
