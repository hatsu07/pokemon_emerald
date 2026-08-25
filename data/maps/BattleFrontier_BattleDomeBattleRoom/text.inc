	.4byte gText_Rom_5ABD22
	.4byte gText_Rom_5ABD26
	.4byte gText_Rom_5ABD2A
	.4byte gText_Rom_5ABD33

	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:977 BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope (+1 aliases)
	.globl BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope_Copy_Rom_5ABD4C
BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope_Copy_Rom_5ABD4C: @ 0x085ABD4C
	.string "きたいの おおがた しんじん!\p{EOS}"
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope_Copy_Rom_5ABD4C) > 0x11
	.error "BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope_Copy_Rom_5ABD4C may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope_Copy_Rom_5ABD4C) < 0x11
	.space 0x11 - (. - BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope_Copy_Rom_5ABD4C)
	.endif

