	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:207 SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou
	.globl SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou_Copy_Rom_210105
SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou_Copy_Rom_210105: @ 0x08210105
	.string "ざんねん じゃったのう\nじゃが よい しょうぶ じゃったぞ!\lつぎこそは かてると よいのう{EOS}"
	.if (. - SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou_Copy_Rom_210105) > 0x2f
	.error "SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou_Copy_Rom_210105 may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou_Copy_Rom_210105) < 0x2f
	.space 0x2f - (. - SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou_Copy_Rom_210105)
	.endif
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
gMapScriptDispatch_EverGrandeCity_SidneysRoom_OnLoad_OnWarpIntoMap_OnTransition_OnFrame: @ 0x082101E6
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_08210202
	.byte 0x04
	.4byte gMapScriptConditionTable_Shared_EverGrandeCity_DrakesRoom_SidneysRoom_OnWarpIntoMap
	.byte 0x03
	.4byte EventScript_JP_082101FB
	.byte 0x02
	.4byte gMapScriptConditionTable_EverGrandeCity_SidneysRoom_OnFrame
	.byte 0
EventScript_JP_082101FB: @ 0x082101FB
	setflag 0x01CF
	setflag 0x0319
	end
EventScript_JP_08210202: @ 0x08210202
	checkflag 0x04FB
	call_if 0x01, EventScript_JP_08210217
	compare_var_to_value 0x409C, 0x0001
	call_if 0x01, EventScript_JP_0821021D
	end
EventScript_JP_08210217: @ 0x08210217
	call 0x0824353F
	return
EventScript_JP_0821021D: @ 0x0821021D
	call 0x082435E2
	return
gMapScriptConditionTable_Shared_EverGrandeCity_DrakesRoom_SidneysRoom_OnWarpIntoMap: @ 0x08210223
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821022D
	.2byte 0
EventScript_JP_0821022D: @ 0x0821022D
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_EverGrandeCity_SidneysRoom_OnFrame: @ 0x08210232
	@ conditional map script table
	.2byte 0x409C, 0x0000
	.4byte EventScript_JP_0821023C
	.2byte 0
EventScript_JP_0821023C: @ 0x0821023C
	lockall
	call 0x082434F8
	setvar 0x409C, 0x0001
	releaseall
	end
.globl EventScript_JP_08210249
EventScript_JP_08210249: @ 0x08210249
	lock
	faceplayer
	checkflag 0x04FB
	goto_if 0x01, EventScript_JP_08210270
	playbgm 0x01C2, 0x00
	loadword 0x00, EverGrandeCity_SidneysRoom_Text_IntroSpeech
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0105, 0x0000, EverGrandeCity_SidneysRoom_Text_Defeat
	goto EventScript_JP_0821027A
	.byte 0x02
EventScript_JP_08210270: @ 0x08210270
	loadword 0x00, EverGrandeCity_SidneysRoom_Text_PostBattleSpeech
	callstd 0x04
	release
	end
EventScript_JP_0821027A: @ 0x0821027A
	setflag 0x04FB
	call 0x0824347B
	loadword 0x00, EverGrandeCity_SidneysRoom_Text_PostBattleSpeech
	callstd 0x04
	release
	end
