	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96E6
gText_Rom_5C96E6: @ 0x085C96E6
	.string "ポケモンリスト$"
	.if (. - gText_Rom_5C96E6) > 0x8
	.error "gText_Rom_5C96E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96E6) < 0x8
	.space 0x8 - (. - gText_Rom_5C96E6)
	.endif
