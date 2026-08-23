	.globl gText_Rom_226D86
	.set gText_Rom_226D86, gText_Rom_226D61 + 0x25
	.globl gText_Rom_226D88
	.set gText_Rom_226D88, gText_Rom_226D61 + 0x27
	@ ANALYSIS: SOURCE_RANGE offset=0x226D8C, size=0x6D5
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_BattleFrontier_BattleDomeLobby_OnResume_OnFrame_OnWarpIntoMap: @ 0x08226D8C
	@ map script dispatch table
	.byte 0x05
	.4byte EventScript_JP_08226D9C
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattleDomeLobby_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_Shared_BattleFrontier_BattleDomeLobby_BattlePyramidLobby_OnWarpIntoMap
	.byte 0
EventScript_JP_08226D9C: @ 0x08226D9C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0015
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	end
gMapScriptConditionTable_Shared_BattleFrontier_BattleDomeLobby_BattlePyramidLobby_OnWarpIntoMap: @ 0x08226DA5
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08226DAF
	.2byte 0
EventScript_JP_08226DAF: @ 0x08226DAF
	setvar 0x4001, 0x0001
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_BattleFrontier_BattleDomeLobby_OnFrame: @ 0x08226DB9
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08226DE3
	.2byte 0x4000, 0x0001
	.4byte EventScript_JP_08226DEC
	.2byte 0x4000, 0x0002
	.4byte EventScript_JP_08226FA3
	.2byte 0x4000, 0x0003
	.4byte EventScript_JP_08226E45
	.2byte 0x4000, 0x0004
	.4byte EventScript_JP_08226EEA
	.2byte 0
EventScript_JP_08226DE3: @ 0x08226DE3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	end
EventScript_JP_08226DEC: @ 0x08226DEC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_2277D7
	callstd 0x04
	closemessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_08226E45: @ 0x08226E45
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call BattleFrontier_EventScript_IncrementWinStreak
	lockall
	setvar 0x8004, 0x000A
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08226E6B
	loadword 0x00, gText_Rom_227828
	callstd 0x04
	goto EventScript_JP_08226E73
EventScript_JP_08226E6B: @ 0x08226E6B
	loadword 0x00, gText_Rom_227CCA
	callstd 0x04
EventScript_JP_08226E73: @ 0x08226E73
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_227D04
	callstd 0x04
	setvar 0x8004, 0x000B
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	loadword 0x00, gText_Rom_22189E
	callstd 0x09
	message gText_Rom_2278A7
	waitmessage
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x8004, 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0007
	setvar 0x8006, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	goto EventScript_JP_08226F3B
EventScript_JP_08226EEA: @ 0x08226EEA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_22789C
	callstd 0x04
	message gText_Rom_2278A7
	waitmessage
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x8004, 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: special
	.byte 0x25
	.2byte 0x0000
EventScript_JP_08226F3B: @ 0x08226F3B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000D
	setvar 0x8005, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	playse 0x0037
	waitse
	call 0x0821F921
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08226F93
	message gText_Rom_227D2E
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08226F93
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08226F8E
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_08226F93
EventScript_JP_08226F8E: @ 0x08226F8E
	call 0x0821F8F5
EventScript_JP_08226F93: @ 0x08226F93
	loadword 0x00, gText_Rom_2274C6
	callstd 0x04
	closemessage
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_08226FA3: @ 0x08226FA3
	lockall
	loadword 0x00, gText_Rom_2278C2
	callstd 0x04
	message gText_Rom_2278CE
	waitmessage
	setvar 0x8004, 0x000D
	setvar 0x8005, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	playse 0x0037
	waitse
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0003
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x4000, 0x00FF
	goto EventScript_JP_0822716C
.globl EventScript_JP_08226FDF
EventScript_JP_08226FDF: @ 0x08226FDF
	lock
	faceplayer
	setvar 0x40CF, 0x0001
	setvar 0x40CE, 0x0000
	goto EventScript_JP_08227003
	.byte 0x02
.globl EventScript_JP_08226FF1
EventScript_JP_08226FF1: @ 0x08226FF1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x40CF, 0x0001
	setvar 0x40CE, 0x0001
	goto EventScript_JP_08227003
	.byte 0x02
EventScript_JP_08227003: @ 0x08227003
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	compare_var_to_value 0x40CE, 0x0000
	call_if 0x01, EventScript_JP_082272A7
	compare_var_to_value 0x40CE, 0x0001
	call_if 0x01, EventScript_JP_082272B0
