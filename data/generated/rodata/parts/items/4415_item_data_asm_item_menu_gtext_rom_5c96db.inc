	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96DB
gText_Rom_5C96DB: @ 0x085C96DB
	.string "フィールド$"
	.if (. - gText_Rom_5C96DB) > 0x6
	.error "gText_Rom_5C96DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96DB) < 0x6
	.space 0x6 - (. - gText_Rom_5C96DB)
	.endif
