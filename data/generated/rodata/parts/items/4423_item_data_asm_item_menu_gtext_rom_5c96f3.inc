	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96F3
gText_Rom_5C96F3: @ 0x085C96F3
	.string "パソコン$"
	.if (. - gText_Rom_5C96F3) > 0x5
	.error "gText_Rom_5C96F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96F3) < 0x5
	.space 0x5 - (. - gText_Rom_5C96F3)
	.endif
