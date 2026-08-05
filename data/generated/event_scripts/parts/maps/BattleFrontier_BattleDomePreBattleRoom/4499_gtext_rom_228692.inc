	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:346 BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals
	.globl gText_Rom_228692
gText_Rom_228692: @ 0x08228692
	.string "げんざい トーナメントは\nじゅんけっしょう です!$"
	.if (. - gText_Rom_228692) > 0x1a
	.error "gText_Rom_228692 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_228692) < 0x1a
	.space 0x1a - (. - gText_Rom_228692)
	.endif
