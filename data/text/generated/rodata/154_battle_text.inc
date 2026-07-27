	@ src/battle_message.c:1491 gText_BadEgg
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABC78
gText_Rom_5ABC78: @ 0x085ABC78
	.string "ダメタマゴ$"
	.if (. - gText_Rom_5ABC78) != 0x6
	.error "gText_Rom_5ABC78 must retain its original byte length"
	.endif
	.globl gText_Rom_5ABC7A
	.set gText_Rom_5ABC7A, gText_Rom_5ABC78 + 0x2
	.globl gUnknown_85ABC7E
gUnknown_85ABC7E: @ 0x085ABC7E

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
	.globl gUnknown_85ABC82
gUnknown_85ABC82: @ 0x085ABC82
	.incbin "baserom.gba", 0x5abc82, 0x6
	.globl gUnknown_85ABC88
gUnknown_85ABC88: @ 0x085ABC88
	.incbin "baserom.gba", 0x5abc88, 0x6
	.globl gUnknown_85ABC8E
gUnknown_85ABC8E: @ 0x085ABC8E
	.incbin "baserom.gba", 0x5abc8e, 0x8
	.globl gUnknown_85ABC96
gUnknown_85ABC96: @ 0x085ABC96

	@ asm/battle_message.s:2911 ChooseMoveUsedParticle
	.globl gText_Rom_5ABC96
gText_Rom_5ABC96: @ 0x085ABC96
	.string "は$"
	.if (. - gText_Rom_5ABC96) > 0x2
	.error "gText_Rom_5ABC96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC96) < 0x2
	.space 0x2 - (. - gText_Rom_5ABC96)
	.endif
	.globl gUnknown_85ABC98
gUnknown_85ABC98: @ 0x085ABC98

	@ asm/battle_message.s:2922 ChooseMoveUsedParticle
	.globl gText_Rom_5ABC98
gText_Rom_5ABC98: @ 0x085ABC98
	.string "の$"
	.if (. - gText_Rom_5ABC98) > 0x2
	.error "gText_Rom_5ABC98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC98) < 0x2
	.space 0x2 - (. - gText_Rom_5ABC98)
	.endif
	.globl gUnknown_85ABC9A
gUnknown_85ABC9A: @ 0x085ABC9A
	.incbin "baserom.gba", 0x5abc9a, 0x7e
	.globl gUnknown_85ABD18
gUnknown_85ABD18: @ 0x085ABD18

	@ src/battle_message.c:1498 gText_BattleTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABD18
gText_Rom_5ABD18: @ 0x085ABD18
	.string "バトルトーナメント$"
	.if (. - gText_Rom_5ABD18) != 0xa
	.error "gText_Rom_5ABD18 must retain its original byte length"
	.endif
	.globl gText_Rom_5ABD1B
	.set gText_Rom_5ABD1B, gText_Rom_5ABD18 + 0x3

