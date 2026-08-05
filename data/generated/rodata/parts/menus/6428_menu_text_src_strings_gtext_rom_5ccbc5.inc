	@ src/strings.c:697 gText_BattleFactory (+1 aliases)
	.globl gText_Rom_5CCBC5
gText_Rom_5CCBC5: @ 0x085CCBC5
	.string "バトルファクトリー$"
	.if (. - gText_Rom_5CCBC5) > 0xa
	.error "gText_Rom_5CCBC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBC5) < 0xa
	.space 0xa - (. - gText_Rom_5CCBC5)
	.endif
