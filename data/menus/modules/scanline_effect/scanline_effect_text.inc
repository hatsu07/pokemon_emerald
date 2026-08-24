	@ src/main_menu.c:266 gText_MainMenuOption
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MainMenuOption_Copy_MainMenu
gText_MainMenuOption_Copy_MainMenu: @ 0x08537310
	.string "せっていを かえる{EOS}"
	.if (. - gText_MainMenuOption_Copy_MainMenu) != 0xa
	.error "gText_MainMenuOption_Copy_MainMenu must retain its original byte length"
	.endif
	@ asm/scanline_effect.s:2188 sub_080BA834 (+1 aliases)
	.globl gText_Rom_53731A
gText_Rom_53731A: @ 0x0853731A
	.string "はなしの　はやさ{EOS}"
	.if (. - gText_Rom_53731A) > 0x9
	.error "gText_Rom_53731A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_53731A) < 0x9
	.space 0x9 - (. - gText_Rom_53731A)
	.endif

	@ asm/scanline_effect.s:2188 sub_080BA834
	.globl gText_Rom_537323
gText_Rom_537323: @ 0x08537323
	.string "せんとうエフェクト{EOS}"
	.if (. - gText_Rom_537323) > 0xa
	.error "gText_Rom_537323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_537323) < 0xa
	.space 0xa - (. - gText_Rom_537323)
	.endif

	@ asm/scanline_effect.s:2188 sub_080BA834 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_53732D
gText_Rom_53732D: @ 0x0853732D
	.string "しあいの　ルール{EOS}"
	.if (. - gText_Rom_53732D) != 0x9
	.error "gText_Rom_53732D must retain its original byte length"
	.endif

	@ asm/scanline_effect.s:2188 sub_080BA834 (+1 aliases)
	.globl gText_Rom_537336
gText_Rom_537336: @ 0x08537336
	.string "サウンド{EOS}"
	.if (. - gText_Rom_537336) > 0x5
	.error "gText_Rom_537336 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_537336) < 0x5
	.space 0x5 - (. - gText_Rom_537336)
	.endif

	@ asm/scanline_effect.s:2188 sub_080BA834
	.globl gText_Rom_53733B
gText_Rom_53733B: @ 0x0853733B
	.string "ウインドウ{EOS}"
	.if (. - gText_Rom_53733B) > 0x6
	.error "gText_Rom_53733B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_53733B) < 0x6
	.space 0x6 - (. - gText_Rom_53733B)
	.endif

	@ asm/scanline_effect.s:2188 sub_080BA834 (+2 aliases)
	.globl gText_Rom_537341
gText_Rom_537341: @ 0x08537341
	.string "おわる{EOS}"
	.if (. - gText_Rom_537341) > 0x4
	.error "gText_Rom_537341 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_537341) < 0x4
	.space 0x4 - (. - gText_Rom_537341)
	.endif

	@ asm/scanline_effect.s:2188 sub_080BA834
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_537345
gText_Rom_537345: @ 0x08537345
	.string "ボタンの　モード{EOS}"
	.if (. - gText_Rom_537345) != 0x9
	.error "gText_Rom_537345 must retain its original byte length"
	.endif