EventScript_JP_0822701C: @ 0x0822701C
	compare_var_to_value 0x40CE, 0x0000
	call_if 0x01, EventScript_JP_082272B9
	compare_var_to_value 0x40CE, 0x0001
	call_if 0x01, EventScript_JP_082272BF
	waitmessage
	multichoice 0x11, 0x06, 0x17, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08227069
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082271A4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822720E
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822720E
EventScript_JP_08227069: @ 0x08227069
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_22764D
	waitmessage
	multichoice 0x11, 0x06, 0x18, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822720E
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822720E
	setvar 0x8004, 0x000F
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x8004, 0x0001
	goto_if 0x01, EventScript_JP_082271BF
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	copyvar 0x8006, 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	loadword 0x00, gText_Rom_22767D
	callstd 0x04
	fadescreen 0x01
	call 0x082202F8
	copyvar 0x8004, 0x800D
	setvar 0x8005, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00F5
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822720B
	loadword 0x00, gText_Rom_227624
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822720B
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822710A
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822720B
EventScript_JP_0822710A: @ 0x0822710A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4000, 0x0000
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x8004, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0003
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	closemessage
	delay 0x0002
	call 0x082423E9
	setvar 0x4000, 0x00FF
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082271F4
	setvar 0x8004, 0x0016
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
EventScript_JP_0822716C: @ 0x0822716C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	setvar 0x8004, 0x000F
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	loadword 0x00, gText_Rom_2277BF
	callstd 0x04
	closemessage
	call EventScript_JP_08227218
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x13
	.byte 0xFF
	.2byte 0x0017
	.2byte 0x0006
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_082271A4: @ 0x082271A4
	compare_var_to_value 0x40CE, 0x0000
	call_if 0x01, EventScript_JP_082272C5
	compare_var_to_value 0x40CE, 0x0001
	call_if 0x01, EventScript_JP_082272CE
	goto EventScript_JP_0822701C
EventScript_JP_082271BF: @ 0x082271BF
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082271DA
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082271E7
EventScript_JP_082271DA: @ 0x082271DA
	loadword 0x00, gText_Rom_227711
	callstd 0x04
	goto EventScript_JP_08227216
EventScript_JP_082271E7: @ 0x082271E7
	loadword 0x00, gText_Rom_22769C
	callstd 0x04
	goto EventScript_JP_08227216
EventScript_JP_082271F4: @ 0x082271F4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	goto EventScript_JP_0822720E
EventScript_JP_0822720B: @ 0x0822720B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	.byte 0x25
	.2byte 0x0028
EventScript_JP_0822720E: @ 0x0822720E
	loadword 0x00, gText_Rom_2274C6
	callstd 0x04
EventScript_JP_08227216: @ 0x08227216
	release
	end
EventScript_JP_08227218: @ 0x08227218
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x40CE, 0x0000
	call_if 0x01, EventScript_JP_08227287
	compare_var_to_value 0x40CE, 0x0001
	call_if 0x01, EventScript_JP_0822728F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte BattleFrontier_BattleDomeLobby_Movement_WalkUpX5 @ BattleFrontier_BattleDomeLobby_Movement_WalkUpX5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	compare_var_to_value 0x40CE, 0x0000
	call_if 0x01, EventScript_JP_082272D7
	compare_var_to_value 0x40CE, 0x0001
	call_if 0x01, EventScript_JP_082272DD
	waitdooranim
	compare_var_to_value 0x40CE, 0x0000
	call_if 0x01, EventScript_JP_08227297
	compare_var_to_value 0x40CE, 0x0001
	call_if 0x01, EventScript_JP_0822729F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte BattleFrontier_BattleDomeLobby_Movement_WalkUpX2_SetInvisible @ BattleFrontier_BattleDomeLobby_Movement_WalkUpX2_SetInvisible
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	compare_var_to_value 0x40CE, 0x0000
	call_if 0x01, EventScript_JP_082272E3
	compare_var_to_value 0x40CE, 0x0001
	call_if 0x01, EventScript_JP_082272E9
	waitdooranim
	return
EventScript_JP_08227287: @ 0x08227287
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte BattleFrontier_BattleDomeLobby_Movement_WalkUpX5 @ BattleFrontier_BattleDomeLobby_Movement_WalkUpX5
	return
EventScript_JP_0822728F: @ 0x0822728F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte BattleFrontier_BattleDomeLobby_Movement_WalkUpX5 @ BattleFrontier_BattleDomeLobby_Movement_WalkUpX5
	return
EventScript_JP_08227297: @ 0x08227297
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte BattleFrontier_BattleDomeLobby_Movement_WalkUp_SetInvisible @ BattleFrontier_BattleDomeLobby_Movement_WalkUp_SetInvisible
	return
EventScript_JP_0822729F: @ 0x0822729F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte BattleFrontier_BattleDomeLobby_Movement_WalkUp_SetInvisible @ BattleFrontier_BattleDomeLobby_Movement_WalkUp_SetInvisible
	return
EventScript_JP_082272A7: @ 0x082272A7
	loadword 0x00, gText_Rom_227461
	callstd 0x04
	return
EventScript_JP_082272B0: @ 0x082272B0
	loadword 0x00, gText_Rom_2278F7
	callstd 0x04
	return
