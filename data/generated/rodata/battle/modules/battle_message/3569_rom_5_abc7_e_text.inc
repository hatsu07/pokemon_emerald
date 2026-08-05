	@ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
	.globl gText_Rom_5ABC7E
gText_Rom_5ABC7E: @ 0x085ABC7E
	.string "ミツル$"
	.if (. - gText_Rom_5ABC7E) > 0x4
	.error "gText_Rom_5ABC7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC7E) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC7E)
	.endif
