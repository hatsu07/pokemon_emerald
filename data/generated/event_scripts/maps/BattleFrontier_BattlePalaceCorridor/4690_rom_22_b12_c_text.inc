	@ data/maps/BattleFrontier_BattlePalaceCorridor/scripts.inc:146 BattleFrontier_BattlePalaceCorridor_Text_HeartfeltBondBetweenYouAndMons
	.globl gText_Rom_22B12C
gText_Rom_22B12C: @ 0x0822B12C
	.string "おお…… おぬしと ポケモンの あいだに\nつよい こころの きずなが みえる……{EOS}"
	.if (. - gText_Rom_22B12C) > 0x29
	.error "gText_Rom_22B12C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B12C) < 0x29
	.space 0x29 - (. - gText_Rom_22B12C)
	.endif
	@ analyzed canonical ROM range 0x0822B155-0x0822B83A
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_BattleFrontier_BattlePalaceBattleRoom_OnTransition_OnFrame_OnWarpIntoMap: @ 0x0822B155
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0822B165
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattlePalaceBattleRoom_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_BattleFrontier_BattlePalaceBattleRoom_OnWarpIntoMap
	.byte 0
EventScript_JP_0822B165: @ 0x0822B165
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0005
	@ event command: special
	special CallFrontierUtilFunc
	call EventScript_JP_0822B173
	end
EventScript_JP_0822B173: @ 0x0822B173
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822B18B
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822B196
	return
EventScript_JP_0822B18B: @ 0x0822B18B
	setvar 0x4011, 0x0064
	setvar 0x4010, 0x0064
	return
EventScript_JP_0822B196: @ 0x0822B196
	setvar 0x4011, 0x0069
	setvar 0x4010, 0x0069
	return
gMapScriptConditionTable_BattleFrontier_BattlePalaceBattleRoom_OnFrame: @ 0x0822B1A1
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_0822B1AB
	.2byte 0
EventScript_JP_0822B1AB: @ 0x0822B1AB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: showobjectat
	showobjectat 0x0001, MAP_ID_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822B1F5
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkUpX4
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0003, BattleFrontier_BattlePalaceCorridor_Movement_FaceDown
	setvar 0x4002, 0x0001
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0001
	@ event command: special
	special CallFrontierUtilFunc
	goto EventScript_JP_0822B2CA
EventScript_JP_0822B1F5: @ 0x0822B1F5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkUpX4_FaceRight
	@ event command: waitmovement
	waitmovement 0x0000
EventScript_JP_0822B1FF: @ 0x0822B1FF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0003
	@ event command: special
	special CallBattleTowerFunc
	@ event command: addobject
	addobject 0x0002
	@ event command: applymovement
	applymovement 0x0002, BattleFrontier_BattlePalaceCorridor_Movement_WalkDownX4_FaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0005
	@ event command: special
	special CallBattlePalaceFunction
	loadword 0x00, 0x02021C7C
	callstd 0x04
	waitmessage
	call EventScript_JP_0822B737
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B251
EventScript_JP_0822B23A: @ 0x0822B23A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	goto EventScript_JP_0822B7F6
EventScript_JP_0822B251: @ 0x0822B251
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call BattleFrontier_EventScript_IncrementWinStreak
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	addvar 0x800D, 0x0001
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	copyvar 0x8006, 0x800D
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0007
	goto_if 0x01, EventScript_JP_0822B468
	@ event command: applymovement
	applymovement 0x0002, BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX4
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x0002
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceCorridor_Movement_FaceUp
	@ event command: applymovement
	applymovement 0x0003, BattleFrontier_BattlePalaceCorridor_Movement_FaceDown
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_22B83B
	callstd 0x04
	@ event command: special
	special LoadPlayerParty
	@ event command: special
	special SavePlayerParty
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	playfanfare 0x0170
	waitfanfare
	@ event command: special
	special HealPlayerParty
