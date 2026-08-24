	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1170 BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker
	.globl gText_Rom_229CE6
gText_Rom_229CE6: @ 0x08229CE6
	.string "しんぱんいん より\nはんていの けっかが でました!\pしょうしゃは\nなんと! なんと! なんと!\lわれらの スーパースター! ヒース です!\pおめでとう! そして ありがとう!!\nわれらの ドームスーパースター ヒース!!{EOS}"
	.if (. - gText_Rom_229CE6) > 0x70
	.error "gText_Rom_229CE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229CE6) < 0x70
	.space 0x70 - (. - gText_Rom_229CE6)
	.endif
	@ analyzed canonical ROM range 0x08229D56-0x0822A332
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_BattleFrontier_BattlePalaceLobby_OnFrame_OnWarpIntoMap: @ 0x08229D56
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattlePalaceLobby_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_BattleFrontier_BattlePalaceLobby_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_BattleFrontier_BattlePalaceLobby_OnWarpIntoMap: @ 0x08229D61
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08229D6B
	.2byte 0
EventScript_JP_08229D6B: @ 0x08229D6B
	setvar 0x4001, 0x0001
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_BattleFrontier_BattlePalaceLobby_OnFrame: @ 0x08229D75
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08229D9F
	.2byte 0x4000, 0x0001
	.4byte EventScript_JP_08229DA8
	.2byte 0x4000, 0x0002
	.4byte EventScript_JP_08229EE0
	.2byte 0x4000, 0x0003
	.4byte EventScript_JP_08229DEF
	.2byte 0x4000, 0x0004
	.4byte EventScript_JP_08229E4B
	.2byte 0
EventScript_JP_08229D9F: @ 0x08229D9F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	end
EventScript_JP_08229DA8: @ 0x08229DA8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_22A7B5
	callstd 0x04
	closemessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	special CallBattlePalaceFunction
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	setvar 0x8006, 0x0000
	@ event command: special
	special CallBattlePalaceFunction
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_08229DEF: @ 0x08229DEF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x8004, 0x000A
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08229E10
	loadword 0x00, gText_Rom_22A6FB
	callstd 0x04
	goto EventScript_JP_08229E18
EventScript_JP_08229E10: @ 0x08229E10
	loadword 0x00, gText_Rom_22ABCE
	callstd 0x04
EventScript_JP_08229E18: @ 0x08229E18
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22ABEF
	callstd 0x04
	setvar 0x8004, 0x000B
	@ event command: special
	special CallFrontierUtilFunc
	loadword 0x00, gText_Rom_22189E
	callstd 0x09
	message gText_Rom_22A72D
	waitmessage
	call EventScript_JP_08229E79
	loadword 0x00, gText_Rom_22A4E9
	callstd 0x04
	closemessage
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_08229E4B: @ 0x08229E4B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	message gText_Rom_22A6CC
	waitmessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	setvar 0x8006, 0x0000
	@ event command: special
	special CallBattlePalaceFunction
	call EventScript_JP_08229E79
	loadword 0x00, gText_Rom_22A4E9
	callstd 0x04
	closemessage
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_08229E79: @ 0x08229E79
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0008
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special LoadPlayerParty
	@ event command: special
	special HealPlayerParty
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0000
	@ event command: special
	special CallBattlePalaceFunction
	playse 0x0037
	waitse
	call 0x0821F921
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08229EDF
	message gText_Rom_22AC13
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08229EDF
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08229EDA
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08229EDF
EventScript_JP_08229EDA: @ 0x08229EDA
	call 0x0821F8F5
EventScript_JP_08229EDF: @ 0x08229EDF
	return
EventScript_JP_08229EE0: @ 0x08229EE0
	lockall
	loadword 0x00, gText_Rom_22A790
	callstd 0x04
	message gText_Rom_22A79A
	waitmessage
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0001
	@ event command: special
	special CallBattlePalaceFunction
	playse 0x0037
	waitse
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0003
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x4000, 0x00FF
	goto EventScript_JP_0822A0CB
.globl EventScript_JP_08229F1C
EventScript_JP_08229F1C: @ 0x08229F1C
	lock
	faceplayer
	setvar 0x40CF, 0x0002
	setvar 0x40CE, 0x0000
	goto EventScript_JP_08229F40
	.byte 0x02
.globl EventScript_JP_08229F2E
EventScript_JP_08229F2E: @ 0x08229F2E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x40CF, 0x0002
	setvar 0x40CE, 0x0001
	goto EventScript_JP_08229F40
	.byte 0x02
