	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:333 BattleFrontier_OutsideEast_Text_StickyMonWithLongTail
	.globl gText_Rom_223411
gText_Rom_223411: @ 0x08223411
	.string "ぼぼぼ ぼく みちゃったんだっ!!\pこのさきの いわ から しっぽが ながくって\nなんか ベタベタした ポケモンが\lぼくの こと じーっと のぞいてたんだっ!\pきっと こわい ポケモン だよーっ!!{EOS}"
	.if (. - gText_Rom_223411) > 0x64
	.error "gText_Rom_223411 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223411) < 0x64
	.space 0x64 - (. - gText_Rom_223411)
	.endif
	@ analyzed canonical ROM range 0x08223475-0x08223738
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_BattleFrontier_BattleTowerMultiPartnerRoom_OnResume_OnTransition_OnWarpIntoMap_OnFrame: @ 0x08223475
	@ map script dispatch table
	.byte 0x05
	.4byte EventScript_JP_0822348A
	.byte 0x03
	.4byte EventScript_JP_08223493
	.byte 0x04
	.4byte gMapScriptConditionTable_BattleFrontier_BattleTowerMultiPartnerRoom_OnWarpIntoMap
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame
	.byte 0
EventScript_JP_0822348A: @ 0x0822348A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0011
	@ event command: special
	special CallBattlePyramidFunction
	end
EventScript_JP_08223493: @ 0x08223493
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x0152
	goto_if 0x01, EventScript_JP_082234BD
	clearflag 0x02C7
	clearflag 0x02C8
	clearflag 0x02C9
	clearflag 0x02CA
	clearflag 0x02CB
	clearflag 0x02CC
	setflag 0x0360
	setflag 0x0361
	setvar 0x8004, 0x000A
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	end
EventScript_JP_082234BD: @ 0x082234BD
	setvar 0x4010, 0x0007
	setvar 0x4011, 0x0007
	setvar 0x4012, 0x0007
	setvar 0x4013, 0x0007
	setvar 0x4014, 0x0007
	setvar 0x4015, 0x0007
	setvar 0x4016, 0x0007
	setvar 0x4017, 0x0007
	setvar 0x4001, 0x0001
	setvar 0x4003, 0x0001
	setobjectxyperm 0x0001, 0x000A, 0x0002
	end
gMapScriptConditionTable_BattleFrontier_BattleTowerMultiPartnerRoom_OnWarpIntoMap: @ 0x082234F7
	@ conditional map script table
	.2byte 0x4003, 0x0001
	.4byte EventScript_JP_08223501
	.2byte 0
EventScript_JP_08223501: @ 0x08223501
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame: @ 0x08223506
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08223524
	.2byte 0x4003, 0x0001
	.4byte EventScript_JP_08223518
	.2byte 0
EventScript_JP_08223518: @ 0x08223518
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x4003, 0x0000
	goto EventScript_JP_08223598
	.byte 0x02
EventScript_JP_08223524: @ 0x08223524
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_OutsideEast_Movement_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_OutsideEast_Movement_WalkLeft_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	moveobjectoffscreen 0x0001
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_223739
	callstd 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	setvar 0x4001, 0x0001
	releaseall
	end
BattleFrontier_OutsideEast_Movement_WalkDown: @ 0x08223558
	@ object movement sequence
	walk_down
	step_end
BattleFrontier_OutsideEast_Movement_WalkLeft_WalkInPlaceFastestDown: @ 0x0822355A
	@ object movement sequence
	walk_left
	walk_in_place_fastest_down
	step_end
.globl EventScript_JP_0822355D
EventScript_JP_0822355D: @ 0x0822355D
	lock
	faceplayer
	message gText_Rom_22375E
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08223580
	loadword 0x00, gText_Rom_223797
	callstd 0x04
	release
	end
EventScript_JP_08223580: @ 0x08223580
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0001
	@ event command: special
	special CallFrontierUtilFunc
	goto 0x08221CFC
	.byte 0x02
EventScript_JP_08223598: @ 0x08223598
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2237C1
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x000A, 0x0001
	waitdooranim
	call EventScript_JP_082235C7
	closedoor 0x000A, 0x0001
	waitdooranim
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x06
	.byte 0xFF
	.2byte 0x0001
	.2byte 0x0006
	.byte 0x27, 0x6B, 0x02
EventScript_JP_082235C7: @ 0x082235C7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_OutsideEast_Movement_WalkUp_SetInvisible
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_OutsideEast_Movement_WalkUpX2_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	return
	.byte 0x4F, 0x01, 0x00, 0x09, 0x36, 0x22, 0x08, 0x4F, 0xFF, 0x00, 0x01, 0x36, 0x22, 0x08, 0x51, 0x00
	.byte 0x00, 0x03, 0x4F, 0x01, 0x00, 0x09, 0x36, 0x22, 0x08, 0x4F, 0xFF, 0x00, 0x05, 0x36, 0x22, 0x08
	.byte 0x51, 0x00, 0x00, 0x03
