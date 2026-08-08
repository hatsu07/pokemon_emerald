	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1015 BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion (+1 aliases)
	.globl gText_Rom_229756
gText_Rom_229756: @ 0x08229756
	.string "むてきの チャンピオン!\p$"
	.if (. - gText_Rom_229756) > 0xe
	.error "gText_Rom_229756 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229756) < 0xe
	.space 0xe - (. - gText_Rom_229756)
	.endif
