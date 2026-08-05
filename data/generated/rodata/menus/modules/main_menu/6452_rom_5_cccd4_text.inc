	@ asm/main_menu.s:5099 MainMenu_FormatSavegamePokedex
	.globl gText_Rom_5CCCD4
gText_Rom_5CCCD4: @ 0x085CCCD4
	.string "ポケモンずかん　{0xFD}{0x02}ひき$"
	.if (. - gText_Rom_5CCCD4) > 0xd
	.error "gText_Rom_5CCCD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCD4) < 0xd
	.space 0xd - (. - gText_Rom_5CCCD4)
	.endif
