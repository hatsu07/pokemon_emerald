	@ src/strings.c:698 gText_BattleArena (+1 aliases)
	.globl gText_Rom_5CCBBD
gText_Rom_5CCBBD: @ 0x085CCBBD
	.string "バトルアリーナ$"
	.if (. - gText_Rom_5CCBBD) > 0x8
	.error "gText_Rom_5CCBBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBBD) < 0x8
	.space 0x8 - (. - gText_Rom_5CCBBD)
	.endif
