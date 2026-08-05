	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+1 aliases)
	.globl gText_Rom_5C96EE
gText_Rom_5C96EE: @ 0x085C96EE
	.string "ショップ$"
	.if (. - gText_Rom_5C96EE) > 0x5
	.error "gText_Rom_5C96EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96EE) < 0x5
	.space 0x5 - (. - gText_Rom_5C96EE)
	.endif