EventScript_JP_0822B2CA: @ 0x0822B2CA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0009
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x400F, 0x800D
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0822B4A1
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_0822B7A1
	compare_var_to_value 0x800D, 0x0002
	call_if 0x01, EventScript_JP_0822B7A8
	compare_var_to_value 0x800D, 0x0003
	call_if 0x01, EventScript_JP_0822B7AF
	compare_var_to_value 0x800D, 0x0004
	call_if 0x01, EventScript_JP_0822B7B6
	compare_var_to_value 0x800D, 0x0005
	call_if 0x01, EventScript_JP_0822B7BD
	compare_var_to_value 0x800D, 0x0006
	call_if 0x01, EventScript_JP_0822B7C4
	call 0x0821F921
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822B382
	multichoice 0x13, 0x04, 0x67, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B454
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B3B8
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822B3F4
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0822B422
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B2CA
EventScript_JP_0822B382: @ 0x0822B382
	multichoice 0x14, 0x06, 0x68, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B454
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B3F4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822B422
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B2CA
EventScript_JP_0822B3B8: @ 0x0822B3B8
	message gText_Rom_22B94A
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B2CA
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B3EA
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B2CA
EventScript_JP_0822B3EA: @ 0x0822B3EA
	call 0x0821F8F5
	goto EventScript_JP_0822B2CA
EventScript_JP_0822B3F4: @ 0x0822B3F4
	loadword 0x00, gText_Rom_22B909
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B2CA
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B47F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B2CA
EventScript_JP_0822B422: @ 0x0822B422
	message gText_Rom_22B91F
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B2CA
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B23A
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B2CA
EventScript_JP_0822B454: @ 0x0822B454
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkUpX4_FaceRight + 0x5
	@ event command: applymovement
	applymovement 0x0003, BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkUpX4_FaceRight + 0x5
	closemessage
	goto EventScript_JP_0822B1FF
EventScript_JP_0822B468: @ 0x0822B468
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	goto EventScript_JP_0822B7F6
EventScript_JP_0822B47F: @ 0x0822B47F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_22B931
	waitmessage
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0002
	@ event command: special
	special CallBattlePalaceFunction
	playse 0x0037
	waitse
	fadescreen 0x01
	setvar 0x8004, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	end
EventScript_JP_0822B4A1: @ 0x0822B4A1
	compare_var_to_value 0x4002, 0x0001
	goto_if 0x01, EventScript_JP_0822B4B9
	loadword 0x00, gText_Rom_22B969
	callstd 0x04
	setvar 0x4002, 0x0001
EventScript_JP_0822B4B9: @ 0x0822B4B9
	message gText_Rom_22B9A6
	waitmessage
	call 0x0821F921
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822B510
	multichoice 0x13, 0x04, 0x67, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B546
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B3B8
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822B3F4
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0822B422
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B4B9
EventScript_JP_0822B510: @ 0x0822B510
	multichoice 0x14, 0x06, 0x68, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B546
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B3F4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822B422
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B4B9
EventScript_JP_0822B546: @ 0x0822B546
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call 0x08222264
	loadword 0x00, gText_Rom_22B9C3
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkUpX4_FaceRight + 0x5
	@ event command: applymovement
	applymovement 0x0003, BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkUpX4_FaceRight + 0x5
	setobjectxyperm 0x0002, 0x000F, 0x0001
	@ event command: addobject
	addobject 0x0002
	@ event command: hideobjectat
	hideobjectat 0x0002, MAP_ID_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
	setobjectxy 0x0002, 0x000D, 0x0001
	setobjectxyperm 0x0002, 0x000D, 0x0001
	@ event command: applymovement
	applymovement 0x0004, BattleFrontier_BattlePalaceCorridor_Movement_Delay16X2_SetVisible_WalkDown_WalkRight_WalkDown_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x0005, BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkFastDown_WalkFastRight_WalkFastDownX5_WalkInPlaceFastestLeft_Delay16
	@ event command: applymovement
	applymovement 0x0002, BattleFrontier_BattlePalaceCorridor_Movement_Delay16X7_SetVisible_WalkSlowDownX4_FaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	copyvar 0x8000, 0x400F
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822B67A
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0822B5EA
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_0822B6A7
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0007
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0822B5EA
	loadword 0x00, gText_Rom_22B9E2
	callstd 0x04
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0007
	@ event command: special
	special CallFrontierUtilFunc
