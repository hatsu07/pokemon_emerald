	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:343 BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2
	.globl gText_Rom_22867B
gText_Rom_22867B: @ 0x0822867B
	.string "げんざい トーナメントは\n2かいせん です!{EOS}"
	.if (. - gText_Rom_22867B) > 0x17
	.error "gText_Rom_22867B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22867B) < 0x17
	.space 0x17 - (. - gText_Rom_22867B)
	.endif
