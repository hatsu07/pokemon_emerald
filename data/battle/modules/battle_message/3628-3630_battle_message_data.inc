	@ src/battle_message.c:1554 gText_RecordBattleToPass
	.globl gText_RecordBattleToPass
gText_RecordBattleToPass: @ 0x085AC0DD
	.string "いまの たたかいを フロンティアパスに\nきろく しますか?{EOS}"
	.if (. - gText_RecordBattleToPass) > 0x1e
	.error "gText_RecordBattleToPass may not grow beyond its original slot"
	.endif
	.if (. - gText_RecordBattleToPass) < 0x1e
	.space 0x1e - (. - gText_RecordBattleToPass)
	.endif

	@ src/battle_message.c:1555 gText_BattleRecordedOnPass
	.globl gText_BattleRecordedOnPass
gText_BattleRecordedOnPass: @ 0x085AC0FB
	.string "{B_PLAYER_NAME}の たたかいが\nフロンティアパスに きろく された!{EOS}"
	.if (. - gText_BattleRecordedOnPass) > 0x1d
	.error "gText_BattleRecordedOnPass may not grow beyond its original slot"
	.endif
	.if (. - gText_BattleRecordedOnPass) < 0x1d
	.space 0x1d - (. - gText_BattleRecordedOnPass)
	.endif
