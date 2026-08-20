	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:487 BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved
	.globl gText_Rom_22247E
gText_Rom_22247E: @ 0x0822247E
	.string "ふぐあいに より\nきろく できませんでした!{EOS}"
	.if (. - gText_Rom_22247E) > 0x17
	.error "gText_Rom_22247E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22247E) < 0x17
	.space 0x17 - (. - gText_Rom_22247E)
	.endif
