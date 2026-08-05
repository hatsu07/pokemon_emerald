	@ asm/main_menu.s:5152 MainMenu_FormatSavegameBadges
	.globl gText_Rom_5CCCE1
gText_Rom_5CCCE1: @ 0x085CCCE1
	.string "もっているバッジ　{0xFD}{0x02}こ$"
	.if (. - gText_Rom_5CCCE1) > 0xd
	.error "gText_Rom_5CCCE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCE1) < 0xd
	.space 0xd - (. - gText_Rom_5CCCE1)
	.endif
