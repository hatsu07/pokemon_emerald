	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96E1
gText_Rom_5C96E1: @ 0x085C96E1
	.string "せんとう$"
	.if (. - gText_Rom_5C96E1) > 0x5
	.error "gText_Rom_5C96E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96E1) < 0x5
	.space 0x5 - (. - gText_Rom_5C96E1)
	.endif
