	@ src/data/script_menu.h:771 script_menu_line_771
	.globl gText_Rom_5AC0C1
gText_Rom_5AC0C1: @ 0x085AC0C1
	.string "まけた！{EOS}"
	.if (. - gText_Rom_5AC0C1) > 0x5
	.error "gText_Rom_5AC0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AC0C1) < 0x5
	.space 0x5 - (. - gText_Rom_5AC0C1)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AC0C6: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AC0C6
gBattleMessageData_085AC0C6: @ 0x085AC0C6
	@ analyzed canonical ROM range 0x085AC0C6-0x085AC0DC
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x17 bytes=23
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0xFE, 0x14, 0x19, 0x00, 0x0C, 0x36, 0x03, 0x48, 0x16, 0x00
	.byte 0x1B, 0x07, 0x2C, 0x09, 0x10, 0xAB, 0xFF
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
