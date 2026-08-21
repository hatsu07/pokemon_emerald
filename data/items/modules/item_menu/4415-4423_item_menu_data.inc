	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96DB
gText_Rom_5C96DB: @ 0x085C96DB
	.string "フィールド{EOS}"
	.if (. - gText_Rom_5C96DB) > 0x6
	.error "gText_Rom_5C96DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96DB) < 0x6
	.space 0x6 - (. - gText_Rom_5C96DB)
	.endif

	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96E1
gText_Rom_5C96E1: @ 0x085C96E1
	.string "せんとう{EOS}"
	.if (. - gText_Rom_5C96E1) > 0x5
	.error "gText_Rom_5C96E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96E1) < 0x5
	.space 0x5 - (. - gText_Rom_5C96E1)
	.endif

	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96E6
gText_Rom_5C96E6: @ 0x085C96E6
	.string "ポケモンリスト{EOS}"
	.if (. - gText_Rom_5C96E6) > 0x8
	.error "gText_Rom_5C96E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96E6) < 0x8
	.space 0x8 - (. - gText_Rom_5C96E6)
	.endif

	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+1 aliases)
	.globl gText_Rom_5C96EE
gText_Rom_5C96EE: @ 0x085C96EE
	.string "ショップ{EOS}"
	.if (. - gText_Rom_5C96EE) > 0x5
	.error "gText_Rom_5C96EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96EE) < 0x5
	.space 0x5 - (. - gText_Rom_5C96EE)
	.endif

	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96F3
gText_Rom_5C96F3: @ 0x085C96F3
	.string "パソコン{EOS}"
	.if (. - gText_Rom_5C96F3) > 0x5
	.error "gText_Rom_5C96F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96F3) < 0x5
	.space 0x5 - (. - gText_Rom_5C96F3)
	.endif
