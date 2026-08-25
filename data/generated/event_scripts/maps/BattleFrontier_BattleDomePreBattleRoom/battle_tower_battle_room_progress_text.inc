	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:434 BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth
	.globl BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth
BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth: @ 0x0822230B
	.string "ポケモンの たいりょくを\nかいふくして さしあげます"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth) > 0x1b
	.error "BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth) < 0x1b
	.space 0x1b - (. - BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:439 BattleFrontier_BattleTowerBattleRoom_Text_ReadyForOpponent
	.globl BattleFrontier_BattleTowerBattleRoom_Text_ReadyForOpponent
BattleFrontier_BattleTowerBattleRoom_Text_ReadyForOpponent: @ 0x08222326
	.string "つぎは {STR_VAR_1}にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyForOpponent) > 0x1e
	.error "BattleFrontier_BattleTowerBattleRoom_Text_ReadyForOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyForOpponent) < 0x1e
	.space 0x1e - (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyForOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:443 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent
	.globl BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent: @ 0x08222344
	.string "つぎは 2にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent) > 0x1d
	.error "BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:447 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor3rdOpponent
	.globl BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor3rdOpponent
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor3rdOpponent: @ 0x08222361
	.string "つぎは 3にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor3rdOpponent) > 0x1d
	.error "BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor3rdOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor3rdOpponent) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor3rdOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:451 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent
	.globl BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent: @ 0x0822237E
	.string "つぎは 4にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent) > 0x1d
	.error "BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:455 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor5thOpponent
	.globl BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor5thOpponent
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor5thOpponent: @ 0x0822239B
	.string "つぎは 5にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor5thOpponent) > 0x1d
	.error "BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor5thOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor5thOpponent) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor5thOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:459 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor6thOpponent
	.globl BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor6thOpponent
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor6thOpponent: @ 0x082223B8
	.string "つぎは 6にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor6thOpponent) > 0x1d
	.error "BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor6thOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor6thOpponent) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor6thOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:463 BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor7thOpponent
	.globl BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor7thOpponent
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor7thOpponent: @ 0x082223D5
	.string "つぎは 7にんめの あいてです\nじゅんびは いいですか?"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor7thOpponent) > 0x1d
	.error "BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor7thOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor7thOpponent) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor7thOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:364 BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch (+2 aliases)
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch_Copy_Rom_2223F2
BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch_Copy_Rom_2223F2: @ 0x082223F2
	.string "さきほどの たたかいを\nフロンティアパスに きろく しますか?"
	.byte EOS
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch_Copy_Rom_2223F2) > 0x20
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch_Copy_Rom_2223F2 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch_Copy_Rom_2223F2) < 0x20
	.space 0x20 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch_Copy_Rom_2223F2)
	.endif

