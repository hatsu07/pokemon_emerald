	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:463 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor7thOpponent
	.globl gText_Rom_2223D5
gText_Rom_2223D5: @ 0x082223D5
	.string "つぎは 7にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - gText_Rom_2223D5) > 0x1d
	.error "gText_Rom_2223D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2223D5) < 0x1d
	.space 0x1d - (. - gText_Rom_2223D5)
	.endif
