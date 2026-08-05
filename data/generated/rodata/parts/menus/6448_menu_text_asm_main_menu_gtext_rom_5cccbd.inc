	@ asm/main_menu.s:4999 MainMenu_FormatSavegamePlayer
	.globl gText_Rom_5CCCBD
gText_Rom_5CCCBD: @ 0x085CCCBD
	.string "しゅじんこう　{0xFD}{0x02}$"
	.if (. - gText_Rom_5CCCBD) > 0xa
	.error "gText_Rom_5CCCBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCBD) < 0xa
	.space 0xa - (. - gText_Rom_5CCCBD)
	.endif
