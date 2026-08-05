	@ src/option_menu.c:82 gText_BattleStyleSet
	.globl gText_Rom_5373A8
gText_Rom_5373A8: @ 0x085373A8
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}かちぬき$"
	.if (. - gText_Rom_5373A8) > 0xb
	.error "gText_Rom_5373A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5373A8) < 0xb
	.space 0xb - (. - gText_Rom_5373A8)
	.endif