EventScript_JP_0822B5EA: @ 0x0822B5EA
	loadword 0x00, gText_Rom_22BA71
	callstd 0x04
	call EventScript_JP_0822B737
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822B607
	goto EventScript_JP_0822B23A
EventScript_JP_0822B607: @ 0x0822B607
	setvar 0x8004, 0x0006
	@ event command: special
	special CallBattlePalaceFunction
	setvar 0x8004, 0x000C
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0822B468
	loadword 0x00, gText_Rom_22BA8A
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceCorridor_Movement_FaceUp
	@ event command: applymovement
	applymovement 0x0003, BattleFrontier_BattlePalaceCorridor_Movement_FaceDown
	loadword 0x00, gText_Rom_22BAC7
	callstd 0x04
	playfanfare 0x01D2
	message gText_Rom_22BB02
	waitmessage
	waitfanfare
	setvar 0x8004, 0x000D
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: applymovement
	applymovement 0x0002, Movement_08243639
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	applymovement 0x0003, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_22BB1E
	callstd 0x04
	goto EventScript_JP_0822B468
EventScript_JP_0822B67A: @ 0x0822B67A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0007
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0822B6A7
	loadword 0x00, gText_Rom_22BB57
	callstd 0x04
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0007
	@ event command: special
	special CallFrontierUtilFunc
EventScript_JP_0822B6A7: @ 0x0822B6A7
	loadword 0x00, gText_Rom_22BBDF
	callstd 0x04
	call EventScript_JP_0822B737
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822B6C4
	goto EventScript_JP_0822B23A
EventScript_JP_0822B6C4: @ 0x0822B6C4
	setvar 0x8004, 0x0006
	@ event command: special
	special CallBattlePalaceFunction
	setvar 0x8004, 0x000C
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_0822B468
	loadword 0x00, gText_Rom_22BBEF
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceCorridor_Movement_FaceUp
	@ event command: applymovement
	applymovement 0x0003, BattleFrontier_BattlePalaceCorridor_Movement_FaceDown
	loadword 0x00, gText_Rom_22BC48
	callstd 0x04
	playfanfare 0x01D2
	message gText_Rom_22BC8E
	waitmessage
	waitfanfare
	setvar 0x8004, 0x000D
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: applymovement
	applymovement 0x0002, Movement_08243639
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	applymovement 0x0003, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_22BCA6
	callstd 0x04
	goto EventScript_JP_0822B468
EventScript_JP_0822B737: @ 0x0822B737
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	closemessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special HealPlayerParty
	setvar 0x8004, 0x0004
	setvar 0x8005, 0x0000
	@ event command: special
	special DoSpecialTrainerBattle
	waitstate
	setvar 0x8004, 0x0012
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special HealPlayerParty
	setvar 0x8004, 0x0015
	@ event command: special
	special CallFrontierUtilFunc
	return
gMapScriptConditionTable_BattleFrontier_BattlePalaceBattleRoom_OnWarpIntoMap: @ 0x0822B76F
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0822B779
	.2byte 0
EventScript_JP_0822B779: @ 0x0822B779
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: hideobjectat
	hideobjectat 0x0001, MAP_ID_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
	call EventScript_JP_0822B173
	setvar 0x4001, 0x0001
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattlePalaceCorridor_Movement_SetInvisible
	@ event command: removeobject
	removeobject 0x0002
	@ event command: applymovement
	applymovement 0x0004, BattleFrontier_BattlePalaceCorridor_Movement_SetInvisible
	@ event command: applymovement
	applymovement 0x0005, BattleFrontier_BattlePalaceCorridor_Movement_SetInvisible
	end
