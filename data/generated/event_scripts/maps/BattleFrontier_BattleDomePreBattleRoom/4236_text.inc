	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:434 BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth
	.globl gText_Rom_22230B
gText_Rom_22230B: @ 0x0822230B
	.string "ポケモンの たいりょくを\nかいふくして さしあげます"
	.byte EOS
	.if (. - gText_Rom_22230B) > 0x1b
	.error "gText_Rom_22230B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22230B) < 0x1b
	.space 0x1b - (. - gText_Rom_22230B)
	.endif
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
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:443 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent
	.globl gText_Rom_222344
gText_Rom_222344: @ 0x08222344
	.string "つぎは 2にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - gText_Rom_222344) > 0x1d
	.error "gText_Rom_222344 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222344) < 0x1d
	.space 0x1d - (. - gText_Rom_222344)
	.endif
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
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:451 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent
	.globl gText_Rom_22237E
gText_Rom_22237E: @ 0x0822237E
	.string "つぎは 4にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - gText_Rom_22237E) > 0x1d
	.error "gText_Rom_22237E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22237E) < 0x1d
	.space 0x1d - (. - gText_Rom_22237E)
	.endif
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
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:364 BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch (+2 aliases)
	.globl gText_Rom_2223F2
gText_Rom_2223F2: @ 0x082223F2
	.string "さきほどの たたかいを\nフロンティアパスに きろく しますか?"
	.byte EOS
	.if (. - gText_Rom_2223F2) > 0x20
	.error "gText_Rom_2223F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2223F2) < 0x20
	.space 0x20 - (. - gText_Rom_2223F2)
	.endif

