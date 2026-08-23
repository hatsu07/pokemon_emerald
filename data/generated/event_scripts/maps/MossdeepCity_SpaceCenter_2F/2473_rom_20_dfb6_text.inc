	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:423 MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome
	.globl gText_Rom_20DFB6
gText_Rom_20DFB6: @ 0x0820DFB6
	.string "ダイゴ『ふう あぶない ところ だった\n{PLAYER}{KUN} ありがとう\pちからを かしてくれた おれいに\nいいものを あげるから\lあとで いえまで きておくれ\pボクのいえは カナズミ じゃないよ\nこのしまに あるんだ{EOS}"
	.if (. - gText_Rom_20DFB6) > 0x68
	.error "gText_Rom_20DFB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DFB6) < 0x68
	.space 0x68 - (. - gText_Rom_20DFB6)
	.endif
	@ analyzed canonical ROM range 0x0820E01E-0x0820E05C
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_MossdeepCity_GameCorner_1F_OnFrame_OnWarpIntoMap_OnLoad: @ 0x0820E01E
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_MossdeepCity_GameCorner_1F_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_MossdeepCity_GameCorner_1F_OnWarpIntoMap
	.byte 0x01
	.4byte CableClub_EventScript_MysteryGiftMan + 0xBB
	.byte 0
gMapScriptConditionTable_MossdeepCity_GameCorner_1F_OnWarpIntoMap: @ 0x0820E02E
	@ ANALYSIS: SEMANTIC_NUMERIC_MAP_SCRIPT_TABLE
	@ Map-script dispatch table; numeric fields encode script type/condition and target pointer.
	@ conditional map script table
	.2byte 0x4087, 0x0008
	.4byte CableClub_EventScript_MysteryGiftMan + 0xAB
	.2byte 0
gMapScriptConditionTable_MossdeepCity_GameCorner_1F_OnFrame: @ 0x0820E038
	@ conditional map script table
	.2byte 0x4087, 0x0008
	.4byte CableClub_EventScript_MysteryGiftMan + 0x19A
	.2byte 0
.globl EventScript_JP_0820E042
EventScript_JP_0820E042: @ 0x0820E042
	lock
	faceplayer
	goto 0x08247913
	.byte 0x6C, 0x02
.globl EventScript_JP_0820E04B
EventScript_JP_0820E04B: @ 0x0820E04B
	lock
	faceplayer
	goto 0x08247970
	.byte 0x6C, 0x02
.globl EventScript_JP_0820E054
EventScript_JP_0820E054: @ 0x0820E054
	loadword 0x00, gText_Rom_20E0BA
	callstd 0x03
	end
