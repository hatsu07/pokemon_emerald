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
