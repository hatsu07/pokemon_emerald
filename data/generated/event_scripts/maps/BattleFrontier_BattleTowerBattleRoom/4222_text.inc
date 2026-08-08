	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:439 BattleFrontier_BattleTowerBattleRoom_Text_ReadyForOpponent
	.globl gText_Rom_222326
gText_Rom_222326: @ 0x08222326
	.string "つぎは {STR_VAR_1}にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - gText_Rom_222326) > 0x1e
	.error "gText_Rom_222326 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222326) < 0x1e
	.space 0x1e - (. - gText_Rom_222326)
	.endif
