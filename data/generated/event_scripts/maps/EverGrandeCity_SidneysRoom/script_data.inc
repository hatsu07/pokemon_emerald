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
