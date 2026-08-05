	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1038 BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned
	.globl gText_Rom_2297CD
gText_Rom_2297CD: @ 0x082297CD
	.string "あの つよさが もどってきました!\p$"
	.if (. - gText_Rom_2297CD) > 0x13
	.error "gText_Rom_2297CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2297CD) < 0x13
	.space 0x13 - (. - gText_Rom_2297CD)
	.endif
