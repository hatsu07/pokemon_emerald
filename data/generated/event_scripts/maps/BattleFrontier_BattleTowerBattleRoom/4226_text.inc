	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:447 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor3rdOpponent
	.globl gText_Rom_222361
gText_Rom_222361: @ 0x08222361
	.string "つぎは 3にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - gText_Rom_222361) > 0x1d
	.error "gText_Rom_222361 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222361) < 0x1d
	.space 0x1d - (. - gText_Rom_222361)
	.endif