BattleFrontier_OutsideEast_Movement_WalkUpX2_SetInvisible: @ 0x082235FD
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
	.globl BattleFrontier_OutsideEast_Movement_WalkRight_WalkUp_SetInvisible
BattleFrontier_OutsideEast_Movement_WalkRight_WalkUp_SetInvisible: @ 0x08223601
	.byte 0x0B, 0x09, 0x54, 0xFE
	.globl BattleFrontier_OutsideEast_Movement_WalkLeft_WalkUp_SetInvisible
BattleFrontier_OutsideEast_Movement_WalkLeft_WalkUp_SetInvisible: @ 0x08223605
	.byte 0x0A, 0x09, 0x54, 0xFE
BattleFrontier_OutsideEast_Movement_WalkUp_SetInvisible: @ 0x08223609
	@ object movement sequence
	walk_up
	set_invisible
	step_end
.globl EventScript_JP_0822360C
EventScript_JP_0822360C: @ 0x0822360C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x4002, 0x0000
	goto EventScript_JP_08223619
	.byte 0x02
EventScript_JP_08223619: @ 0x08223619
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x0152
	goto_if 0x01, EventScript_JP_082236A6
	setvar 0x8004, 0x000B
	setvar 0x8005, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	waitmessage
	waitbuttonpress
	setvar 0x8004, 0x000B
	setvar 0x8005, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	waitmessage
	waitbuttonpress
	setvar 0x8004, 0x000B
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082236A6
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_082236A6
	setvar 0x8004, 0x000B
	setvar 0x8005, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	waitmessage
	waitbuttonpress
	closemessage
	compare_var_to_value 0x800C, 0x0001
	call_if 0x05, EventScript_JP_082236B7
	compare_var_to_value 0x800C, 0x0001
	call_if 0x01, EventScript_JP_082236C2
	@ event command: removeobject
	removeobject 0x800F
	setflag 0x0152
	@ event command: warpsilent
	.byte 0x3A
	.byte 0x1A
	.byte 0x0F
	.byte 0xFF
	.2byte 0x000A
	.2byte 0x0003
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082236A6: @ 0x082236A6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000B
	setvar 0x8005, 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	waitmessage
	waitbuttonpress
	release
	end
EventScript_JP_082236B7: @ 0x082236B7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, BattleFrontier_OutsideEast_Movement_WalkFastUpX7
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_082236C2: @ 0x082236C2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, BattleFrontier_OutsideEast_Movement_WalkFastLeft_WalkFastUpX7
	@ event command: waitmovement
	waitmovement 0x0000
	return
BattleFrontier_OutsideEast_Movement_WalkFastUpX7: @ 0x082236CD
	@ object movement sequence
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end
BattleFrontier_OutsideEast_Movement_WalkFastLeft_WalkFastUpX7: @ 0x082236D5
	@ object movement sequence
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end
.globl EventScript_JP_082236DE
EventScript_JP_082236DE: @ 0x082236DE
	lock
	faceplayer
	setvar 0x4002, 0x0001
	goto EventScript_JP_08223619
	.byte 0x02
.globl EventScript_JP_082236EB
EventScript_JP_082236EB: @ 0x082236EB
	lock
	faceplayer
	setvar 0x4002, 0x0002
	goto EventScript_JP_08223619
	.byte 0x02
.globl EventScript_JP_082236F8
EventScript_JP_082236F8: @ 0x082236F8
	lock
	faceplayer
	setvar 0x4002, 0x0003
	goto EventScript_JP_08223619
	.byte 0x02
.globl EventScript_JP_08223705
EventScript_JP_08223705: @ 0x08223705
	lock
	faceplayer
	setvar 0x4002, 0x0004
	goto EventScript_JP_08223619
	.byte 0x02
.globl EventScript_JP_08223712
EventScript_JP_08223712: @ 0x08223712
	lock
	faceplayer
	setvar 0x4002, 0x0005
	goto EventScript_JP_08223619
	.byte 0x02
.globl EventScript_JP_0822371F
EventScript_JP_0822371F: @ 0x0822371F
	lock
	faceplayer
	setvar 0x4002, 0x0006
	goto EventScript_JP_08223619
	.byte 0x02
.globl EventScript_JP_0822372C
EventScript_JP_0822372C: @ 0x0822372C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x4002, 0x0007
	goto EventScript_JP_08223619
	.byte 0x02
