
	@ asm/main_menu.s:4999 MainMenu_FormatSavegamePlayer
	.globl gText_Rom_5CCCBD
gText_Rom_5CCCBD: @ 0x085CCCBD
	.string "しゅじんこう　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_5CCCBD) > 0xa
	.error "gText_Rom_5CCCBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCBD) < 0xa
	.space 0xa - (. - gText_Rom_5CCCBD)
	.endif

	@ asm/main_menu.s:5043 MainMenu_FormatSavegameTime
	.globl gText_Rom_5CCCC7
gText_Rom_5CCCC7: @ 0x085CCCC7
	.string "プレイじかん　{0xFD}{0x02}:{0xFD}{0x03}{EOS}"
	.if (. - gText_Rom_5CCCC7) > 0xd
	.error "gText_Rom_5CCCC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCC7) < 0xd
	.space 0xd - (. - gText_Rom_5CCCC7)
	.endif

	@ asm/main_menu.s:5099 MainMenu_FormatSavegamePokedex
	.globl gText_Rom_5CCCD4
gText_Rom_5CCCD4: @ 0x085CCCD4
	.string "ポケモンずかん　{0xFD}{0x02}ひき{EOS}"
	.if (. - gText_Rom_5CCCD4) > 0xd
	.error "gText_Rom_5CCCD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCD4) < 0xd
	.space 0xd - (. - gText_Rom_5CCCD4)
	.endif

	@ asm/main_menu.s:5152 MainMenu_FormatSavegameBadges
	.globl gText_Rom_5CCCE1
gText_Rom_5CCCE1: @ 0x085CCCE1
	.string "もっているバッジ　{0xFD}{0x02}こ{EOS}"
	.if (. - gText_Rom_5CCCE1) > 0xd
	.error "gText_Rom_5CCCE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCE1) < 0xd
	.space 0xd - (. - gText_Rom_5CCCE1)
	.endif
