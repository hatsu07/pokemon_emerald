	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:459 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor6thOpponent
	.globl gText_Rom_2223B8
gText_Rom_2223B8: @ 0x082223B8
	.string "つぎは 6にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - gText_Rom_2223B8) > 0x1d
	.error "gText_Rom_2223B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2223B8) < 0x1d
	.space 0x1d - (. - gText_Rom_2223B8)
	.endif
