	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1015 BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion (+1 aliases)
	.globl gText_Rom_5ABD8C
gText_Rom_5ABD8C: @ 0x085ABD8C
	.string "むてきの チャンピオン!\p$"
	.if (. - gText_Rom_5ABD8C) > 0xe
	.error "gText_Rom_5ABD8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD8C) < 0xe
	.space 0xe - (. - gText_Rom_5ABD8C)
	.endif
	.globl gUnknown_85ABD9A
gUnknown_85ABD9A: @ 0x085ABD9A
	@ Replaced baserom.gba range: offset=0x5ABD9A, size=0x3
	.byte 0xFD, 0x05, 0xFF
	.globl gUnknown_85ABD9D
gUnknown_85ABD9D: @ 0x085ABD9D
	@ Replaced baserom.gba range: offset=0x5ABD9D, size=0x3
	.byte 0xEA, 0xE7, 0xFF
	.globl gUnknown_85ABDA0
gUnknown_85ABDA0: @ 0x085ABDA0
	@ Replaced baserom.gba range: offset=0x5ABDA0, size=0x3
	.byte 0xFD, 0x06, 0xFF
	.globl gUnknown_85ABDA3
gUnknown_85ABDA3: @ 0x085ABDA3