EventScript_JP_082272B9: @ 0x082272B9
	message gText_Rom_2274AA
	return
EventScript_JP_082272BF: @ 0x082272BF
	message gText_Rom_22793F
	return
EventScript_JP_082272C5: @ 0x082272C5
	loadword 0x00, gText_Rom_2274DB
	callstd 0x04
	return
EventScript_JP_082272CE: @ 0x082272CE
	loadword 0x00, gText_Rom_22795A
	callstd 0x04
	return
EventScript_JP_082272D7: @ 0x082272D7
	opendoor 0x0005, 0x0004
	return
EventScript_JP_082272DD: @ 0x082272DD
	opendoor 0x0011, 0x0004
	return
EventScript_JP_082272E3: @ 0x082272E3
	closedoor 0x0005, 0x0004
	return
EventScript_JP_082272E9: @ 0x082272E9
	closedoor 0x0011, 0x0004
	return
BattleFrontier_BattleDomeLobby_Movement_WalkUpX5: @ 0x082272EF
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
BattleFrontier_BattleDomeLobby_Movement_WalkUp_SetInvisible: @ 0x082272F5
	@ object movement sequence
	walk_up
	set_invisible
	step_end
BattleFrontier_BattleDomeLobby_Movement_WalkUpX2_SetInvisible: @ 0x082272F8
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
.globl EventScript_JP_082272FC
EventScript_JP_082272FC: @ 0x082272FC
	lockall
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	waitbuttonpress
	@ event command: special
	.byte 0x25
	.2byte 0x0209
	releaseall
	end
.globl EventScript_JP_08227315
EventScript_JP_08227315: @ 0x08227315
	lockall
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	waitbuttonpress
	@ event command: special
	.byte 0x25
	.2byte 0x0209
	releaseall
	end
.globl EventScript_JP_0822732E
EventScript_JP_0822732E: @ 0x0822732E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_08227373
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_0822737C
	compare_var_to_value 0x800D, 0x0002
	call_if 0x01, EventScript_JP_08227385
	compare_var_to_value 0x800D, 0x0003
	call_if 0x01, EventScript_JP_0822738E
	fadescreen 0x01
	setvar 0x8004, 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	waitstate
	end
EventScript_JP_08227373: @ 0x08227373
	loadword 0x00, gText_Rom_227AB0
	callstd 0x03
	return
EventScript_JP_0822737C: @ 0x0822737C
	loadword 0x00, gText_Rom_227AD8
	callstd 0x03
	return
EventScript_JP_08227385: @ 0x08227385
	loadword 0x00, gText_Rom_227AFF
	callstd 0x03
	return
EventScript_JP_0822738E: @ 0x0822738E
	loadword 0x00, gText_Rom_227B29
	callstd 0x03
	return
.globl EventScript_JP_08227397
EventScript_JP_08227397: @ 0x08227397
	setvar 0x8004, 0x0014
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	loadword 0x00, gText_Rom_227B52
	callstd 0x02
	end
.globl EventScript_JP_082273A8
EventScript_JP_082273A8: @ 0x082273A8
	loadword 0x00, gText_Rom_227BF7
	callstd 0x02
	end
.globl EventScript_JP_082273B1
EventScript_JP_082273B1: @ 0x082273B1
	loadword 0x00, gText_Rom_227C4A
	callstd 0x02
	end
.globl EventScript_JP_082273BA
EventScript_JP_082273BA: @ 0x082273BA
	loadword 0x00, gText_Rom_227C79
	callstd 0x02
	end
.globl EventScript_JP_082273C3
EventScript_JP_082273C3: @ 0x082273C3
	loadword 0x00, gText_Rom_227BA7
	callstd 0x02
	end
	.byte 0x0F, 0x00, 0xC1, 0x7B, 0x22, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0xDE, 0x7B, 0x22, 0x08, 0x09
	.byte 0x02, 0x02
.globl EventScript_JP_082273DE
EventScript_JP_082273DE: @ 0x082273DE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_227D5C
	callstd 0x04
	goto EventScript_JP_082273ED
	.byte 0x02
EventScript_JP_082273ED: @ 0x082273ED
	message gText_Rom_227D74
	waitmessage
	multichoice 0x11, 0x04, 0x62, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08227435
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08227443
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08227451
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0822745F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822745F
	end
EventScript_JP_08227435: @ 0x08227435
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_227D84
	callstd 0x04
	goto EventScript_JP_082273ED
	.byte 0x02
EventScript_JP_08227443: @ 0x08227443
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_227DDA
	callstd 0x04
	goto EventScript_JP_082273ED
	.byte 0x02
EventScript_JP_08227451: @ 0x08227451
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_227E6C
	callstd 0x04
	goto EventScript_JP_082273ED
	.byte 0x02
EventScript_JP_0822745F: @ 0x0822745F
	releaseall
	end
