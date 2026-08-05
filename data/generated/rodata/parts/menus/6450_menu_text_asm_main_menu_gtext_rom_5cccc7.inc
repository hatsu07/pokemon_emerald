	@ asm/main_menu.s:5043 MainMenu_FormatSavegameTime
	.globl gText_Rom_5CCCC7
gText_Rom_5CCCC7: @ 0x085CCCC7
	.string "プレイじかん　{0xFD}{0x02}:{0xFD}{0x03}$"
	.if (. - gText_Rom_5CCCC7) > 0xd
	.error "gText_Rom_5CCCC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCC7) < 0xd
	.space 0xd - (. - gText_Rom_5CCCC7)
	.endif
