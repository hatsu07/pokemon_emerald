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
	@ pret/pokeemerald-jp direct xref for 0x085ABC82: battle_bg.s: sub_08035AA0
	.globl gBattleBgData_085ABC82
gBattleBgData_085ABC82:
	.globl gUnknown_85ABC82
gUnknown_85ABC82: @ 0x085ABC82
	@ analyzed canonical ROM range 0x085ABC82-0x085ABC87
sAnalyzedData_085ABC82: @ 0x085ABC82
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFC, 0x02, 0x00, 0x06, 0x11, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABC88: battle_bg.s: sub_08035AA0
	.globl gBattleBgData_085ABC88
gBattleBgData_085ABC88:
	.globl gUnknown_85ABC88
gUnknown_85ABC88: @ 0x085ABC88
	@ analyzed canonical ROM range 0x085ABC88-0x085ABC8D
sAnalyzedData_085ABC88: @ 0x085ABC88
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFC, 0x02, 0x00, 0x1F, 0x09, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABC8E: battle_bg.s: sub_08035AA0
	.globl gBattleBgData_085ABC8E
gBattleBgData_085ABC8E:
	.globl gUnknown_85ABC8E
gUnknown_85ABC8E: @ 0x085ABC8E
	@ analyzed canonical ROM range 0x085ABC8E-0x085ABC95
sAnalyzedData_085ABC8E: @ 0x085ABC8E
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFC, 0x02, 0x00, 0x1B, 0x07, 0x2C, 0x09, 0xFF
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
	@ pret/pokeemerald-jp direct xref for 0x085ABC9A: battle_message.s: BattleStringExpandPlaceholders, BufferStringBattle
	.globl gBattleMessageData_085ABC9A
gBattleMessageData_085ABC9A:
	.globl gUnknown_85ABC9A
gUnknown_85ABC9A: @ 0x085ABC9A
	@ analyzed canonical ROM range 0x085ABC9A-0x085ABD17
sAnalyzedData_085ABC9A: @ 0x085ABC9A
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x69, 0xAE, 0x6F, 0x79, 0x2C, 0x3C, 0xFF, 0x06, 0x08, 0x14, 0x03, 0x2C, 0x3C, 0xFF, 0x1B, 0x0A
	.byte 0x03, 0x2C, 0x3C, 0xFF, 0xFF, 0x45, 0x08, 0x2C, 0x3C, 0xFF, 0xFF, 0xFF, 0x3D, 0x22, 0x2E, 0x2C
	.byte 0x3C, 0xFF, 0xFF, 0x02, 0x2C, 0x2C, 0x3C, 0xFF, 0xFF, 0xFF, 0x21, 0x0C, 0x2C, 0x3C, 0xFF, 0xFF
	.byte 0xFF, 0x8B, 0xAE, 0x5D, 0x64, 0x2C, 0x3C, 0xFF, 0x1A, 0x37, 0x18, 0x2C, 0x3C, 0xFF, 0xFF, 0x1A
	.byte 0x13, 0x15, 0x2C, 0x3C, 0xFF, 0xFF, 0x1E, 0x19, 0x05, 0x2C, 0x3C, 0xFF, 0xFF, 0x20, 0x3E, 0x2C
	.byte 0x3C, 0xFF, 0xFF, 0xFF, 0x08, 0x0B, 0x2C, 0x3C, 0xFF, 0xFF, 0xFF, 0x44, 0x2E, 0x07, 0x2C, 0x3C
	.byte 0xFF, 0xFF, 0x54, 0x5D, 0x9B, 0xAE, 0x2C, 0x3C, 0xFF, 0x0A, 0x05, 0x28, 0x2C, 0x3C, 0xFF, 0xFF
	.byte 0x95, 0x77, 0x8B, 0x7E, 0x2C, 0x3C, 0xFF, 0x01, 0x08, 0x2C, 0x3C, 0xFF, 0xFF, 0xFF
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
