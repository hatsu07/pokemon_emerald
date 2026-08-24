@ BATCH89_BATTLE_PYRAMID_SEMANTIC_CONSTANTS
@ Locally proven script constants for the six recovered Battle Pyramid scripts.
@ These are non-emitting assembler constants; values are derived from the JP bytecode
@ and the local script-special dispatch table.
.set VAR_0x8004, 0x8004
.set VAR_0x8005, 0x8005
.set VAR_0x8006, 0x8006
.set VAR_0x8007, 0x8007
.set VAR_RESULT, 0x800D
.set SPECIAL_CallFrontierUtilFunc, 0x00E7
.set SPECIAL_CallBattlePyramidFunction, 0x00F0
.set FRONTIER_UTIL_FUNC_GET_DATA, 1
.set FRONTIER_UTIL_FUNC_SET_DATA, 2
.set FRONTIER_DATA_CHALLENGE_STATUS, 0
.set FRONTIER_DATA_BATTLE_NUM, 2
.set BATTLE_PYRAMID_FUNC_SEED_FLOOR, 6
.set BATTLE_PYRAMID_FUNC_SET_ITEM, 7
.set BATTLE_PYRAMID_FUNC_HIDE_ITEM, 8
.set BATTLE_PYRAMID_FUNC_SHOW_HINT_TEXT, 10
.set BATTLE_PYRAMID_PLACEHOLDER_TRAINER, 0x01EE
.set LOCALID_NONE, 0
.set MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 0x1A1A
.set MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP, 0x1A1B

	.globl BattlePyramid_WarpToNextFloor
	@ analyzed canonical ROM range 0x0822D6B1-0x0822D717
	@ semantic recovery: script_data; byte-verified against linked ROM
BattlePyramid_WarpToNextFloor: @ 0x0822D6B1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call BattleFrontier_EventScript_IncrementWinStreak
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_GET_DATA
	setvar VAR_0x8005, FRONTIER_DATA_BATTLE_NUM
	special CallFrontierUtilFunc
	addvar VAR_RESULT, 1
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
	setvar VAR_0x8005, FRONTIER_DATA_BATTLE_NUM
	copyvar VAR_0x8006, VAR_RESULT
	special CallFrontierUtilFunc
	compare_var_to_value VAR_RESULT, 7
	goto_if_eq BattlePyramid_WarpToTop
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_SEED_FLOOR
	special CallBattlePyramidFunction
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
	setvar VAR_0x8005, FRONTIER_DATA_CHALLENGE_STATUS
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_RESULT, 0
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 0xFF, 1, 1
	waitstate
	end
BattlePyramid_WarpToTop: @ 0x0822D70E
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP, 0xFF, 17, 17
	waitstate
	end
	@ analyzed canonical ROM range 0x0822D718-0x0822D732
	@ semantic recovery: script_data; byte-verified against linked ROM
.globl BattlePyramid_TrainerBattle
BattlePyramid_TrainerBattle: @ 0x0822D718
	@ trainerbattle opcode retained until the shared TRAINER_BATTLE_* constant family is recovered.
	trainerbattle TRAINER_BATTLE_PYRAMID, BATTLE_PYRAMID_PLACEHOLDER_TRAINER, LOCALID_NONE, BattleFacility_TrainerBattle_PlaceholderText, BattleFacility_TrainerBattle_PlaceholderText
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_SHOW_HINT_TEXT
	special CallBattlePyramidFunction
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end
	@ analyzed canonical ROM range 0x0822D733-0x0822D750
	@ semantic recovery: script_data; byte-verified against linked ROM
.globl BattlePyramid_FindItemBall
BattlePyramid_FindItemBall: @ 0x0822D733
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_SET_ITEM
	special CallBattlePyramidFunction
	callstd STD_FIND_ITEM
	compare_var_to_value VAR_0x8007, 0
	goto_if_eq BattlePyramid_FindItemBallEnd
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_HIDE_ITEM
	special CallBattlePyramidFunction
BattlePyramid_FindItemBallEnd: @ 0x0822D750
	end
	.globl BattlePyramid_Retire
	@ analyzed canonical ROM range 0x0822D751-0x0822D755
	@ semantic recovery: script_data; byte-verified against linked ROM
BattlePyramid_Retire: @ 0x0822D751
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
