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
	.incbin "baserom.gba", 0x5abd9a, 0x3
	.globl gUnknown_85ABD9D
gUnknown_85ABD9D: @ 0x085ABD9D
	.incbin "baserom.gba", 0x5abd9d, 0x3
	.globl gUnknown_85ABDA0
gUnknown_85ABDA0: @ 0x085ABDA0
	.incbin "baserom.gba", 0x5abda0, 0x3
	.globl gUnknown_85ABDA3
gUnknown_85ABDA3: @ 0x085ABDA3