EventScript_JP_08229F40: @ 0x08229F40
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0000
	@ event command: special
	special CallBattlePalaceFunction
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_08229DEF
	@ event command: special
	special SavePlayerParty
	compare_var_to_value 0x40CE, 0x0000
	call_if 0x01, EventScript_JP_0822A176
	compare_var_to_value 0x40CE, 0x0001
	call_if 0x01, EventScript_JP_0822A17F
EventScript_JP_08229F71: @ 0x08229F71
	compare_var_to_value 0x40CE, 0x0000
	call_if 0x01, EventScript_JP_0822A188
	compare_var_to_value 0x40CE, 0x0001
	call_if 0x01, EventScript_JP_0822A18E
	waitmessage
	multichoice 0x11, 0x06, 0x17, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08229FBE
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822A0F8
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822A16C
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822A16C
EventScript_JP_08229FBE: @ 0x08229FBE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_22A50A
	waitmessage
	multichoice 0x11, 0x06, 0x18, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822A16C
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822A16C
	setvar 0x8004, 0x000F
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x8004, 0x0001
	goto_if 0x01, EventScript_JP_0822A11D
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	copyvar 0x8006, 0x800D
	@ event command: special
	special CallFrontierUtilFunc
	loadword 0x00, gText_Rom_22A67F
	callstd 0x04
	fadescreen 0x01
	call 0x082202F8
	copyvar 0x8004, 0x800D
	setvar 0x8005, 0x0003
	@ event command: special
	special ChoosePartyForBattleFrontier
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822A169
	loadword 0x00, gText_Rom_22A69B
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822A169
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822A05F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822A169
EventScript_JP_0822A05F: @ 0x0822A05F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4000, 0x0000
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0000
	@ event command: special
	special CallBattlePalaceFunction
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	setvar 0x8006, 0x0001
	@ event command: special
	special CallBattlePalaceFunction
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0001
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0003
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special LoadPlayerParty
	closemessage
	delay 0x0002
	call 0x082423E9
	setvar 0x4000, 0x00FF
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822A152
EventScript_JP_0822A0CB: @ 0x0822A0CB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special SavePlayerParty
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	loadword 0x00, gText_Rom_22A6BB
	callstd 0x04
	closemessage
	call EventScript_JP_0822A194
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR, 0xFF, 0x0008, 0x000D
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_0822A0F8: @ 0x0822A0F8
	compare_var_to_value 0x40CE, 0x0001
	goto_if 0x01, EventScript_JP_0822A110
	loadword 0x00, gText_Rom_22A391
	callstd 0x04
	goto EventScript_JP_08229F71
EventScript_JP_0822A110: @ 0x0822A110
	loadword 0x00, gText_Rom_22AA78
	callstd 0x04
	goto EventScript_JP_08229F71
EventScript_JP_0822A11D: @ 0x0822A11D
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822A138
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822A145
EventScript_JP_0822A138: @ 0x0822A138
	loadword 0x00, gText_Rom_22A534
	callstd 0x04
	goto EventScript_JP_0822A174
EventScript_JP_0822A145: @ 0x0822A145
	loadword 0x00, gText_Rom_22A5DF
	callstd 0x04
	goto EventScript_JP_0822A174
EventScript_JP_0822A152: @ 0x0822A152
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	goto EventScript_JP_0822A16C
EventScript_JP_0822A169: @ 0x0822A169
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special LoadPlayerParty
EventScript_JP_0822A16C: @ 0x0822A16C
	loadword 0x00, gText_Rom_22A4E9
	callstd 0x04
EventScript_JP_0822A174: @ 0x0822A174
	release
	end
EventScript_JP_0822A176: @ 0x0822A176
	loadword 0x00, gText_Rom_22A333
	callstd 0x04
	return
EventScript_JP_0822A17F: @ 0x0822A17F
	loadword 0x00, gText_Rom_22AA1D
	callstd 0x04
	return
EventScript_JP_0822A188: @ 0x0822A188
	message gText_Rom_22A379
	return
EventScript_JP_0822A18E: @ 0x0822A18E
	message gText_Rom_22AA61
	return
