	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:726 BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules
	.globl gText_Rom_22D46E
gText_Rom_22D46E: @ 0x0822D46E
	.string "バトルバッグは ピラミッドに いる あいだ\nつかうことが できます\pレベル50と オープンレベルの\nバッグが それぞれ ようい されていて\l10しゅるいの どうぐを\l99こ まで いれることが できます\pまた バッグの なかみは ぼうけんに\nしっぱい すると なくなって しまいます{EOS}"
	.if (. - gText_Rom_22D46E) > 0x8e
	.error "gText_Rom_22D46E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D46E) < 0x8e
	.space 0x8e - (. - gText_Rom_22D46E)
	.endif
	@ analyzed canonical ROM range 0x0822D4FC-0x0822D6B0
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_BattleFrontier_BattlePyramidFloor_OnResume_OnFrame_OnTransition: @ 0x0822D4FC
	@ map script dispatch table
	.byte 0x05
	.4byte EventScript_JP_0822D56B
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattlePyramidFloor_OnFrame
	.byte 0x03
	.4byte EventScript_JP_0822D693
	.byte 0
gMapScriptConditionTable_BattleFrontier_BattlePyramidFloor_OnFrame: @ 0x0822D50C
	@ conditional map script table
	.2byte 0x400D, 0x0001
	.4byte EventScript_JP_0822D526
	.2byte 0x400E, 0x0000
	.4byte EventScript_JP_0822D561
	.2byte 0x400F, 0x0001
	.4byte EventScript_JP_0822D558
	.2byte 0
EventScript_JP_0822D526: @ 0x0822D526
	lockall
	setvar 0x8004, 0x000D
	setvar 0x8005, 0x0004
	setvar 0x8006, 0x0001
	setvar 0x8007, 0x0037
	setvar 0x800D, 0x0000
EventScript_JP_0822D540: @ 0x0822D540
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special CallBattlePyramidFunction
	delay 0x0002
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x05, EventScript_JP_0822D540
	setvar 0x400D, 0x0000
	releaseall
	end
EventScript_JP_0822D558: @ 0x0822D558
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special ShowMapNamePopup
	setvar 0x400F, 0x0000
	end
EventScript_JP_0822D561: @ 0x0822D561
	playbgm 0x01CD, 0x00
	setvar 0x400E, 0x0001
	end
EventScript_JP_0822D56B: @ 0x0822D56B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000F
	@ event command: special
	special CallBattlePyramidFunction
	setvar 0x8004, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x8000, 0x4000
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822D656
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822D62F
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822D656
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0005
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0004
	goto_if 0x01, EventScript_JP_0822D602
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_0822D602
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822D602
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	compare_var_to_value 0x800D, 0x0009
	goto_if 0x01, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	setvar 0x8004, 0x000E
	setvar 0x8005, 0x0008
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x400D, 0x0001
EventScript_JP_0822D602: @ 0x0822D602
	setvar 0x8004, 0x0011
	@ event command: special
	special CallBattlePyramidFunction
	end
	.globl BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost: @ 0x0822D60B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0007
	setvar 0x8006, 0x00FF
	@ event command: special
	special CallBattlePyramidFunction
EventScript_JP_0822D62F: @ 0x0822D62F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000D
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallBattlePyramidFunction
	setvar 0x8004, 0x000E
	@ event command: special
	special CallBattlePyramidFunction
	@ event command: special
	special HealPlayerParty
	@ event command: warpsilent
	warpsilent MAP_ID_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 0xFF, 0x0007, 0x000D
	.byte 0x27, 0x02
EventScript_JP_0822D656: @ 0x0822D656
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0001
	@ event command: special
	special CallBattlePyramidFunction
	@ event command: special
	special SavePlayerParty
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0009
	@ event command: special
	special CallBattlePyramidFunction
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x400F, 0x0001
	end
EventScript_JP_0822D693: @ 0x0822D693
	call EventScript_JP_0822D69E
	setvar 0x400F, 0x0001
	end
EventScript_JP_0822D69E: @ 0x0822D69E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000D
	setvar 0x8005, 0x0020
	setvar 0x8006, 0x0000
	@ event command: special
	special CallBattlePyramidFunction
	return