EventScript_JP_0822B7A1: @ 0x0822B7A1
	message gText_Rom_22B855
	waitmessage
	return
EventScript_JP_0822B7A8: @ 0x0822B7A8
	message gText_Rom_22B873
	waitmessage
	return
EventScript_JP_0822B7AF: @ 0x0822B7AF
	message gText_Rom_22B891
	waitmessage
	return
EventScript_JP_0822B7B6: @ 0x0822B7B6
	message gText_Rom_22B8AF
	waitmessage
	return
EventScript_JP_0822B7BD: @ 0x0822B7BD
	message gText_Rom_22B8CD
	waitmessage
	return
EventScript_JP_0822B7C4: @ 0x0822B7C4
	message gText_Rom_22B8EB
	waitmessage
	return
BattleFrontier_BattlePalaceCorridor_Movement_SetInvisible: @ 0x0822B7CB
	@ object movement sequence
	set_invisible
	step_end
BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkUpX4_FaceRight: @ 0x0822B7CD
	@ object movement sequence
	set_visible
	walk_up
	walk_up
	walk_up
	walk_up
	face_right
	step_end
BattleFrontier_BattlePalaceCorridor_Movement_FaceUp: @ 0x0822B7D4
	@ object movement sequence
	face_up
	step_end
BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkUpX4: @ 0x0822B7D6
	@ object movement sequence
	set_visible
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
BattleFrontier_BattlePalaceCorridor_Movement_WalkDownX4_FaceLeft: @ 0x0822B7DC
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	face_left
	step_end
BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX4: @ 0x0822B7E2
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
BattleFrontier_BattlePalaceCorridor_Movement_FaceDown: @ 0x0822B7E7
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	face_down
	step_end
	.globl BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkSlowDownX2_FaceLeft
BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkSlowDownX2_FaceLeft: @ 0x0822B7E9
	.byte 0x55, 0x04, 0x04, 0x02, 0xFE
	.globl BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkSlowDown
BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkSlowDown: @ 0x0822B7EE
	.byte 0x55, 0x04, 0xFE
	.globl BattleFrontier_BattlePalaceCorridor_Movement_WalkSlowDownX3_FaceLeft
BattleFrontier_BattlePalaceCorridor_Movement_WalkSlowDownX3_FaceLeft: @ 0x0822B7F1
	.byte 0x04, 0x04, 0x04, 0x02, 0xFE
EventScript_JP_0822B7F6: @ 0x0822B7F6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	copyvar 0x800D, 0x40CE
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822B810
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, 0xFF, 0x0005, 0x0007
	.byte 0x27, 0x02
EventScript_JP_0822B810: @ 0x0822B810
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, 0xFF, 0x0013, 0x0007
	.byte 0x27, 0x02
BattleFrontier_BattlePalaceCorridor_Movement_Delay16X2_SetVisible_WalkDown_WalkRight_WalkDown_WalkInPlaceFastestLeft: @ 0x0822B81A
	@ object movement sequence
	delay_16
	delay_16
	set_visible
	walk_down
	walk_right
	walk_down
	walk_in_place_fastest_left
	step_end
BattleFrontier_BattlePalaceCorridor_Movement_SetVisible_WalkFastDown_WalkFastRight_WalkFastDownX5_WalkInPlaceFastestLeft_Delay16: @ 0x0822B822
	@ object movement sequence
	set_visible
	walk_fast_down
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_in_place_fastest_left
	delay_16
	step_end
BattleFrontier_BattlePalaceCorridor_Movement_Delay16X7_SetVisible_WalkSlowDownX4_FaceLeft: @ 0x0822B82D
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	set_visible
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	face_left
	step_end