EventScript_JP_0822A194: @ 0x0822A194
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x40CE, 0x0000
	call_if 0x01, EventScript_JP_0822A1FB
	compare_var_to_value 0x40CE, 0x0001
	call_if 0x01, EventScript_JP_0822A201
	@ event command: applymovement
	applymovement 0x800F, BattleFrontier_BattleDomeBattleRoom_Movement_WalkUp
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomeBattleRoom_Movement_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x40CE, 0x0000
	call_if 0x01, EventScript_JP_0822A207
	compare_var_to_value 0x40CE, 0x0001
	call_if 0x01, EventScript_JP_0822A20D
	waitdooranim
	@ event command: applymovement
	applymovement 0x800F, BattleFrontier_BattleDomeBattleRoom_Movement_WalkUp_SetInvisible
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomeBattleRoom_Movement_WalkUpX2_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x40CE, 0x0000
	call_if 0x01, EventScript_JP_0822A213
	compare_var_to_value 0x40CE, 0x0001
	call_if 0x01, EventScript_JP_0822A219
	waitdooranim
	return
EventScript_JP_0822A1FB: @ 0x0822A1FB
	setvar 0x800F, 0x0001
	return
EventScript_JP_0822A201: @ 0x0822A201
	setvar 0x800F, 0x0006
	return
EventScript_JP_0822A207: @ 0x0822A207
	opendoor 0x0005, 0x0004
	return
EventScript_JP_0822A20D: @ 0x0822A20D
	opendoor 0x0013, 0x0004
	return
EventScript_JP_0822A213: @ 0x0822A213
	closedoor 0x0005, 0x0004
	return
EventScript_JP_0822A219: @ 0x0822A219
	closedoor 0x0013, 0x0004
	return
BattleFrontier_BattleDomeBattleRoom_Movement_WalkUp: @ 0x0822A21F
	@ object movement sequence
	walk_up
	step_end
BattleFrontier_BattleDomeBattleRoom_Movement_WalkUp_SetInvisible: @ 0x0822A221
	@ object movement sequence
	walk_up
	set_invisible
	step_end
BattleFrontier_BattleDomeBattleRoom_Movement_WalkUpX2_SetInvisible: @ 0x0822A224
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
.globl EventScript_JP_0822A228
EventScript_JP_0822A228: @ 0x0822A228
	lockall
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0002
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	waitbuttonpress
	@ event command: special
	special RemoveRecordsWindow
	releaseall
	end
.globl EventScript_JP_0822A241
EventScript_JP_0822A241: @ 0x0822A241
	lockall
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0002
	setvar 0x8006, 0x0001
	@ event command: special
	special CallFrontierUtilFunc
	waitbuttonpress
	@ event command: special
	special RemoveRecordsWindow
	releaseall
	end
.globl EventScript_JP_0822A25A
EventScript_JP_0822A25A: @ 0x0822A25A
	loadword 0x00, gText_Rom_22A80A
	callstd 0x02
	end
.globl EventScript_JP_0822A263
EventScript_JP_0822A263: @ 0x0822A263
	loadword 0x00, gText_Rom_22A8D9
	callstd 0x02
	end
.globl EventScript_JP_0822A26C
EventScript_JP_0822A26C: @ 0x0822A26C
	loadword 0x00, gText_Rom_22A977
	callstd 0x02
	end
.globl EventScript_JP_0822A275
EventScript_JP_0822A275: @ 0x0822A275
	loadword 0x00, gText_Rom_22A9D6
	callstd 0x02
	end
.globl EventScript_JP_0822A27E
EventScript_JP_0822A27E: @ 0x0822A27E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_22AC3F
	callstd 0x04
	goto EventScript_JP_0822A28D
	.byte 0x02
EventScript_JP_0822A28D: @ 0x0822A28D
	message gText_Rom_22AC54
	waitmessage
	multichoice 0x10, 0x00, 0x64, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822A2EB
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822A2F9
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822A307
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0822A315
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_0822A323
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_0822A331
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822A331
	end
EventScript_JP_0822A2EB: @ 0x0822A2EB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22AC64
	callstd 0x04
	goto EventScript_JP_0822A28D
	.byte 0x02
EventScript_JP_0822A2F9: @ 0x0822A2F9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22ACC9
	callstd 0x04
	goto EventScript_JP_0822A28D
	.byte 0x02
EventScript_JP_0822A307: @ 0x0822A307
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22AD4C
	callstd 0x04
	goto EventScript_JP_0822A28D
	.byte 0x02
EventScript_JP_0822A315: @ 0x0822A315
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22AE0B
	callstd 0x04
	goto EventScript_JP_0822A28D
	.byte 0x02
EventScript_JP_0822A323: @ 0x0822A323
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22AEA7
	callstd 0x04
	goto EventScript_JP_0822A28D
	.byte 0x02
EventScript_JP_0822A331: @ 0x0822A331
	releaseall
	end
