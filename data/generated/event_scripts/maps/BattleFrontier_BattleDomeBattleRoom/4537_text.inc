	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:977 BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope (+1 aliases)
	.globl gText_Rom_229694
gText_Rom_229694: @ 0x08229694
	.string "きたいの おおがた しんじん!\p$"
	.if (. - gText_Rom_229694) > 0x11
	.error "gText_Rom_229694 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229694) < 0x11
	.space 0x11 - (. - gText_Rom_229694)
	.endif
