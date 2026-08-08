	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:455 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor5thOpponent
	.globl gText_Rom_22239B
gText_Rom_22239B: @ 0x0822239B
	.string "つぎは 5にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - gText_Rom_22239B) > 0x1d
	.error "gText_Rom_22239B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22239B) < 0x1d
	.space 0x1d - (. - gText_Rom_22239B)
	.endif
