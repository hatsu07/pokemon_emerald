	@ analyzed canonical ROM range 0x08210134-0x0821028B
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_SootopolisCity_MysteryEventsHouse_B1F_OnTransition_OnFrame: @ 0x08210134
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0821013F
	.byte 0x02
	.4byte gMapScriptConditionTable_SootopolisCity_MysteryEventsHouse_B1F_OnFrame
	.byte 0
EventScript_JP_0821013F: @ 0x0821013F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special SetEReaderTrainerGfxId
	end
gMapScriptConditionTable_SootopolisCity_MysteryEventsHouse_B1F_OnFrame: @ 0x08210143
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821014D
	.2byte 0
EventScript_JP_0821014D: @ 0x0821014D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x00FF, SootopolisCity_MysteryEventsHouse_1F_Movement_WalkDownX3_WalkRightX2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: special
	special CopyEReaderTrainerGreeting
	loadword 0x00, 0x02021C7C
	callstd 0x04
	closemessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	@ event command: special
	special DoSpecialTrainerBattle
	waitstate
	compare_var_to_value 0x800D, 0x0003
	call_if 0x01, EventScript_JP_082101B4
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_082101C2
	compare_var_to_value 0x800D, 0x0002
	call_if 0x01, EventScript_JP_082101CD
	closemessage
	@ event command: special
	special HealPlayerParty
	@ event command: applymovement
	applymovement 0x00FF, SootopolisCity_MysteryEventsHouse_1F_Movement_WalkLeftX2_WalkUpX4_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: special
	special LoadPlayerParty
	setvar 0x4001, 0x0001
	@ event command: warp
	warp MAP_ID_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F, 0xFF, 0x0003, 0x0001
	.byte 0x27, 0x6B, 0x02
EventScript_JP_082101B4: @ 0x082101B4
	setvar 0x40C0, 0x0003
	loadword 0x00, SootopolisCity_MysteryEventsHouse_B1F_Text_MatchEndedUpDraw
	callstd 0x04
	return
EventScript_JP_082101C2: @ 0x082101C2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x40C0, 0x0001
	@ event command: special
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	return
EventScript_JP_082101CD: @ 0x082101CD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x40C0, 0x0002
	@ event command: special
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	return
SootopolisCity_MysteryEventsHouse_1F_Movement_WalkDownX3_WalkRightX2: @ 0x082101D8
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end
SootopolisCity_MysteryEventsHouse_1F_Movement_WalkLeftX2_WalkUpX4_Delay8: @ 0x082101DE
	@ object movement sequence
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	step_end
