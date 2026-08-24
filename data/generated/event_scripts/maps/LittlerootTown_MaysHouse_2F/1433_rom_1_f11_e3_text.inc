	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:404 RivalsHouse_2F_Text_BrendanWhereShouldIGoNext
	.globl gText_Rom_1F11E3
gText_Rom_1F11E3: @ 0x081F11E3
	.string "ユウキ『こんどは どこで\nポケモン つかまえるか なやむな……\pもし ポケモン つかまえているとき\n{PLAYER}と であったら\lしょうぶ してやろうか?{EOS}"
	.if (. - gText_Rom_1F11E3) > 0x49
	.error "gText_Rom_1F11E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F11E3) < 0x49
	.space 0x49 - (. - gText_Rom_1F11E3)
	.endif
	@ ANALYSIS: SOURCE_RANGE offset=0x1F122C, size=0x845
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LittlerootTown_ProfessorBirchsLab_OnTransition_OnWarpIntoMap_OnFrame: @ 0x081F122C
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F123C
	.byte 0x04
	.4byte gMapScriptConditionTable_LittlerootTown_ProfessorBirchsLab_OnWarpIntoMap
	.byte 0x02
	.4byte gMapScriptConditionTable_LittlerootTown_ProfessorBirchsLab_OnFrame
	.byte 0
EventScript_JP_081F123C: @ 0x081F123C
	call 0x08242F63
	call 0x08243139
	compare_var_to_value 0x40D3, 0x0006
	goto_if 0x04, EventScript_JP_081F1292
	compare_var_to_value 0x40D3, 0x0004
	goto_if 0x04, EventScript_JP_081F128E
	compare_var_to_value 0x40D3, 0x0003
	goto_if 0x01, EventScript_JP_081F1268
	end
EventScript_JP_081F1268: @ 0x081F1268
	specialvar_ 0x800D, 0x014E
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F1284
	setobjectmovementtype 0x0003, 0x03
	setobjectxyperm 0x0003, 0x0005, 0x000A
	end
EventScript_JP_081F1284: @ 0x081F1284
	setvar 0x40D3, 0x0004
	goto EventScript_JP_081F128E
EventScript_JP_081F128E: @ 0x081F128E
	setmaplayoutindex 0x01B0
	end
EventScript_JP_081F1292: @ 0x081F1292
	setmaplayoutindex 0x01B0
	setobjectmovementtype 0x0003, 0x03
	setobjectxyperm 0x0003, 0x0005, 0x000A
	end
gMapScriptConditionTable_LittlerootTown_ProfessorBirchsLab_OnWarpIntoMap: @ 0x081F12A1
	@ conditional map script table
	.2byte 0x4084, 0x0002
	.4byte EventScript_JP_081F12DB
	.2byte 0x40D3, 0x0001
	.4byte EventScript_JP_081F12E0
	.2byte 0x40D3, 0x0002
	.4byte EventScript_JP_081F12E0
	.2byte 0x40D3, 0x0003
	.4byte EventScript_JP_081F130C
	.2byte 0x40D3, 0x0006
	.4byte EventScript_JP_081F130C
	.2byte 0x40D3, 0x0004
	.4byte EventScript_JP_081F1310
	.2byte 0x40D3, 0x0005
	.4byte EventScript_JP_081F1310
	.2byte 0
EventScript_JP_081F12DB: @ 0x081F12DB
	turnobject 0x00FF, 0x02
	end
EventScript_JP_081F12E0: @ 0x081F12E0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	turnobject 0x00FF, 0x02
	@ event command: addobject
	addobject 0x0002
	@ event command: addobject
	addobject 0x0003
	turnobject 0x0003, 0x02
	setobjectxy 0x0003, 0x0005, 0x0005
	turnobject 0x0002, 0x01
	setobjectxy 0x0002, 0x0006, 0x0004
	turnobject 0x0001, 0x04
	setobjectxy 0x0001, 0x000A, 0x000A
	end
EventScript_JP_081F130C: @ 0x081F130C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: addobject
	addobject 0x0003
	end
EventScript_JP_081F1310: @ 0x081F1310
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: addobject
	addobject 0x0004
	@ event command: addobject
	addobject 0x0005
	@ event command: addobject
	addobject 0x0006
	@ event command: addobject
	addobject 0x0003
	turnobject 0x0004, 0x01
	setobjectxy 0x0004, 0x0008, 0x0004
	turnobject 0x0005, 0x01
	setobjectxy 0x0005, 0x0009, 0x0004
	turnobject 0x0006, 0x01
	setobjectxy 0x0006, 0x000A, 0x0004
	turnobject 0x0002, 0x01
	setobjectxy 0x0002, 0x0006, 0x0004
	turnobject 0x0003, 0x04
	setobjectxy 0x0003, 0x0005, 0x0005
	end
gMapScriptConditionTable_LittlerootTown_ProfessorBirchsLab_OnFrame: @ 0x081F1354
	@ conditional map script table
	.2byte 0x4084, 0x0002
	.4byte EventScript_JP_081F1376
	.2byte 0x4084, 0x0004
	.4byte EventScript_JP_081F1402
	.2byte 0x40D3, 0x0001
	.4byte EventScript_JP_081F141B
	.2byte 0x40D3, 0x0004
	.4byte EventScript_JP_081F14FD
	.2byte 0
EventScript_JP_081F1376: @ 0x081F1376
	lockall
	bufferleadmonspeciesname 0x00
	message gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
	waitmessage
	playfanfare 0x0172
	waitfanfare
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F13A2
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F13B2
	end
EventScript_JP_081F13A2: @ 0x081F13A2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	call 0x08243460
	goto EventScript_JP_081F13B2
	.byte 0x02
EventScript_JP_081F13B2: @ 0x081F13B2
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F13D1
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F13E3
	end
EventScript_JP_081F13D1: @ 0x081F13D1
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou
	callstd 0x04
	clearflag 0x03DF
	setvar 0x4084, 0x0003
	releaseall
	end
EventScript_JP_081F13E3: @ 0x081F13E3
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F13D1
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F13E3
	end
EventScript_JP_081F1402: @ 0x081F1402
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX7_1
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081F1893
	.byte 0x02
LittlerootTown_MaysHouse_2F_Movement_WalkUpX7_1: @ 0x081F1413
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
EventScript_JP_081F141B: @ 0x081F141B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	delay 0x001E
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_WalkLeft_WalkInPlaceFastestDown_Delay16X2_WalkRight_Then17Actions_WalkDownX4_WalkRightX3_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x0014
	playse 0x0024
	delay 0x000A
	playse 0x0024
	delay 0x000A
	playse 0x0024
	delay 0x000A
	playse 0x0024
	delay 0x0014
	@ event command: applymovement
	applymovement 0x0003, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081F14CD
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081F14D7
	playse 0x0004
	waitse
	delay 0x0014
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_WalkLeftX3_WalkUpX4_WalkLeft_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0003, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone
	callstd 0x04
	playfanfare 0x0172
	message gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
	waitmessage
	waitfanfare
	setflag 0x0896
	@ event command: special
	special EnableNationalPokedex
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2
	callstd 0x04
	closemessage
	setflag 0x031B
	setflag 0x031A
	setvar 0x40D3, 0x0002
	setvar 0x40F5, 0x0000
	setflag 0x0072
	releaseall
	end
EventScript_JP_081F14CD: @ 0x081F14CD
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool
	callstd 0x04
	closemessage
	return
EventScript_JP_081F14D7: @ 0x081F14D7
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe
	callstd 0x04
	closemessage
	return
LittlerootTown_MaysHouse_2F_Movement_WalkLeft_WalkInPlaceFastestDown_Delay16X2_WalkRight_Then17Actions_WalkDownX4_WalkRightX3_WalkInPlaceFastestUp: @ 0x081F14E1
	@ object movement sequence
	walk_left
	walk_in_place_fastest_down
	delay_16
	delay_16
	walk_right
	walk_in_place_fastest_down
	delay_16
	delay_16
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkLeftX3_WalkUpX4_WalkLeft_WalkInPlaceFastestDown: @ 0x081F14F3
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_in_place_fastest_down
	step_end
EventScript_JP_081F14FD: @ 0x081F14FD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX7_2
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon
	callstd 0x04
	setvar 0x40D3, 0x0005
	releaseall
	end
LittlerootTown_MaysHouse_2F_Movement_WalkUpX7_2: @ 0x081F1517
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
.globl EventScript_JP_081F151F
EventScript_JP_081F151F: @ 0x081F151F
	lock
	faceplayer
	compare_var_to_value 0x4084, 0x0003
	goto_if 0x04, EventScript_JP_081F154C
	checkflag 0x0058
	goto_if 0x01, EventScript_JP_081F1542
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork
	callstd 0x04
	setflag 0x0058
	release
	end
EventScript_JP_081F1542: @ 0x081F1542
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork
	callstd 0x04
	release
	end
EventScript_JP_081F154C: @ 0x081F154C
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo
	callstd 0x04
	release
	end
.globl EventScript_JP_081F1556
EventScript_JP_081F1556: @ 0x081F1556
	release
	compare_var_to_value 0x40D3, 0x0006
	goto_if 0x04, EventScript_JP_081F15F2
	@ event command: applymovement
	applymovement 0x0002, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	drawmonpic 0x009B, 0x0A, 0x03
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F15FC
	goto EventScript_JP_081F1607
	.byte 0x02
.globl EventScript_JP_081F158A
EventScript_JP_081F158A: @ 0x081F158A
	release
	compare_var_to_value 0x40D3, 0x0006
	goto_if 0x04, EventScript_JP_081F15F2
	@ event command: applymovement
	applymovement 0x0002, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	drawmonpic 0x009E, 0x0A, 0x03
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F15FC
	goto EventScript_JP_081F16A8
	.byte 0x02
.globl EventScript_JP_081F15BE
EventScript_JP_081F15BE: @ 0x081F15BE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	release
	compare_var_to_value 0x40D3, 0x0006
	goto_if 0x04, EventScript_JP_081F15F2
	@ event command: applymovement
	applymovement 0x0002, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	drawmonpic 0x0098, 0x0A, 0x03
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F15FC
	goto EventScript_JP_081F1749
	.byte 0x02
EventScript_JP_081F15F2: @ 0x081F15F2
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone
	callstd 0x04
	releaseall
	end
EventScript_JP_081F15FC: @ 0x081F15FC
	erasemonpic
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable
	callstd 0x04
	releaseall
	end
EventScript_JP_081F1607: @ 0x081F1607
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferspeciesname 0x00, 0x009B
	setvar 0x4001, 0x009B
	givemon 0x009B, 0x05, 0x0000, 0x00000000, 0x00000000, 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F163C
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F1667
	erasemonpic
	goto 0x0824423B
	.byte 0x02
EventScript_JP_081F163C: @ 0x081F163C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_081F17EA
	@ event command: removeobject
	removeobject 0x0004
	loadword 0x00, gText_NicknameThisPokemon
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F1698
	call 0x082441B5
	call 0x08243460
	goto EventScript_JP_081F1698
	.byte 0x02
EventScript_JP_081F1667: @ 0x081F1667
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_081F17EA
	@ event command: removeobject
	removeobject 0x0004
	loadword 0x00, gText_NicknameThisPokemon
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F168D
	call 0x082441C1
	goto EventScript_JP_081F168D
	.byte 0x02
EventScript_JP_081F168D: @ 0x081F168D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call 0x082441CA
	goto EventScript_JP_081F1698
	.byte 0x02
EventScript_JP_081F1698: @ 0x081F1698
	erasemonpic
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting
	callstd 0x04
	setvar 0x40D3, 0x0006
	releaseall
	end
EventScript_JP_081F16A8: @ 0x081F16A8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferspeciesname 0x00, 0x009E
	setvar 0x4001, 0x009E
	givemon 0x009E, 0x05, 0x0000, 0x00000000, 0x00000000, 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F16DD
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F1708
	erasemonpic
	goto 0x0824423B
	.byte 0x02
EventScript_JP_081F16DD: @ 0x081F16DD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_081F17EA
	@ event command: removeobject
	removeobject 0x0005
	loadword 0x00, gText_NicknameThisPokemon
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F1739
	call 0x082441B5
	call 0x08243460
	goto EventScript_JP_081F1739
	.byte 0x02
EventScript_JP_081F1708: @ 0x081F1708
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_081F17EA
	@ event command: removeobject
	removeobject 0x0005
	loadword 0x00, gText_NicknameThisPokemon
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F172E
	call 0x082441C1
	goto EventScript_JP_081F172E
	.byte 0x02
EventScript_JP_081F172E: @ 0x081F172E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call 0x082441CA
	goto EventScript_JP_081F1739
	.byte 0x02
EventScript_JP_081F1739: @ 0x081F1739
	erasemonpic
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting
	callstd 0x04
	setvar 0x40D3, 0x0006
	releaseall
	end
EventScript_JP_081F1749: @ 0x081F1749
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferspeciesname 0x00, 0x0098
	setvar 0x4001, 0x0098
	givemon 0x0098, 0x05, 0x0000, 0x00000000, 0x00000000, 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F177E
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F17A9
	erasemonpic
	goto 0x0824423B
	.byte 0x02
EventScript_JP_081F177E: @ 0x081F177E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_081F17EA
	@ event command: removeobject
	removeobject 0x0006
	loadword 0x00, gText_NicknameThisPokemon
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F17DA
	call 0x082441B5
	call 0x08243460
	goto EventScript_JP_081F17DA
	.byte 0x02
EventScript_JP_081F17A9: @ 0x081F17A9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_081F17EA
	@ event command: removeobject
	removeobject 0x0006
	loadword 0x00, gText_NicknameThisPokemon
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F17CF
	call 0x082441C1
	goto EventScript_JP_081F17CF
	.byte 0x02
EventScript_JP_081F17CF: @ 0x081F17CF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call 0x082441CA
	goto EventScript_JP_081F17DA
	.byte 0x02
EventScript_JP_081F17DA: @ 0x081F17DA
	erasemonpic
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting
	callstd 0x04
	setvar 0x40D3, 0x0006
	releaseall
	end
EventScript_JP_081F17EA: @ 0x081F17EA
	playfanfare 0x0172
	message gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
	waitmessage
	waitfanfare
	return
.globl EventScript_JP_081F17F5
EventScript_JP_081F17F5: @ 0x081F17F5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	compare_var_to_value 0x40D3, 0x0005
	goto_if 0x01, EventScript_JP_081F1825
	compare_var_to_value 0x40D3, 0x0002
	goto_if 0x01, EventScript_JP_081F182F
	checkflag 0x012F
	goto_if 0x00, EventScript_JP_081F1839
	checkflag 0x0119
	goto_if 0x00, EventScript_JP_081F186D
	goto EventScript_JP_081F1839
	.byte 0x02
EventScript_JP_081F1825: @ 0x081F1825
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon
	callstd 0x04
	release
	end
EventScript_JP_081F182F: @ 0x081F182F
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2
	callstd 0x04
	release
	end
EventScript_JP_081F1839: @ 0x081F1839
	checkflag 0x0380
	goto_if 0x00, 0x082431CD
	compare_var_to_value 0x40D3, 0x0003
	goto_if 0x01, 0x082431CD
	compare_var_to_value 0x40D3, 0x0006
	goto_if 0x04, 0x082431CD
	compare_var_to_value 0x4084, 0x0005
	goto_if 0x01, EventScript_JP_081F195F
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome
	callstd 0x04
	release
	end
EventScript_JP_081F186D: @ 0x081F186D
	loadword 0x00, gText_Rom_26C1AF
	callstd 0x04
	closemessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, gText_Rom_26C23E
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x0119
	setvar 0x40DA, 0x0002
	release
	end
EventScript_JP_081F1893: @ 0x081F1893
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex
	callstd 0x04
	call EventScript_JP_081F1947
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0003, LittlerootTown_MaysHouse_2F_Movement_WalkDown_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081F18ED
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081F191A
	setvar 0x4084, 0x0005
	setflag 0x0074
	setvar 0x4051, 0x0001
	setvar 0x408D, 0x0004
	setvar 0x4050, 0x0003
	releaseall
	end
EventScript_JP_081F18ED: @ 0x081F18ED
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese
	callstd 0x04
	setorcopyvar 0x8000, 0x0004
	setorcopyvar 0x8001, 0x0005
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081F1969
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls
	callstd 0x04
	setvar 0x800D, 0x0000
	return
EventScript_JP_081F191A: @ 0x081F191A
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese
	callstd 0x04
	setorcopyvar 0x8000, 0x0004
	setorcopyvar 0x8001, 0x0005
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081F1972
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls
	callstd 0x04
	setvar 0x800D, 0x0001
	return
EventScript_JP_081F1947: @ 0x081F1947
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	playfanfare 0x0172
	message gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
	waitfanfare
	setflag 0x0861
	@ event command: special
	special SetUnlockedPokedexFlags
	setflag 0x08E4
	setvar 0x40CD, 0x0001
	return
EventScript_JP_081F195F: @ 0x081F195F
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait
	callstd 0x04
	release
	end
EventScript_JP_081F1969: @ 0x081F1969
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull
	callstd 0x04
	return
EventScript_JP_081F1972: @ 0x081F1972
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull
	callstd 0x04
	return
LittlerootTown_MaysHouse_2F_Movement_WalkDown_WalkInPlaceFastestLeft: @ 0x081F197B
	@ object movement sequence
	walk_down
	walk_in_place_fastest_left
	step_end
.globl EventScript_JP_081F197E
EventScript_JP_081F197E: @ 0x081F197E
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine
	callstd 0x03
	end
.globl EventScript_JP_081F1987
EventScript_JP_081F1987: @ 0x081F1987
	lock
	faceplayer
	compare_var_to_value 0x40D3, 0x0005
	goto_if 0x01, EventScript_JP_081F19D5
	compare_var_to_value 0x40D3, 0x0006
	goto_if 0x04, EventScript_JP_081F1A00
	compare_var_to_value 0x40D3, 0x0002
	goto_if 0x04, EventScript_JP_081F1A2B
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081F19C3
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081F19CC
	release
	end
EventScript_JP_081F19C3: @ 0x081F19C3
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext
	callstd 0x04
	return
EventScript_JP_081F19CC: @ 0x081F19CC
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext
	callstd 0x04
	return
EventScript_JP_081F19D5: @ 0x081F19D5
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081F19EE
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081F19F7
	release
	end
EventScript_JP_081F19EE: @ 0x081F19EE
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchInLab
	callstd 0x04
	return
EventScript_JP_081F19F7: @ 0x081F19F7
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly
	callstd 0x04
	return
EventScript_JP_081F1A00: @ 0x081F1A00
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081F1A19
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081F1A22
	release
	end
EventScript_JP_081F1A19: @ 0x081F1A19
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier
	callstd 0x04
	return
EventScript_JP_081F1A22: @ 0x081F1A22
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier
	callstd 0x04
	return
EventScript_JP_081F1A2B: @ 0x081F1A2B
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081F1A44
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081F1A4D
	release
	end
EventScript_JP_081F1A44: @ 0x081F1A44
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork
	callstd 0x04
	return
EventScript_JP_081F1A4D: @ 0x081F1A4D
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork
	callstd 0x04
	return
.globl EventScript_JP_081F1A56
EventScript_JP_081F1A56: @ 0x081F1A56
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch
	callstd 0x03
	end
.globl EventScript_JP_081F1A5F
EventScript_JP_081F1A5F: @ 0x081F1A5F
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon
	callstd 0x03
	end
.globl EventScript_JP_081F1A68
EventScript_JP_081F1A68: @ 0x081F1A68
	loadword 0x00, gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead
	callstd 0x03
	end
	.include "data/text/maps/birch_lab.inc"

	@ ANALYSIS: SOURCE_RANGE offset=0x1F28D3, size=0xFB3D
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
.globl EventScript_JP_081F28D4
EventScript_JP_081F28D4: @ 0x081F28D4
	loadword 0x00, EventText_JP_081F28DD
	callstd 0x02
	end
EventText_JP_081F28DD: @ 0x081F28DD
	.string "ポケモンしょうぶの　とき\nポケモンの　リストの　ひだりに　いる\lポケモンが　とびだして　たたかうの\pだから　つれあるく　ポケモンが　ふえてきたら\nポケモンの　じゅんばんを　かえると\lしょうぶが　ゆうりに　なるかも!{EOS}"
	.byte 0x00
.globl EventScript_JP_081F294A
EventScript_JP_081F294A: @ 0x081F294A
	loadword 0x00, EventText_JP_081F295C
	callstd 0x02
	end
.globl EventScript_JP_081F2953
EventScript_JP_081F2953: @ 0x081F2953
	loadword 0x00, EventText_JP_081F297B
	callstd 0x02
	end
EventText_JP_081F295C: @ 0x081F295C
	.string "ポケモンって　たたかうと\nレベルアップして　つよくなるのよ!{EOS}"
EventText_JP_081F297B: @ 0x081F297B
	.string "つれて　あるく　ポケモンが　つよかったら\nとおくまで　いけるように　なるね!{EOS}"
gMapScriptDispatch_OldaleTown_PokemonCenter_1F_OnTransition_OnResume: @ 0x081F29A2
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F29AD
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_081F29AD: @ 0x081F29AD
	setrespawn 0x000E
	call 0x08242978
	end
.globl EventScript_JP_081F29B6
EventScript_JP_081F29B6: @ 0x081F29B6
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_081F29C4
EventScript_JP_081F29C4: @ 0x081F29C4
	loadword 0x00, EventText_JP_081F29F5
	callstd 0x02
	end
.globl EventScript_JP_081F29CD
EventScript_JP_081F29CD: @ 0x081F29CD
	loadword 0x00, EventText_JP_081F2A31
	callstd 0x02
	end
.globl EventScript_JP_081F29D6
EventScript_JP_081F29D6: @ 0x081F29D6
	lock
	faceplayer
	checkflag 0x0861
	goto_if 0x01, EventScript_JP_081F29EB
	loadword 0x00, EventText_JP_081F2A73
	callstd 0x04
	release
	end
EventScript_JP_081F29EB: @ 0x081F29EB
	loadword 0x00, EventText_JP_081F2AA9
	callstd 0x04
	release
	end
EventText_JP_081F29F5: @ 0x081F29F5
	.string "すみっこに　おいてある　パソコンは\nポケモントレーナーの　ための　ものなんだ\pきみも　じゆうに　つかって　いいんだよ!{EOS}"
EventText_JP_081F2A31: @ 0x081F2A31
	.string "ポケモンセンターって　すごいよな!\pポケモン　なんびき　あずけても\nおかねが　かからないから\lどんな　ときでも　あんしん　だよね!{EOS}"
EventText_JP_081F2A73: @ 0x081F2A73
	.string "2かいの　ポケモン　ワイヤレス　クラブは\nつい　さいきん　できたの\pでも　まだ\nちょうせいちゅう　ですって{EOS}"
EventText_JP_081F2AA9: @ 0x081F2AA9
	.string "2かいの　ポケモン　ワイヤレス　クラブは\nつい　さいきん　できたの\pあたし　さっそく\nポケモンこうかん　しちゃった!{EOS}"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
.globl EventScript_JP_081F2B0C
EventScript_JP_081F2B0C: @ 0x081F2B0C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	checkflag 0x0074
	goto_if 0x01, EventScript_JP_081F2B38
	pokemart 0x081F2B2C
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x0D, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081F2B38: @ 0x081F2B38
	pokemart 0x081F2B48
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x04, 0x00, 0x0D, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_081F2B56
EventScript_JP_081F2B56: @ 0x081F2B56
	lock
	faceplayer
	checkflag 0x0074
	goto_if 0x01, EventScript_JP_081F2B6B
	loadword 0x00, EventText_JP_081F2B7E
	callstd 0x04
	release
	end
EventScript_JP_081F2B6B: @ 0x081F2B6B
	loadword 0x00, EventText_JP_081F2B9E
	callstd 0x04
	release
	end
.globl EventScript_JP_081F2B75
EventScript_JP_081F2B75: @ 0x081F2B75
	loadword 0x00, EventText_JP_081F2BC5
	callstd 0x02
	end
EventText_JP_081F2B7E: @ 0x081F2B7E
	.string "なんでも　うりきれ　らしくて\nモンスターボール　かえないの……{EOS}"
EventText_JP_081F2B9E: @ 0x081F2B9E
	.string "どんどん　モンスターボール　かって\nどんどん　ポケモン　つかまえちゃうわよ!{EOS}"
EventText_JP_081F2BC5: @ 0x081F2BC5
	.string "ポケモンは　たいりょくが　なくなると\nたたかう　げんきも　なくなる\pそんな　ときは　キズぐすりを　つかって\nたいりょくを　かいふく　してあげるんだ!{EOS}"
	.byte 0x00
.globl EventScript_JP_081F2C11
EventScript_JP_081F2C11: @ 0x081F2C11
	loadword 0x00, EventText_JP_081F2C36
	callstd 0x02
	end
.globl EventScript_JP_081F2C1A
EventScript_JP_081F2C1A: @ 0x081F2C1A
	loadword 0x00, EventText_JP_081F2C67
	callstd 0x02
	end
.globl EventScript_JP_081F2C23
EventScript_JP_081F2C23: @ 0x081F2C23
	lock
	faceplayer
	waitse
	playmoncry 0x0120, 0x0000
	loadword 0x00, EventText_JP_081F2CC4
	callstd 0x04
	waitmoncry
	release
	end
EventText_JP_081F2C36: @ 0x081F2C36
	.string "こういう　ちいさな　しまで\nポケモンと　かぞく　なかよく　くらすのも\lなかなか　いい　もんですよ{EOS}"
EventText_JP_081F2C67: @ 0x081F2C67
	.string "わたしは　カイナシティ　という\nおおきな　みなとまち　から\lおよめさんに　きたのよ\pのんびりとした　しま　だけれど\nきれいな　うみに　かこまれて　いれば\lそれだけで　しあわせ　なんだね{EOS}"
EventText_JP_081F2CC4: @ 0x081F2CC4
	.string "ジグザグマ“ぐぐう!{EOS}"
gMapScriptDispatch_DewfordTown_PokemonCenter_1F_OnTransition_OnResume: @ 0x081F2CCF
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F2CDA
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_081F2CDA: @ 0x081F2CDA
	setrespawn 0x000F
	call 0x08242978
	end
.globl EventScript_JP_081F2CE3
EventScript_JP_081F2CE3: @ 0x081F2CE3
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_081F2CF1
EventScript_JP_081F2CF1: @ 0x081F2CF1
	loadword 0x00, EventText_JP_081F2D03
	callstd 0x02
	end
.globl EventScript_JP_081F2CFA
EventScript_JP_081F2CFA: @ 0x081F2CFA
	loadword 0x00, EventText_JP_081F2D2B
	callstd 0x02
	end
EventText_JP_081F2D03: @ 0x081F2D03
	.string "まちの　はずれの　いしのどうくつ　には\nめずらしい　いしが　あるって　きいたわ{EOS}"
EventText_JP_081F2D2B: @ 0x081F2D2B
	.string "つかれて　たたかうことの　できない\nポケモンだって　ひでんと　いわれる\lわざは　つかうことが　できるよ!{EOS}"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02
gMapScriptDispatch_DewfordTown_Gym_OnTransition: @ 0x081F2D87
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F2D8D
	.byte 0
EventScript_JP_081F2D8D: @ 0x081F2D8D
	call EventScript_JP_081F2D93
	end
EventScript_JP_081F2D93: @ 0x081F2D93
	checktrainerflag 0x010A
	goto_if 0x01, EventScript_JP_081F2DED
	call EventScript_JP_081F2EB3
	copyvar 0x8001, 0x8000
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F2E09
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F2E05
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F2E01
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081F2DFD
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081F2DF9
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_081F2DF5
	goto EventScript_JP_081F2DF1
EventScript_JP_081F2DED: @ 0x081F2DED
	setflashradius 0x0000
	return
EventScript_JP_081F2DF1: @ 0x081F2DF1
	setflashradius 0x0001
	return
EventScript_JP_081F2DF5: @ 0x081F2DF5
	setflashradius 0x0002
	return
EventScript_JP_081F2DF9: @ 0x081F2DF9
	setflashradius 0x0003
	return
EventScript_JP_081F2DFD: @ 0x081F2DFD
	setflashradius 0x0004
	return
EventScript_JP_081F2E01: @ 0x081F2E01
	setflashradius 0x0005
	return
EventScript_JP_081F2E05: @ 0x081F2E05
	setflashradius 0x0006
	return
EventScript_JP_081F2E09: @ 0x081F2E09
	setflashradius 0x0007
	return
EventScript_JP_081F2E0D: @ 0x081F2E0D
	call EventScript_JP_081F2EB3
	nop1
	compare_var_to_var 0x8000, 0x8001
	goto_if 0x01, EventScript_JP_081F2E65
	copyvar 0x8001, 0x8000
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F2E66
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F2E71
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081F2E7C
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081F2E87
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_081F2E92
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_081F2E9D
EventScript_JP_081F2E65: @ 0x081F2E65
	return
EventScript_JP_081F2E66: @ 0x081F2E66
	playse 0x0023
	animateflash 0x06
	call EventScript_JP_081F2D93
	return
EventScript_JP_081F2E71: @ 0x081F2E71
	playse 0x0023
	animateflash 0x05
	call EventScript_JP_081F2D93
	return
EventScript_JP_081F2E7C: @ 0x081F2E7C
	playse 0x0023
	animateflash 0x04
	call EventScript_JP_081F2D93
	return
EventScript_JP_081F2E87: @ 0x081F2E87
	playse 0x0023
	animateflash 0x03
	call EventScript_JP_081F2D93
	return
EventScript_JP_081F2E92: @ 0x081F2E92
	playse 0x0023
	animateflash 0x02
	call EventScript_JP_081F2D93
	return
EventScript_JP_081F2E9D: @ 0x081F2E9D
	playse 0x0023
	animateflash 0x01
	call EventScript_JP_081F2D93
	return
EventScript_JP_081F2EA8: @ 0x081F2EA8
	playse 0x0023
	animateflash 0x00
	call EventScript_JP_081F2D93
	return
EventScript_JP_081F2EB3: @ 0x081F2EB3
	setvar 0x8000, 0x0000
	checktrainerflag 0x00B3
	goto_if 0x00, EventScript_JP_081F2EC6
	addvar 0x8000, 0x0001
EventScript_JP_081F2EC6: @ 0x081F2EC6
	checktrainerflag 0x01A9
	goto_if 0x00, EventScript_JP_081F2ED4
	addvar 0x8000, 0x0001
EventScript_JP_081F2ED4: @ 0x081F2ED4
	checktrainerflag 0x01AA
	goto_if 0x00, EventScript_JP_081F2EE2
	addvar 0x8000, 0x0001
EventScript_JP_081F2EE2: @ 0x081F2EE2
	checktrainerflag 0x023C
	goto_if 0x00, EventScript_JP_081F2EF0
	addvar 0x8000, 0x0001
EventScript_JP_081F2EF0: @ 0x081F2EF0
	checktrainerflag 0x023E
	goto_if 0x00, EventScript_JP_081F2EFE
	addvar 0x8000, 0x0001
EventScript_JP_081F2EFE: @ 0x081F2EFE
	checktrainerflag 0x023D
	goto_if 0x00, EventScript_JP_081F2F0C
	addvar 0x8000, 0x0001
EventScript_JP_081F2F0C: @ 0x081F2F0C
	return
.globl EventScript_JP_081F2F0D
EventScript_JP_081F2F0D: @ 0x081F2F0D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, 0x010A, 0x0000, EventText_JP_081F342C, EventText_JP_081F34A7, EventScript_JP_081F2F42
	specialvar_ 0x800D, 0x0039
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F2FE7
	checkflag 0x00A6
	goto_if 0x00, EventScript_JP_081F2FC3
	loadword 0x00, EventText_JP_081F35C8
	callstd 0x04
	release
	end
EventScript_JP_081F2F42: @ 0x081F2F42
	call EventScript_JP_081F2EA8
	message EventText_JP_081F34DA
	waitmessage
	call 0x0824310A
	loadword 0x00, EventText_JP_081F34F3
	callstd 0x04
	setflag 0x04F1
	setflag 0x0868
	addvar 0x4085, 0x0001
	compare_var_to_value 0x4085, 0x0006
	call_if 0x01, 0x08242F10
	setvar 0x8008, 0x0002
	call 0x08242FCF
	call EventScript_JP_081F2FA0
	closemessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, EventText_JP_081F35AD
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x01D4
	setvar 0x40F4, 0x0000
	setflag 0x0080
	release
	end
EventScript_JP_081F2FA0: @ 0x081F2FA0
	setorcopyvar 0x8000, 0x0128
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430EA
	loadword 0x00, EventText_JP_081F3568
	callstd 0x04
	setflag 0x00A6
	return
EventScript_JP_081F2FC3: @ 0x081F2FC3
	setorcopyvar 0x8000, 0x0128
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	loadword 0x00, EventText_JP_081F3568
	callstd 0x04
	setflag 0x00A6
	release
	end
EventScript_JP_081F2FE7: @ 0x081F2FE7
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, 0x010A, 0x0000, EventText_JP_081F363A, EventText_JP_081F36A5, EventText_JP_081F36F5
	loadword 0x00, EventText_JP_081F36B9
	callstd 0x06
	end
.globl EventScript_JP_081F3002
EventScript_JP_081F3002: @ 0x081F3002
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x00B3, 0x0000, EventText_JP_081F3212, EventText_JP_081F3227, EventScript_JP_081F301D
	loadword 0x00, EventText_JP_081F3235
	callstd 0x06
	end
EventScript_JP_081F301D: @ 0x081F301D
	call EventScript_JP_081F2E0D
	release
	end
.globl EventScript_JP_081F3024
EventScript_JP_081F3024: @ 0x081F3024
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x01A9, 0x0000, EventText_JP_081F3256, EventText_JP_081F3279, EventScript_JP_081F303F
	loadword 0x00, EventText_JP_081F3292
	callstd 0x06
	end
EventScript_JP_081F303F: @ 0x081F303F
	call EventScript_JP_081F2E0D
	release
	end
.globl EventScript_JP_081F3046
EventScript_JP_081F3046: @ 0x081F3046
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x01AA, 0x0000, EventText_JP_081F32DD, EventText_JP_081F32FC, EventScript_JP_081F3061
	loadword 0x00, EventText_JP_081F330D
	callstd 0x06
	end
EventScript_JP_081F3061: @ 0x081F3061
	call EventScript_JP_081F2E0D
	release
	end
.globl EventScript_JP_081F3068
EventScript_JP_081F3068: @ 0x081F3068
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x023C, 0x0000, EventText_JP_081F3395, EventText_JP_081F33AE, EventScript_JP_081F3083
	loadword 0x00, EventText_JP_081F33C2
	callstd 0x06
	end
EventScript_JP_081F3083: @ 0x081F3083
	call EventScript_JP_081F2E0D
	release
	end
.globl EventScript_JP_081F308A
EventScript_JP_081F308A: @ 0x081F308A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x023E, 0x0000, EventText_JP_081F33E2, EventText_JP_081F33FF, EventScript_JP_081F30A5
	loadword 0x00, EventText_JP_081F3410
	callstd 0x06
	end
EventScript_JP_081F30A5: @ 0x081F30A5
	call EventScript_JP_081F2E0D
	release
	end
.globl EventScript_JP_081F30AC
EventScript_JP_081F30AC: @ 0x081F30AC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x023D, 0x0000, EventText_JP_081F334A, EventText_JP_081F3362, EventScript_JP_081F30C7
	loadword 0x00, EventText_JP_081F336F
	callstd 0x06
	end
EventScript_JP_081F30C7: @ 0x081F30C7
	call EventScript_JP_081F2E0D
	release
	end
.globl EventScript_JP_081F30CE
EventScript_JP_081F30CE: @ 0x081F30CE
	lock
	faceplayer
	checkflag 0x04F1
	goto_if 0x01, EventScript_JP_081F30E3
	loadword 0x00, EventText_JP_081F3121
	callstd 0x04
	release
	end
EventScript_JP_081F30E3: @ 0x081F30E3
	loadword 0x00, EventText_JP_081F31ED
	callstd 0x04
	release
	end
.globl EventScript_JP_081F30ED
EventScript_JP_081F30ED: @ 0x081F30ED
	lockall
	checkflag 0x0868
	goto_if 0x01, EventScript_JP_081F310D
	goto EventScript_JP_081F3117
	.byte 0x02
.globl EventScript_JP_081F30FD
EventScript_JP_081F30FD: @ 0x081F30FD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x0868
	goto_if 0x01, EventScript_JP_081F310D
	goto EventScript_JP_081F3117
	.byte 0x02
EventScript_JP_081F310D: @ 0x081F310D
	loadword 0x00, EventText_JP_081F361A
	callstd 0x04
	releaseall
	end
EventScript_JP_081F3117: @ 0x081F3117
	loadword 0x00, EventText_JP_081F360D
	callstd 0x04
	releaseall
	end
EventText_JP_081F3121: @ 0x081F3121
	.string "げんき　しとぉや!!\nチャンピオンを　めざす　{PLAYER}!!\pムロタウン　ジムの　リーダー　トウキは\nかくとうタイプ　ポケモンの　つかいてだ!\pノーマルタイプで　むかうと\nきびしぃー　いちげきを　くらうから\lきを　つけたほうが　いいぞ!\pしかも!　この　ジムの　なかは\nうみのそこ　みたいに　くらいんだ!\pでも!　トレーナーを　ひとり　たおすごとに\nだんだん　あかるく　なって　いくぞ!\pじゃ　きばってこォー!!{EOS}"
EventText_JP_081F31ED: @ 0x081F31ED
	.string "うおォ!　ずいぶん　あかるく　なったな!\pきみの　みらいも　あかるいぞ!{EOS}"
EventText_JP_081F3212: @ 0x081F3212
	.string "ちから　こそ　せいぎっ!\nドリャーッ!!{EOS}"
EventText_JP_081F3227: @ 0x081F3227
	.string "ちからぶそく　だった……!{EOS}"
EventText_JP_081F3235: @ 0x081F3235
	.string "じゅう　よく　ごうを　せいす!\nみごとな　たたかいぶり　だった!{EOS}"
EventText_JP_081F3256: @ 0x081F3256
	.string "トウキさまと　たたかうまでも　ないわ!\nわたしが　たおして　あげる!{EOS}"
EventText_JP_081F3279: @ 0x081F3279
	.string "まさか……\nこんなに　かんたんに　やられるなんて{EOS}"
EventText_JP_081F3292: @ 0x081F3292
	.string "この　まけを　むだに　しないため\nもっと　とっくん　する!\pそして　いつかは　ジムリーダーに……\pいえ　ポケモンリーグの\nチャンピオンに　なるわよ!{EOS}"
EventText_JP_081F32DD: @ 0x081F32DD
	.string "あたしを　あまく　みない　ことね!\nないても　しらないわよ!{EOS}"
EventText_JP_081F32FC: @ 0x081F32FC
	.string "わぁーーーん!\nまけたーーーっ!{EOS}"
EventText_JP_081F330D: @ 0x081F330D
	.string "くらやみの　なかで　たたかうことで\nこころを　きたえるの\pでも　まっくら　だから\nトウキさまの　おかおを　みられない……{EOS}"
EventText_JP_081F334A: @ 0x081F334A
	.string "うふふ……!\nくらくて　まよっているの　かな?{EOS}"
EventText_JP_081F3362: @ 0x081F3362
	.string "なによ　もう\nしらない!{EOS}"
EventText_JP_081F336F: @ 0x081F336F
	.string "あなた　なんて　このまま　まよって\nいりぐちに　もどっちゃえば　いーのよ!{EOS}"
EventText_JP_081F3395: @ 0x081F3395
	.string "うみの　おとこの　いじを\nみせつけて　やるぜぃ!{EOS}"
EventText_JP_081F33AE: @ 0x081F33AE
	.string "どうしたぃ!\nおれと　した　ことが……{EOS}"
EventText_JP_081F33C2: @ 0x081F33C2
	.string "おう!　あんたなら\nジムリーダーに　いどむに　ふさわしいぜぃ!{EOS}"
EventText_JP_081F33E2: @ 0x081F33E2
	.string "ここを　とおる　なら\nこの　わしを　たおしてから　じゃ!{EOS}"
EventText_JP_081F33FF: @ 0x081F33FF
	.string "むうーん!\nすごく　つよい……!{EOS}"
EventText_JP_081F3410: @ 0x081F3410
	.string "わしの　まけじゃ!\nがんばって　バッジ　とってこいよ!{EOS}"
EventText_JP_081F342C: @ 0x081F342C
	.string "ボクは　ムロ　ポケモンジム\nリーダーの　トウキ!\pこの　あたりの\nはげしい　なみに　もまれ……\pくらい　どうくつで\nしゅぎょう　して　いるのさ!\pボクに　ちょうせん　しよう　という\nキミの　じつりょく……\lどれほどの　ものか　みせて　もらうよ!{EOS}"
EventText_JP_081F34A7: @ 0x081F34A7
	.string "ううーん　よそう　していたより\nキミは　ビッグウェーブ!\pわかった!\nこの　バッジを　もっていきな!{EOS}"
EventText_JP_081F34DA: @ 0x081F34DA
	.string "{PLAYER}は　トウキから\nナックルバッジを　もらった!{EOS}"
EventText_JP_081F34F3: @ 0x081F34F3
	.string "ナックルバッジには\nレベル30までの　ポケモンなら\lひとから　もらった　ポケモンでも\lすなおに　する　こうかが　ある!\pそれに　たたかって　いなくても\nひでんわざの　フラッシュを　つかえる!\pこの　わざマシン\nよかったら　つかいな!{EOS}"
EventText_JP_081F3568: @ 0x081F3568
	.string "その　わざマシン08　には\nビルドアップが　はいっている!\pこうげきりょくと　ぼうぎょりょくを\nあげる　わざ　なのさ!\p……　……　……{EOS}"
EventText_JP_081F35AD: @ 0x081F35AD
	.string "ジムリーダー　トウキを\nポケナビに　とうろく　した!{EOS}"
EventText_JP_081F35C8: @ 0x081F35C8
	.string "キミの　さいのうは\nいつのひか　おおきな　なみと　なって\pポケモン　トレーナーたちの　あいだに\nおどろきの　あらしを　まきおこすだろう!{EOS}"
EventText_JP_081F360D: @ 0x081F360D
	.string "ムロタウン　ポケモンジム{EOS}"
EventText_JP_081F361A: @ 0x081F361A
	.string "ムロタウン　ポケモンジム\pトウキ　にんてい　トレーナー!\n{PLAYER}{EOS}"
EventText_JP_081F363A: @ 0x081F363A
	.string "トウキ“なみというのは　いちど　ひいても\nいつか　かならず　はまべに　もどってくる\pキミほどの　ビッグウェーブだ\nきっと　また　くると　おもっていたよ!\pさあ　どれほど　たかさを　ましたのか\nボクに　みせてくれ!{EOS}"
EventText_JP_081F36A5: @ 0x081F36A5
	.string "わーおっ!\nキミに　のみこまれそうだ!{EOS}"
EventText_JP_081F36B9: @ 0x081F36B9
	.string "トウキ“やっぱり　ポケモン　しょうぶは\nそこが　みえないほど　ふかく　ひろい!\lまるで　ホウエンの　うみの　ようだね!{EOS}"
EventText_JP_081F36F5: @ 0x081F36F5
	.string "トウキ“なみというのは　いちど　ひいても\nいつか　かならず　はまべに　もどってくる\pキミほどの　ビッグウェーブだ\nきっと　また　くると　おもっていたよ!\p……あれ?　たたかえる　ポケモンを\n1ひきしか　もっていないんだね\pすまないけど　2ひき　いじょうの\nポケモンを　もって　また　きてくれよ{EOS}"
	.byte 0x00
.globl EventScript_JP_081F3789
EventScript_JP_081F3789: @ 0x081F3789
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	call 0x08242F17
	@ event command: special
	special TrendyPhraseIsOld
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F37A8
	loadword 0x00, EventText_JP_081F3AD1
	callstd 0x04
	release
	end
EventScript_JP_081F37A8: @ 0x081F37A8
	loadword 0x00, EventText_JP_081F3B09
	callstd 0x04
	release
	end
.globl EventScript_JP_081F37B2
EventScript_JP_081F37B2: @ 0x081F37B2
	lock
	faceplayer
	call 0x08242F17
	loadword 0x00, EventText_JP_081F3B4C
	callstd 0x04
	release
	end
.globl EventScript_JP_081F37C3
EventScript_JP_081F37C3: @ 0x081F37C3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	call 0x08242F17
	@ event command: special
	special BufferDeepLinkPhrase
	loadword 0x00, EventText_JP_081F3B7C
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F37EC
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F37F6
	end
EventScript_JP_081F37EC: @ 0x081F37EC
	loadword 0x00, EventText_JP_081F3BC8
	callstd 0x04
	release
	end
EventScript_JP_081F37F6: @ 0x081F37F6
	loadword 0x00, EventText_JP_081F3BF5
	callstd 0x04
	release
	end
.globl EventScript_JP_081F3800
EventScript_JP_081F3800: @ 0x081F3800
	lock
	faceplayer
	call 0x08242F17
	loadword 0x00, EventText_JP_081F3C23
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081F381C
EventScript_JP_081F381C: @ 0x081F381C
	lock
	faceplayer
	call 0x08242F17
	loadword 0x00, EventText_JP_081F3C40
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0005, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_081F3838
EventScript_JP_081F3838: @ 0x081F3838
	lock
	faceplayer
	call 0x08242F17
	loadword 0x00, EventText_JP_081F3C5E
	callstd 0x04
	release
	end
.globl EventScript_JP_081F3849
EventScript_JP_081F3849: @ 0x081F3849
	lockall
	call 0x08242F17
	loadword 0x00, EventText_JP_081F3CBC
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081F3859
EventScript_JP_081F3859: @ 0x081F3859
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	call 0x08242F17
	@ event command: special
	special GetDewfordHallPaintingNameIndex
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F38C0
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081F38C0
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F38CA
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_081F38C0
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F38D4
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_081F38D4
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081F38DE
	compare_var_to_value 0x8000, 0x0007
	goto_if 0x01, EventScript_JP_081F38D4
	end
EventScript_JP_081F38C0: @ 0x081F38C0
	loadword 0x00, EventText_JP_081F3D0D
	callstd 0x04
	releaseall
	end
EventScript_JP_081F38CA: @ 0x081F38CA
	loadword 0x00, EventText_JP_081F3D26
	callstd 0x04
	releaseall
	end
EventScript_JP_081F38D4: @ 0x081F38D4
	loadword 0x00, EventText_JP_081F3D40
	callstd 0x04
	releaseall
	end
EventScript_JP_081F38DE: @ 0x081F38DE
	loadword 0x00, EventText_JP_081F3D59
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081F38E8
EventScript_JP_081F38E8: @ 0x081F38E8
	lockall
	setvar 0x8008, 0x0000
	goto EventScript_JP_081F3900
	.byte 0x02
.globl EventScript_JP_081F38F4
EventScript_JP_081F38F4: @ 0x081F38F4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x8008, 0x0001
	goto EventScript_JP_081F3900
	.byte 0x02
EventScript_JP_081F3900: @ 0x081F3900
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call 0x08242F17
	@ event command: special
	special GetDewfordHallPaintingNameIndex
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F3966
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F3966
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F3982
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081F3982
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081F399E
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_081F399E
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_081F39BA
	compare_var_to_value 0x8000, 0x0007
	goto_if 0x01, EventScript_JP_081F39D6
	end
EventScript_JP_081F3966: @ 0x081F3966
	call EventScript_JP_081F39F3
	loadword 0x00, EventText_JP_081F3D74
	callstd 0x04
	call EventScript_JP_081F3A2B
	loadword 0x00, EventText_JP_081F3DA2
	callstd 0x04
	releaseall
	end
EventScript_JP_081F3982: @ 0x081F3982
	call EventScript_JP_081F39F3
	loadword 0x00, EventText_JP_081F3DF4
	callstd 0x04
	call EventScript_JP_081F3A2B
	loadword 0x00, EventText_JP_081F3E3C
	callstd 0x04
	releaseall
	end
EventScript_JP_081F399E: @ 0x081F399E
	call EventScript_JP_081F39F3
	loadword 0x00, EventText_JP_081F3E61
	callstd 0x04
	call EventScript_JP_081F3A2B
	loadword 0x00, EventText_JP_081F3E8F
	callstd 0x04
	releaseall
	end
EventScript_JP_081F39BA: @ 0x081F39BA
	call EventScript_JP_081F39F3
	loadword 0x00, EventText_JP_081F3ECA
	callstd 0x04
	call EventScript_JP_081F3A2B
	loadword 0x00, EventText_JP_081F3EFD
	callstd 0x04
	releaseall
	end
EventScript_JP_081F39D6: @ 0x081F39D6
	call EventScript_JP_081F39F3
	loadword 0x00, EventText_JP_081F3F3E
	callstd 0x04
	call EventScript_JP_081F3A2B
	loadword 0x00, EventText_JP_081F3F65
	callstd 0x04
	releaseall
	end
EventScript_JP_081F39F2: @ 0x081F39F2
	return
EventScript_JP_081F39F3: @ 0x081F39F3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0008, LittlerootTown_MaysHouse_2F_Movement_WalkInPlaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x8008, 0x0000
	goto_if 0x01, EventScript_JP_081F3A14
	compare_var_to_value 0x8008, 0x0001
	goto_if 0x01, EventScript_JP_081F3A2A
	end
EventScript_JP_081F3A14: @ 0x081F3A14
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x800C, 0x0004
	goto_if 0x01, EventScript_JP_081F39F2
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F3A2A: @ 0x081F3A2A
	return
EventScript_JP_081F3A2B: @ 0x081F3A2B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0007, LittlerootTown_MaysHouse_2F_Movement_WalkInPlaceRight
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x8008, 0x0000
	goto_if 0x01, EventScript_JP_081F3A4C
	compare_var_to_value 0x8008, 0x0001
	goto_if 0x01, EventScript_JP_081F3A79
	end
EventScript_JP_081F3A4C: @ 0x081F3A4C
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081F3A63
	compare_var_to_value 0x800C, 0x0001
	call_if 0x01, EventScript_JP_081F3A6E
	return
EventScript_JP_081F3A63: @ 0x081F3A63
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F3A6E: @ 0x081F3A6E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F3A79: @ 0x081F3A79
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x800C, 0x0003
	goto_if 0x01, EventScript_JP_081F39F2
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
LittlerootTown_MaysHouse_2F_Movement_WalkInPlaceLeft: @ 0x081F3A8F
	@ object movement sequence
	walk_in_place_left
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkInPlaceRight: @ 0x081F3A91
	@ object movement sequence
	walk_in_place_right
	step_end
.globl EventScript_JP_081F3A93
EventScript_JP_081F3A93: @ 0x081F3A93
	lock
	faceplayer
	call 0x08242F17
	checkflag 0x00E6
	goto_if 0x01, EventScript_JP_081F3AC7
	loadword 0x00, EventText_JP_081F3F87
	callstd 0x04
	setorcopyvar 0x8000, 0x0144
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00E6
	release
	end
EventScript_JP_081F3AC7: @ 0x081F3AC7
	loadword 0x00, EventText_JP_081F3FDC
	callstd 0x04
	release
	end
EventText_JP_081F3AD1: @ 0x081F3AD1
	.string "いまの　はやりって　いったら　やっぱり\n‘{STR_VAR_1}’よね!\p‘{STR_VAR_1}’の　ない\nせいかつ　なんか　かんがえられない!{EOS}"
EventText_JP_081F3B09: @ 0x081F3B09
	.string "いまの　はやりって　いったら　やっぱり\n‘{STR_VAR_1}’よね!\pでも　もう　そろそろ\nあきてきたなー\pあたらしい　はやりでも　さがそっかなー{EOS}"
EventText_JP_081F3B4C: @ 0x081F3B4C
	.string "わたしは　ポケモンにも\n‘{STR_VAR_1}’を\lおしえてるんだけど\pこれが　なかなか\nたいへん　なのよねー{EOS}"
EventText_JP_081F3B7C: @ 0x081F3B7C
	.string "いま　はやりの\n‘{STR_VAR_1}’のことを\lしらべてるんだけど\p‘{STR_VAR_1}’と\n‘{STR_VAR_2}’ってのは\pふかい　かんけいが　あるって　いうのは\nほんとうの　ことなのかい?{EOS}"
EventText_JP_081F3BC8: @ 0x081F3BC8
	.string "お!\nやっぱり　そうなのか\pこれで　おじさんも　またいっぽ\nりゅうこうに　ちかづいたぞ!{EOS}"
EventText_JP_081F3BF5: @ 0x081F3BF5
	.string "なに!?\nそうなのか!?\pいやー　おじさんが　りゅうこうに\nついて　いくのは　たいへんだ!{EOS}"
EventText_JP_081F3C23: @ 0x081F3C23
	.string "‘{STR_VAR_1}’の\nテレビって　いうのは\lやってないのかのう……{EOS}"
EventText_JP_081F3C40: @ 0x081F3C40
	.string "うみの　むこうでは\pもっと　‘{STR_VAR_1}’が\nはやってるのかな?{EOS}"
EventText_JP_081F3C5E: @ 0x081F3C5E
	.string "ぼくは　‘{STR_VAR_1}’の\nグッズを　いっぱい　あつめて　いるんだ!\p‘{STR_VAR_1}’にんぎょう\nとか\p‘{STR_VAR_1}’ようふく\p‘{STR_VAR_1}’の　えほん\nなんかも　もってるよ\pいいだろー!\nほしくても　あげないよー{EOS}"
EventText_JP_081F3CBC: @ 0x081F3CBC
	.string "“よい‘{STR_VAR_1}’と\n　わるい‘{STR_VAR_1}’”\p“‘{STR_VAR_1}’と\n　ポケモンの　かんけい”\p“やくにたつ\n　‘{STR_VAR_1}’”\p‘{STR_VAR_1}’に\nついての　ほんが　ずらっと　ならんでいる!{EOS}"
EventText_JP_081F3D0D: @ 0x081F3D0D
	.string "“‘{STR_VAR_1}’の\n　さけび”\pという　だいめい　だ!{EOS}"
EventText_JP_081F3D26: @ 0x081F3D26
	.string "“‘{STR_VAR_1}’の\n　ほほえみ”\pという　だいめい　だ!{EOS}"
EventText_JP_081F3D40: @ 0x081F3D40
	.string "“さいごの\n　‘{STR_VAR_1}’”\pという　だいめい　だ!{EOS}"
EventText_JP_081F3D59: @ 0x081F3D59
	.string "“‘{STR_VAR_1}’の\n　たんじょう”\pという　だいめい　だ!{EOS}"
EventText_JP_081F3D74: @ 0x081F3D74
	.string "ぼく　さいきん　はやりの\p‘{STR_VAR_1}’を\nみたんだ　いいだろ!\pすごかったよ\nほんもの　だぜ!{EOS}"
EventText_JP_081F3DA2: @ 0x081F3DA2
	.string "いや　きみの　みた\n‘{STR_VAR_1}’は\lほんもの　じゃないね!\pほんものは　もっと\nキレが　あるというか\lうつくしい　というか……\pまあ　とにかく\nもっと　すごいんだよ!{EOS}"
EventText_JP_081F3DF4: @ 0x081F3DF4
	.string "ぼく　さいきん　はやってる\n‘{STR_VAR_1}’の\lテーマ　きょくを　かんがえたんだ\lきいてくれよ!\p……\pおー!\n{STR_VAR_1}　ー!\pすばらしい\n{STR_VAR_1}　ーー!!{EOS}"
EventText_JP_081F3E3C: @ 0x081F3E3C
	.string "……\pきみは\n‘{STR_VAR_1}’　よりも\pうたの　べんきょうを\nしたほうが　いいね{EOS}"
EventText_JP_081F3E61: @ 0x081F3E61
	.string "さっきの　はなし\nなんだけどさ\pこんど　この　しまで\n‘{STR_VAR_1}’\lパーティーを　ひらこうぜ!{EOS}"
EventText_JP_081F3E8F: @ 0x081F3E8F
	.string "お　いいね!!\pだれが　いちばん\n‘{STR_VAR_1}’が\lうまいかを　きめるんだね!\pじゃあ　きょうから\p‘{STR_VAR_1}’\nざんまいだ!{EOS}"
EventText_JP_081F3ECA: @ 0x081F3ECA
	.string "……そうだなぁ\p‘{STR_VAR_1}’は　もう\nりゅうこう　じゃなくて\pせいかつの　いちぶ\nという　かんじかなぁ?{EOS}"
EventText_JP_081F3EFD: @ 0x081F3EFD
	.string "え?\nそんなに!?\pきみは　ねても　さめても\n‘{STR_VAR_1}’　のこと\lばっかり　かんがえてる　からな\p‘{STR_VAR_1}　はかせ’\nだね　まったく{EOS}"
EventText_JP_081F3F3E: @ 0x081F3F3E
	.string "ぼくと　きみが\nコンビを　くめば\p“{STR_VAR_1}”では\nもう　むてきって　ことだな!{EOS}"
EventText_JP_081F3F65: @ 0x081F3F65
	.string "そのとおり!\p‘{STR_VAR_1}　コンビ’\nっていう　かんじだね!\pハハハ!!{EOS}"
EventText_JP_081F3F87: @ 0x081F3F87
	.string "さいきん　ぼくの　なかでは\n‘ヘドロばくだん’が　だいブーム　なのさ!\pえー　きみ\n‘ヘドロばくだん’　しらないの?\pそれは　かわいそうだな\nよし!　ぼくが　あげるよ!{EOS}"
EventText_JP_081F3FDC: @ 0x081F3FDC
	.string "‘ヘドロばくだん’も　いいけど\n‘{STR_VAR_1}’って\lわざを　つかえる\lポケモンも　いいよね!{EOS}"
	.byte 0x00
.globl EventScript_JP_081F4009
EventScript_JP_081F4009: @ 0x081F4009
	lock
	faceplayer
	checkflag 0x0121
	goto_if 0x01, EventScript_JP_081F4042
	loadword 0x00, EventText_JP_081F4055
	callstd 0x04
	setorcopyvar 0x8000, 0x00D9
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F4038
	setflag 0x0121
	release
	end
EventScript_JP_081F4038: @ 0x081F4038
	loadword 0x00, EventText_JP_081F40B4
	callstd 0x04
	release
	end
EventScript_JP_081F4042: @ 0x081F4042
	loadword 0x00, EventText_JP_081F40E1
	callstd 0x04
	release
	end
.globl EventScript_JP_081F404C
EventScript_JP_081F404C: @ 0x081F404C
	loadword 0x00, EventText_JP_081F4128
	callstd 0x02
	end
EventText_JP_081F4055: @ 0x081F4055
	.string "ほら!　りゅうこう　さいせんたんの\nこの　シルクのスカーフ　ステキだろ!\pおっ　めが　かがやいてるね!\nオレの　センスが　わかるんだな　きみは!\pうれしいね!\nこれは　プレゼント　するよ!{EOS}"
EventText_JP_081F40B4: @ 0x081F40B4
	.string "え　もてないの?\nきみの　にもつを　ぜんぶ　うってでも\lもつべき　スカーフだぜ　これは!{EOS}"
EventText_JP_081F40E1: @ 0x081F40E1
	.string "シルクのスカーフは　ノーマルタイプの\nわざの　いりょくを　あげてくれる!\pほとんどの　ポケモンに　にあう\nすてきな　スカーフ　ってことだぜ!{EOS}"
EventText_JP_081F4128: @ 0x081F4128
	.string "へえ!　きみ　うみを　こえて\nわざわざ　ムロまで　きたの!\pもしかして　トウキさんの　うわさを　きいて\nあいに　きたんじゃない?\pトウキさん　かっこよくて\nみんなが　あこがれるもんな!{EOS}"
	.byte 0x00
.globl EventScript_JP_081F4186
EventScript_JP_081F4186: @ 0x081F4186
	lock
	faceplayer
	message EventText_JP_081F41EE
	waitmessage
	pokemart 0x081F41A0
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x1E, 0x00, 0x1F, 0x00, 0x20, 0x00, 0x21, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_081F41AC
EventScript_JP_081F41AC: @ 0x081F41AC
	loadword 0x00, EventText_JP_081F428D
	callstd 0x02
	end
.globl EventScript_JP_081F41B5
EventScript_JP_081F41B5: @ 0x081F41B5
	lock
	faceplayer
	checkflag 0x00FE
	goto_if 0x01, EventScript_JP_081F41E4
	loadword 0x00, EventText_JP_081F4207
	callstd 0x04
	setorcopyvar 0x8000, 0x00D7
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00FE
	release
	end
EventScript_JP_081F41E4: @ 0x081F41E4
	loadword 0x00, EventText_JP_081F4237
	callstd 0x04
	release
	end
EventText_JP_081F41EE: @ 0x081F41EE
	.string "どうも!\nやすくて　よく　きく　かんぽうや　です{EOS}"
EventText_JP_081F4207: @ 0x081F4207
	.string "フエンの　かんぽうやくを\nみにくるとは　なかなか　しぶいのう\pきにいった!　これを　もってけ!{EOS}"
EventText_JP_081F4237: @ 0x081F4237
	.string "おまえさんに　あげた　もくたんは\nかんぽうやくを　つくるのに　つかうが\lポケモンに　もたせても　すごいぞ!\pほのおタイプの　わざの　いりょくを\nたかめて　くれるのじゃよ!{EOS}"
EventText_JP_081F428D: @ 0x081F428D
	.string "かんぽうやくの　ききめは　すごいが\nポケモンに　のませると　きらわれるぞよ\lきっと　すっごく　にがいんじゃろうな!{EOS}"
gMapScriptDispatch_LavaridgeTown_Gym_1F_OnTransition: @ 0x081F42C7
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F42CD
	.byte 0
EventScript_JP_081F42CD: @ 0x081F42CD
	call EventScript_JP_081F42D8
	call EventScript_JP_081F432A
	end
EventScript_JP_081F42D8: @ 0x081F42D8
	setvar 0x400B, 0x0000
	setvar 0x400C, 0x0000
	setvar 0x400D, 0x0000
	setvar 0x400E, 0x0000
	setvar 0x400F, 0x0000
	checktrainerflag 0x00C9
	goto_if 0x01, EventScript_JP_081F42FF
	setvar 0x400B, 0x0001
EventScript_JP_081F42FF: @ 0x081F42FF
	checktrainerflag 0x0288
	goto_if 0x01, EventScript_JP_081F430D
	setvar 0x400C, 0x0001
EventScript_JP_081F430D: @ 0x081F430D
	checktrainerflag 0x00CB
	goto_if 0x01, EventScript_JP_081F431B
	setvar 0x400D, 0x0001
EventScript_JP_081F431B: @ 0x081F431B
	checktrainerflag 0x028A
	goto_if 0x01, EventScript_JP_081F4329
	setvar 0x400E, 0x0001
EventScript_JP_081F4329: @ 0x081F4329
	return
EventScript_JP_081F432A: @ 0x081F432A
	checktrainerflag 0x00C9
	goto_if 0x01, EventScript_JP_081F4337
	setobjectmovementtype 0x0002, 0x3F
EventScript_JP_081F4337: @ 0x081F4337
	checktrainerflag 0x0288
	goto_if 0x01, EventScript_JP_081F4344
	setobjectmovementtype 0x0003, 0x3F
EventScript_JP_081F4344: @ 0x081F4344
	checktrainerflag 0x00CB
	goto_if 0x01, EventScript_JP_081F4351
	setobjectmovementtype 0x0004, 0x3F
EventScript_JP_081F4351: @ 0x081F4351
	checktrainerflag 0x028A
	goto_if 0x01, EventScript_JP_081F435E
	setobjectmovementtype 0x0005, 0x3F
EventScript_JP_081F435E: @ 0x081F435E
	return
.globl EventScript_JP_081F435F
EventScript_JP_081F435F: @ 0x081F435F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, 0x010C, 0x0000, EventText_JP_081F4961, EventText_JP_081F4A13, EventScript_JP_081F4394
	specialvar_ 0x800D, 0x0039
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F4437
	checkflag 0x00A8
	goto_if 0x00, EventScript_JP_081F43F0
	loadword 0x00, EventText_JP_081F4BB5
	callstd 0x04
	release
	end
EventScript_JP_081F4394: @ 0x081F4394
	message EventText_JP_081F4A9D
	waitmessage
	call 0x0824310A
	loadword 0x00, EventText_JP_081F4AB5
	callstd 0x04
	setflag 0x006C
	setflag 0x04F3
	setflag 0x086A
	addvar 0x4085, 0x0001
	compare_var_to_value 0x4085, 0x0006
	call_if 0x01, 0x08242F10
	setvar 0x8008, 0x0004
	call 0x08242FCF
	setflag 0x0326
	setvar 0x4053, 0x0001
	call EventScript_JP_081F4414
	closemessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, EventText_JP_081F4B9A
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x01D6
	release
	end
EventScript_JP_081F43F0: @ 0x081F43F0
	setorcopyvar 0x8000, 0x0152
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	loadword 0x00, EventText_JP_081F4B2B
	callstd 0x04
	setflag 0x00A8
	release
	end
EventScript_JP_081F4414: @ 0x081F4414
	setorcopyvar 0x8000, 0x0152
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430EA
	loadword 0x00, EventText_JP_081F4B2B
	callstd 0x04
	setflag 0x00A8
	return
EventScript_JP_081F4437: @ 0x081F4437
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, 0x010C, 0x0000, EventText_JP_081F4C23, EventText_JP_081F4CA0, EventText_JP_081F4CF6
	loadword 0x00, EventText_JP_081F4CAF
	callstd 0x06
	end
.globl EventScript_JP_081F4452
EventScript_JP_081F4452: @ 0x081F4452
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x00C9, 0x0002, EventText_JP_081F4638, EventText_JP_081F4650, EventScript_JP_081F446D
	loadword 0x00, EventText_JP_081F465E
	callstd 0x06
	end
EventScript_JP_081F446D: @ 0x081F446D
	call EventScript_JP_081F42D8
	release
	@ event command: special
	special ShouldTryGetTrainerScript
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, 0x08244D20
	end
.globl EventScript_JP_081F4482
EventScript_JP_081F4482: @ 0x081F4482
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x00CB, 0x0004, EventText_JP_081F4685, EventText_JP_081F46A9, EventScript_JP_081F446D
	loadword 0x00, EventText_JP_081F46BA
	callstd 0x06
	end
.globl EventScript_JP_081F449D
EventScript_JP_081F449D: @ 0x081F449D
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x00CD, 0x0002, EventText_JP_081F46E7, EventText_JP_081F4732, EventScript_JP_081F446D
	loadword 0x00, EventText_JP_081F4745
	callstd 0x06
	end
.globl EventScript_JP_081F44B8
EventScript_JP_081F44B8: @ 0x081F44B8
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x028A, 0x0005, EventText_JP_081F47F4, EventText_JP_081F480E, EventScript_JP_081F446D
	loadword 0x00, EventText_JP_081F4819
	callstd 0x06
	end
.globl EventScript_JP_081F44D3
EventScript_JP_081F44D3: @ 0x081F44D3
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x0288, 0x0003, EventText_JP_081F4780, EventText_JP_081F479F, EventScript_JP_081F446D
	loadword 0x00, EventText_JP_081F47AF
	callstd 0x06
	end
.globl EventScript_JP_081F44EE
EventScript_JP_081F44EE: @ 0x081F44EE
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x00CC, 0x0001, EventText_JP_081F4841, EventText_JP_081F485D, EventScript_JP_081F446D
	loadword 0x00, EventText_JP_081F4877
	callstd 0x06
	end
.globl EventScript_JP_081F4509
EventScript_JP_081F4509: @ 0x081F4509
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x00CA, 0x0003, EventText_JP_081F48A0, EventText_JP_081F48C8, EventScript_JP_081F446D
	loadword 0x00, EventText_JP_081F48CF
	callstd 0x06
	end
.globl EventScript_JP_081F4524
EventScript_JP_081F4524: @ 0x081F4524
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x01F5, 0x0004, EventText_JP_081F4901, EventText_JP_081F491E, EventScript_JP_081F446D
	loadword 0x00, EventText_JP_081F4939
	callstd 0x06
	end
.globl EventScript_JP_081F453F
EventScript_JP_081F453F: @ 0x081F453F
	lock
	faceplayer
	checkflag 0x04F3
	goto_if 0x01, EventScript_JP_081F4554
	loadword 0x00, EventText_JP_081F4592
	callstd 0x04
	release
	end
EventScript_JP_081F4554: @ 0x081F4554
	loadword 0x00, EventText_JP_081F4625
	callstd 0x04
	release
	end
.globl EventScript_JP_081F455E
EventScript_JP_081F455E: @ 0x081F455E
	lockall
	checkflag 0x086A
	goto_if 0x01, EventScript_JP_081F457E
	goto EventScript_JP_081F4588
	.byte 0x02
.globl EventScript_JP_081F456E
EventScript_JP_081F456E: @ 0x081F456E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x086A
	goto_if 0x01, EventScript_JP_081F457E
	goto EventScript_JP_081F4588
	.byte 0x02
EventScript_JP_081F457E: @ 0x081F457E
	loadword 0x00, EventText_JP_081F4C02
	callstd 0x04
	releaseall
	end
EventScript_JP_081F4588: @ 0x081F4588
	loadword 0x00, EventText_JP_081F4BF4
	callstd 0x04
	releaseall
	end
EventText_JP_081F4592: @ 0x081F4592
	.string "げんき　しとぉや!!\nチャンピオンを　めざす　{PLAYER}!!\pフエンタウン　ジムの　リーダー　アスナは\nほのおタイプ　ポケモンの　つかいてだ!\pポケモンに　たいする　じょうねつは\nかざん　よりも　はげしく　あちィ!\pうっかり　ちかづくと　やけど　するから\nみずで　ひやしながら\lきばってこー　な!!{EOS}"
EventText_JP_081F4625: @ 0x081F4625
	.string "いやあー　あちィ　たたかい　だった!{EOS}"
EventText_JP_081F4638: @ 0x081F4638
	.string "あちちちちちっ!\nぷはーっ!　あつかったーっ!{EOS}"
EventText_JP_081F4650: @ 0x081F4650
	.string "あせが　めに　しみるぜ……{EOS}"
EventText_JP_081F465E: @ 0x081F465E
	.string "すなブロは　けっこうが　よくなって\nかんせつの　いたみに　こうかてき　だぜ!{EOS}"
EventText_JP_081F4685: @ 0x081F4685
	.string "ストレスを　かいしょう　する\nおれの　ひとときを　ジャマ　するなーっ!{EOS}"
EventText_JP_081F46A9: @ 0x081F46A9
	.string "アスナさんに　まけてしまえーっ!{EOS}"
EventText_JP_081F46BA: @ 0x081F46BA
	.string "はあ　ふう……\pすなブロに　ながく　はいっていると\nけっこう　つかれちゃう　もんだよ……{EOS}"
EventText_JP_081F46E7: @ 0x081F46E7
	.string "さすがに　つかれてきた　ようだね\nすなブロで　ひとやすみ　したいだろう?\pだが　きりょくを　たもつ　ことも\nトレーナーに　ひつような　さいのう　だよ{EOS}"
EventText_JP_081F4732: @ 0x081F4732
	.string "ひあそびは　けがのもと　だったか……{EOS}"
EventText_JP_081F4745: @ 0x081F4745
	.string "きみの　ちからは　ほんものだ……\nでも　リーダー　アスナさんは　つよいよ!\pあまく　みていると　おおやけど　するぜ!{EOS}"
EventText_JP_081F4780: @ 0x081F4780
	.string "おまえの　ポケモン\n200どの　あつさに　たえられるかよ!?{EOS}"
EventText_JP_081F479F: @ 0x081F479F
	.string "もえかたが　たりなかったか……{EOS}"
EventText_JP_081F47AF: @ 0x081F47AF
	.string "200どの　あつさ　ってのは\nようがんの　おんど!\pおまえの　ポケモン　おれに　かてたんだから\nようがんの　なかでも　へいき　だろうな!{EOS}"
EventText_JP_081F47F4: @ 0x081F47F4
	.string "えーっと!\nじゃあ　しょうぶの　あいて　しますね!{EOS}"
EventText_JP_081F480E: @ 0x081F480E
	.string "なんて　つよいの!?{EOS}"
EventText_JP_081F4819: @ 0x081F4819
	.string "あたしも　アスナさんと　いっしょに\nきれいで　つよい　トレーナーに　なるんだ!{EOS}"
EventText_JP_081F4841: @ 0x081F4841
	.string "ほら　ほらっ!\nきもちが　さめない　うちに　いくぜっ!{EOS}"
EventText_JP_081F485D: @ 0x081F485D
	.string "こんなに　あついのに\nおれの　こころが　さむい……{EOS}"
EventText_JP_081F4877: @ 0x081F4877
	.string "そのくらい　とうしを　もやして　いれば\nもしかしたら　リーダーにも　かてるかもな{EOS}"
EventText_JP_081F48A0: @ 0x081F48A0
	.string "みよ　この　もえさかる　ほのおを!\nオレの　しょうりを　よげんして　いるのだ!{EOS}"
EventText_JP_081F48C8: @ 0x081F48C8
	.string "おかしいなあ{EOS}"
EventText_JP_081F48CF: @ 0x081F48CF
	.string "いいもんね!　オレなんて\nたきびの　うえを　はだしで　はしれるぜ!\p……　おまえは　まね　するなよ{EOS}"
EventText_JP_081F4901: @ 0x081F4901
	.string "やまの　なかでも　とくに\nかざんが　だいすき　でして……{EOS}"
EventText_JP_081F491E: @ 0x081F491E
	.string "あれよ　あれよと　いうまに\nまけちまった　わけでして{EOS}"
EventText_JP_081F4939: @ 0x081F4939
	.string "アスナさんの　つよさに　ほれて\nわしは　ここに　いるわけ　でして……\lへへへへ{EOS}"
EventText_JP_081F4961: @ 0x081F4961
	.string "ようこそ　……じゃなくて\pよくぞ　ここまで　きた　ものだな!\pわたしは　ここの　ジムリーダーを\nつとめさせて　いただく　……じゃなくて\pジムリーダーを　まかされた　アスナだ!\pくう……\nジムリーダーに　なりたて　だからって\lゆだん　など　しないことだ!\pおじいちゃん　ゆずりの　さいのうと\nこのとちで　みがきあげた　ホットな　わざ\lあなたに　みせてやる!{EOS}"
EventText_JP_081F4A13: @ 0x081F4A13
	.string "くう……\nかたに　ちから　はいっちゃって……\pあたし……\nジムリーダーに　なりたて　だからって\lちょっと　むり　していたのかな……\pやっぱ　じぶんらしく　でないと\nいっしょに　たたかってくれる\lポケモンも　こまっちゃうよね!\pそれを　おしえてくれた\nあなたに　これ　あげる!{EOS}"
EventText_JP_081F4A9D: @ 0x081F4A9D
	.string "{PLAYER}は　アスナから\nヒートバッジを　もらった!{EOS}"
EventText_JP_081F4AB5: @ 0x081F4AB5
	.string "ヒートバッジが　あれば\nレベル50　までなら\lひとから　もらった　ポケモンでも\lいうことを　きいて　くれるんだ!\pそれに　ひでんわざの　かいりき　が\nつかえるようにも　なるよ!\pこれは　かんしゃの　きもち\nえんりょ　せずに　もらって!{EOS}"
EventText_JP_081F4B2B: @ 0x081F4B2B
	.string "わざマシン50　には\nオーバーヒートが　はいってるよ!\pその　わざは　あいてに\nおおきな　ダメージを　あたえるんだ!\pだけど　とくこうが\nがくっと　さがっちゃう　から\lながい　しょうぶには　むかないかも\p……　……　……{EOS}"
EventText_JP_081F4B9A: @ 0x081F4B9A
	.string "ジムリーダー　アスナを\nポケナビに　とうろく　した!{EOS}"
EventText_JP_081F4BB5: @ 0x081F4BB5
	.string "あなたの　つよさ\nだれかを　おもいださせるの　よね……\pそうだ!　トウカシティの　ジムリーダー\nセンリさんに　にているんだ!{EOS}"
EventText_JP_081F4BF4: @ 0x081F4BF4
	.string "フエンタウン　ポケモンジム{EOS}"
EventText_JP_081F4C02: @ 0x081F4C02
	.string "フエンタウン　ポケモンジム\pアスナ　にんてい　トレーナー!\n{PLAYER}{EOS}"
EventText_JP_081F4C23: @ 0x081F4C23
	.string "アスナ“しょうぶに　まけた　ぐらいで\nあたしは　へこたれたり　しない!\pなぜなら　あたしは　ポケモンが　すきで\nしょうぶを　するのが　すきで\lそれに……　このジムが　すきだから!\pさあ　もういちど　いっしょに\nホットな　わざを　ぶつけあいましょう!{EOS}"
EventText_JP_081F4CA0: @ 0x081F4CA0
	.string "ふぅ!　ばくはつ　すんぜん!{EOS}"
EventText_JP_081F4CAF: @ 0x081F4CAF
	.string "アスナ“しょうぶには　まけたけど\nこんなに　ヒートする　たたかいが　できて\lあたしは　まんぞくよ!\pそのうち　また　しょうぶ　しましょうね!{EOS}"
EventText_JP_081F4CF6: @ 0x081F4CF6
	.string "アスナ“しょうぶに　まけた　ぐらいで\nあたしは　へこたれたり　しない!\pなぜなら　あたしは　ポケモンが　すきで\nしょうぶを　するのが　すきで\lそれに……　このジムが　すきだから!\pさあ　もういちど　いっしょに\nホットな　わざを　ぶつけあいましょう!\p……あら?　たたかえる　ポケモンを\n1ひきしか　もって　いないんですね\pすみませんけど　2ひき　いじょうの\nポケモンを　もって　きてください{EOS}"
gMapScriptDispatch_LavaridgeTown_Gym_B1F_OnTransition: @ 0x081F4DBA
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F4DC0
	.byte 0
EventScript_JP_081F4DC0: @ 0x081F4DC0
	call EventScript_JP_081F4DCB
	call EventScript_JP_081F4E18
	end
EventScript_JP_081F4DCB: @ 0x081F4DCB
	setvar 0x4007, 0x0000
	setvar 0x4008, 0x0000
	setvar 0x4009, 0x0000
	setvar 0x400A, 0x0000
	checktrainerflag 0x00CD
	goto_if 0x01, EventScript_JP_081F4DED
	setvar 0x4007, 0x0001
EventScript_JP_081F4DED: @ 0x081F4DED
	checktrainerflag 0x00CC
	goto_if 0x01, EventScript_JP_081F4DFB
	setvar 0x4008, 0x0001
EventScript_JP_081F4DFB: @ 0x081F4DFB
	checktrainerflag 0x00CA
	goto_if 0x01, EventScript_JP_081F4E09
	setvar 0x4009, 0x0001
EventScript_JP_081F4E09: @ 0x081F4E09
	checktrainerflag 0x01F5
	goto_if 0x01, EventScript_JP_081F4E17
	setvar 0x400A, 0x0001
EventScript_JP_081F4E17: @ 0x081F4E17
	return
EventScript_JP_081F4E18: @ 0x081F4E18
	checktrainerflag 0x00CD
	goto_if 0x01, EventScript_JP_081F4E25
	setobjectmovementtype 0x0002, 0x3F
EventScript_JP_081F4E25: @ 0x081F4E25
	checktrainerflag 0x00CC
	goto_if 0x01, EventScript_JP_081F4E32
	setobjectmovementtype 0x0001, 0x3F
EventScript_JP_081F4E32: @ 0x081F4E32
	checktrainerflag 0x00CA
	goto_if 0x01, EventScript_JP_081F4E3F
	setobjectmovementtype 0x0003, 0x3F
EventScript_JP_081F4E3F: @ 0x081F4E3F
	checktrainerflag 0x01F5
	goto_if 0x01, EventScript_JP_081F4E4C
	setobjectmovementtype 0x0004, 0x3F
EventScript_JP_081F4E4C: @ 0x081F4E4C
	return
	.byte 0x00
.globl EventScript_JP_081F4E4E
EventScript_JP_081F4E4E: @ 0x081F4E4E
	loadword 0x00, EventText_JP_081F4E6A
	callstd 0x02
	end
.globl EventScript_JP_081F4E57
EventScript_JP_081F4E57: @ 0x081F4E57
	lock
	faceplayer
	waitse
	playmoncry 0x0120, 0x0000
	loadword 0x00, EventText_JP_081F4EC0
	callstd 0x04
	waitmoncry
	release
	end
EventText_JP_081F4E6A: @ 0x081F4E6A
	.string "おんせんで　タマゴを　あたためている\nばあさんから　きいたんじゃが……\pそだてやに　ポケモンを\n2ひき　いっしょに　あずけたらの\lなんと　タマゴが　みつかったそうじゃ!!{EOS}"
EventText_JP_081F4EC0: @ 0x081F4EC0
	.string "ジグザグマ“ぷしゅー!{EOS}"
	.byte 0x00
.globl EventScript_JP_081F4ECD
EventScript_JP_081F4ECD: @ 0x081F4ECD
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x081F4EE4
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x03, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11, 0x00, 0x0F, 0x00, 0x18, 0x00, 0x53, 0x00
	.byte 0x4D, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_081F4EFA
EventScript_JP_081F4EFA: @ 0x081F4EFA
	loadword 0x00, EventText_JP_081F4F0C
	callstd 0x02
	end
.globl EventScript_JP_081F4F03
EventScript_JP_081F4F03: @ 0x081F4F03
	loadword 0x00, EventText_JP_081F4F50
	callstd 0x02
	end
EventText_JP_081F4F0C: @ 0x081F4F0C
	.string "スピーダー　つかって\nポケモンの　すばやさ　あげるんじゃ!\pそうすりゃ　せんせいこうげき　できて\nたたかいが　ゆうりに　なるからのう!{EOS}"
EventText_JP_081F4F50: @ 0x081F4F50
	.string "えんとつやまの　ちょうじょう　だけで\nかうことが　できる　おみやげは\lポケモンに　あげると　よろこぶよ!{EOS}"
gMapScriptDispatch_LavaridgeTown_PokemonCenter_1F_OnTransition_OnResume: @ 0x081F4F85
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F4F90
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_081F4F90: @ 0x081F4F90
	setrespawn 0x0010
	call 0x08242978
	end
.globl EventScript_JP_081F4F99
EventScript_JP_081F4F99: @ 0x081F4F99
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_081F4FA7
EventScript_JP_081F4FA7: @ 0x081F4FA7
	loadword 0x00, EventText_JP_081F4FF9
	callstd 0x02
	end
.globl EventScript_JP_081F4FB0
EventScript_JP_081F4FB0: @ 0x081F4FB0
	loadword 0x00, EventText_JP_081F4FC2
	callstd 0x02
	end
.globl EventScript_JP_081F4FB9
EventScript_JP_081F4FB9: @ 0x081F4FB9
	loadword 0x00, EventText_JP_081F502B
	callstd 0x02
	end
EventText_JP_081F4FC2: @ 0x081F4FC2
	.string "ポケモンと　いっしょに　あるいていると\nなんだか　ポケモンが　なついてくれるような\lそんな　きが　するのよね{EOS}"
EventText_JP_081F4FF9: @ 0x081F4FF9
	.string "おんせんに　はいる　だけで\nげんきに　なるなんて　ふしぎだなー!\lポケモンも　いれて　あげたいなー{EOS}"
EventText_JP_081F502B: @ 0x081F502B
	.string "ほっほっほ!　おわかいの\nここから　おんせんに　いけますぞ!\pポケモンが　ここで　やすむのなら\nひとも　おんせんで　ゆっくり　しませんと!{EOS}"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
.globl EventScript_JP_081F5099
EventScript_JP_081F5099: @ 0x081F5099
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x081F50B0
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x03, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x55, 0x00, 0x53, 0x00, 0x4F, 0x00, 0x4D, 0x00
	.byte 0x4B, 0x00, 0x4C, 0x00, 0x4A, 0x00, 0x49, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_081F50CC
EventScript_JP_081F50CC: @ 0x081F50CC
	loadword 0x00, EventText_JP_081F50F1
	callstd 0x02
	end
.globl EventScript_JP_081F50D5
EventScript_JP_081F50D5: @ 0x081F50D5
	loadword 0x00, EventText_JP_081F5152
	callstd 0x02
	end
.globl EventScript_JP_081F50DE
EventScript_JP_081F50DE: @ 0x081F50DE
	lock
	faceplayer
	waitse
	playmoncry 0x013B, 0x0000
	loadword 0x00, EventText_JP_081F5148
	callstd 0x04
	waitmoncry
	release
	end
EventText_JP_081F50F1: @ 0x081F50F1
	.string "あたしの　エネコにね\nつきのいしを　つかってね……\pしんか　させるか　どうか\nすっごい　まよってるのよぉ\pしんか　させると　つよくなるけど\nすがたかたち　かわっちゃうし……{EOS}"
EventText_JP_081F5148: @ 0x081F5148
	.string "エネコ“みゃおう?{EOS}"
EventText_JP_081F5152: @ 0x081F5152
	.string "ひろった　きんのたま……\nやっぱり　うるしか　ないのかなあ?\lほかに　つかいみちも　ないからなあ……{EOS}"
gMapScriptDispatch_FallarborTown_BattleTentLobby_OnFrame_OnWarpIntoMap: @ 0x081F5185
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_FallarborTown_BattleTentLobby_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_FallarborTown_BattleTentLobby_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_FallarborTown_BattleTentLobby_OnWarpIntoMap: @ 0x081F5190
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081F519A
	.2byte 0
EventScript_JP_081F519A: @ 0x081F519A
	setvar 0x4001, 0x0001
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_FallarborTown_BattleTentLobby_OnFrame: @ 0x081F51A4
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081F51CE
	.2byte 0x4000, 0x0001
	.4byte EventScript_JP_081F51D7
	.2byte 0x4000, 0x0002
	.4byte EventScript_JP_081F52EC
	.2byte 0x4000, 0x0003
	.4byte EventScript_JP_081F520C
	.2byte 0x4000, 0x0004
	.4byte EventScript_JP_081F52B2
	.2byte 0
EventScript_JP_081F51CE: @ 0x081F51CE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	end
EventScript_JP_081F51D7: @ 0x081F51D7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_274DB9
	callstd 0x04
	closemessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x4000, 0x00FF
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	releaseall
	end
EventScript_JP_081F520C: @ 0x081F520C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_274E1B
	callstd 0x04
	message gText_Rom_274E34
	waitmessage
	setvar 0x8004, 0x0004
	@ event command: special
	special CallFallarborTentFunction
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0000
	@ event command: special
	special CallFallarborTentFunction
	playse 0x0037
	waitse
EventScript_JP_081F5246: @ 0x081F5246
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_274E4A
	callstd 0x04
	setvar 0x8004, 0x0005
	@ event command: special
	special CallFallarborTentFunction
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F5292
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	message gText_Rom_274E74
	waitmessage
	playfanfare 0x0172
	waitfanfare
	loadword 0x00, gText_Rom_274ED5
	callstd 0x04
	closemessage
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_081F5292: @ 0x081F5292
	loadword 0x00, gText_Rom_274E82
	callstd 0x04
	waitmessage
	closemessage
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_081F52A3: @ 0x081F52A3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_274E1B
	callstd 0x04
	goto EventScript_JP_081F5246
	.byte 0x02
EventScript_JP_081F52B2: @ 0x081F52B2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	message gText_Rom_274EB4
	waitmessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0000
	@ event command: special
	special CallFallarborTentFunction
	playse 0x0037
	waitse
	loadword 0x00, gText_Rom_274ED5
	callstd 0x04
	closemessage
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_081F52EC: @ 0x081F52EC
	lockall
	message gText_Rom_274EED
	waitmessage
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0001
	@ event command: special
	special CallFallarborTentFunction
	playse 0x0037
	waitse
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0003
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x4000, 0x00FF
	goto EventScript_JP_081F545B
.globl EventScript_JP_081F5320
EventScript_JP_081F5320: @ 0x081F5320
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8004, 0x0001
	@ event command: special
	special CallFallarborTentFunction
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_081F52A3
	@ event command: special
	special SavePlayerParty
	loadword 0x00, gText_Rom_274A30
	callstd 0x04
EventScript_JP_081F5340: @ 0x081F5340
	message gText_Rom_274A71
	waitmessage
	multichoice 0x11, 0x06, 0x17, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F537C
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F5488
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F54E4
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081F54E4
EventScript_JP_081F537C: @ 0x081F537C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x40CF, 0x0003
	setvar 0x40CE, 0x0000
	setvar 0x800D, 0x0002
	setvar 0x8004, 0x000F
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x8004, 0x0001
	goto_if 0x01, EventScript_JP_081F5495
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	loadword 0x00, gText_Rom_274C64
	callstd 0x04
	fadescreen 0x01
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0003
	@ event command: special
	special ChoosePartyForBattleFrontier
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F54E1
	loadword 0x00, gText_Rom_274C14
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F54E1
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F5401
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081F54E1
EventScript_JP_081F5401: @ 0x081F5401
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4000, 0x0000
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0000
	@ event command: special
	special CallFallarborTentFunction
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
	goto_if 0x01, EventScript_JP_081F54CA
EventScript_JP_081F545B: @ 0x081F545B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special SavePlayerParty
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	loadword 0x00, gText_Rom_274DA3
	callstd 0x04
	closemessage
	call EventScript_JP_081F54EE
	@ event command: warp
	warp MAP_ID_FALLARBOR_TOWN_BATTLE_TENT_CORRIDOR, 0xFF, 0x0002, 0x0007
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_081F5488: @ 0x081F5488
	loadword 0x00, gText_Rom_274AA3
	callstd 0x04
	goto EventScript_JP_081F5340
EventScript_JP_081F5495: @ 0x081F5495
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F54B0
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F54BD
EventScript_JP_081F54B0: @ 0x081F54B0
	loadword 0x00, gText_Rom_274C84
	callstd 0x04
	goto EventScript_JP_081F54EC
EventScript_JP_081F54BD: @ 0x081F54BD
	loadword 0x00, gText_Rom_274CFD
	callstd 0x04
	goto EventScript_JP_081F54EC
EventScript_JP_081F54CA: @ 0x081F54CA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	goto EventScript_JP_081F54E4
EventScript_JP_081F54E1: @ 0x081F54E1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special LoadPlayerParty
EventScript_JP_081F54E4: @ 0x081F54E4
	loadword 0x00, gText_Rom_274A8B
	callstd 0x04
EventScript_JP_081F54EC: @ 0x081F54EC
	release
	end
EventScript_JP_081F54EE: @ 0x081F54EE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_1
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_2
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x0006, 0x0001
	waitdooranim
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkUp_SetInvisible_1
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_1
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x0006, 0x0001
	waitdooranim
	return
LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_1: @ 0x081F551D
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUp_SetInvisible_1: @ 0x081F5521
	@ object movement sequence
	walk_up
	set_invisible
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_2: @ 0x081F5524
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_1: @ 0x081F5528
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
.globl EventScript_JP_081F552C
EventScript_JP_081F552C: @ 0x081F552C
	loadword 0x00, EventText_JP_081F56C2
	callstd 0x02
	end
.globl EventScript_JP_081F5535
EventScript_JP_081F5535: @ 0x081F5535
	loadword 0x00, EventText_JP_081F5623
	callstd 0x02
	end
.globl EventScript_JP_081F553E
EventScript_JP_081F553E: @ 0x081F553E
	loadword 0x00, EventText_JP_081F5657
	callstd 0x02
	end
.globl EventScript_JP_081F5547
EventScript_JP_081F5547: @ 0x081F5547
	lock
	faceplayer
	checkflag 0x01CD
	goto_if 0x01, EventScript_JP_081F5564
	loadword 0x00, EventText_JP_081F5708
	callstd 0x04
	addvar 0x40D1, 0x0001
	setflag 0x01CD
	release
	end
EventScript_JP_081F5564: @ 0x081F5564
	loadword 0x00, EventText_JP_081F57A2
	callstd 0x04
	release
	end
.globl EventScript_JP_081F556E
EventScript_JP_081F556E: @ 0x081F556E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_22FD87
	callstd 0x04
	goto EventScript_JP_081F557D
	.byte 0x02
EventScript_JP_081F557D: @ 0x081F557D
	message gText_Rom_22FDA0
	waitmessage
	multichoice 0x11, 0x00, 0x70, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F55DB
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F55E9
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F55F7
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081F5605
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081F5613
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_081F5621
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081F5621
	end
EventScript_JP_081F55DB: @ 0x081F55DB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_275BCD
	callstd 0x04
	goto EventScript_JP_081F557D
	.byte 0x02
EventScript_JP_081F55E9: @ 0x081F55E9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22FDB0
	callstd 0x04
	goto EventScript_JP_081F557D
	.byte 0x02
EventScript_JP_081F55F7: @ 0x081F55F7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22FE72
	callstd 0x04
	goto EventScript_JP_081F557D
	.byte 0x02
EventScript_JP_081F5605: @ 0x081F5605
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22FECB
	callstd 0x04
	goto EventScript_JP_081F557D
	.byte 0x02
EventScript_JP_081F5613: @ 0x081F5613
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22FFB6
	callstd 0x04
	goto EventScript_JP_081F557D
	.byte 0x02
EventScript_JP_081F5621: @ 0x081F5621
	releaseall
	end
EventText_JP_081F5623: @ 0x081F5623
	.string "ふふふふふふ\pほんの　こどもだと　おもわせて\nみんなを　ゆだん　させて\lボクは　ゆうしょう　するのだ!{EOS}"
EventText_JP_081F5657: @ 0x081F5657
	.string "バトルテントって　まちに　よって\nちょうせん　できる　ことが　ちがうでしょ?\lあたしは　だんぜん　ハジツゲの\lバトルテントが　すきなのよね!\pしんじてる　ポケモンたちと　かちぬくって\nすごく　かっこいいじゃない?{EOS}"
EventText_JP_081F56C2: @ 0x081F56C2
	.string "テントというから　キャンプ　しにきたら…\pさいきんの　テント　というのは\nごうかな　もん　だなあ\lよし　ついでに　ちょうせん　してみるか?{EOS}"
EventText_JP_081F5708: @ 0x081F5708
	.string "エニシダ“やあ　{PLAYER}{KUN}\nきたんだね　バトルテントに!\pどうも　この　ちほうは\nノンビリ　した　ひとが　おおくてね\lもっと　こう……\lかちたい　パワーの　ありまくりな\lひとを　わたしは　もとめて　いるんだよ!\lそういう　トレーナーが　いれば　すぐにでも\p……って　いや　なんでもないよ\nじゃ　がんばってね!{EOS}"
EventText_JP_081F57A2: @ 0x081F57A2
	.string "エニシダ“わたし　なんかに\nいつまでも　かまって　いないで\lさっそく　チャレンジ\lして　みたら　どうだい?{EOS}"
gMapScriptDispatch_FallarborTown_BattleTentCorridor_OnFrame: @ 0x081F57D8
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_FallarborTown_BattleTentCorridor_OnFrame
	.byte 0
gMapScriptConditionTable_FallarborTown_BattleTentCorridor_OnFrame: @ 0x081F57DE
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081F57E8
	.2byte 0
EventScript_JP_081F57E8: @ 0x081F57E8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x4000, 0x0001
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkUpX4_1
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX4_1
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x0002, 0x0001
	waitdooranim
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_2 + 0x1
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_2
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x0002, 0x0001
	waitdooranim
	setvar 0x8006, 0x0000
	@ event command: warp
	warp MAP_ID_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM, 0xFF, 0x0004, 0x0004
	.byte 0x27, 0x6B, 0x02
LittlerootTown_MaysHouse_2F_Movement_WalkUpX4_1: @ 0x081F582C
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_2: @ 0x081F5831
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
EventText_JP_081F5835: @ 0x081F5835
	.string "1じ　しんさでは　いいセン　いくけど\nなぜか　アピールで　かてないんだ……\pじぶんの　ポケモンばっかり　みてると\nかてないって　ことかなあ{EOS}"
EventText_JP_081F587B: @ 0x081F587B
	.string "みて!　わたしの　ポケモン\nこんなに　リボンが　いっぱい!\pあなたの　ポケモンは　リボン　もらった?\nもらって　いれば　ポケナビで　みられるわよ!{EOS}"
EventText_JP_081F58C5: @ 0x081F58C5
	.string "ジムリーダーにも　かてない……\pコンテストでも　かてない……\pあっちのまち　こっちのまちを\nいったり　きたり　だよ……{EOS}"
EventText_JP_081F5901: @ 0x081F5901
	.string "ポケモン　コンテスト\nスーパーランク　ステージ!{EOS}"
gMapScriptDispatch_FallarborTown_BattleTentBattleRoom_OnTransition_OnFrame_OnWarpIntoMap: @ 0x081F591A
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F592A
	.byte 0x02
	.4byte gMapScriptConditionTable_FallarborTown_BattleTentBattleRoom_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_FallarborTown_BattleTentBattleRoom_OnWarpIntoMap
	.byte 0
EventScript_JP_081F592A: @ 0x081F592A
	call EventScript_JP_081F5930
	end
EventScript_JP_081F5930: @ 0x081F5930
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F5948
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F5953
	return
EventScript_JP_081F5948: @ 0x081F5948
	setvar 0x4011, 0x0064
	setvar 0x4010, 0x0064
	return
EventScript_JP_081F5953: @ 0x081F5953
	setvar 0x4011, 0x0069
	setvar 0x4010, 0x0069
	return
gMapScriptConditionTable_FallarborTown_BattleTentBattleRoom_OnFrame: @ 0x081F595E
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081F5968
	.2byte 0
EventScript_JP_081F5968: @ 0x081F5968
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: showobjectat
	showobjectat 0x0001, MAP_ID_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_WalkInPlaceFastestRight_1
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_081F5BF4
EventScript_JP_081F5990: @ 0x081F5990
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0003
	@ event command: special
	special CallBattleTowerFunc
	@ event command: addobject
	addobject 0x0003
	@ event command: applymovement
	applymovement 0x0003, LittlerootTown_MaysHouse_2F_Movement_WalkDownX4_WalkInPlaceFastestLeft_1
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_DisableJumpLandingGroundEffect_JumpInPlaceDown
	playse 0x00B9
	waitse
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_230916
	callstd 0x04
	setvar 0x8004, 0x0004
	@ event command: special
	special CallVerdanturfTentFunction
	loadword 0x00, 0x02021C7C
	callstd 0x04
	waitmessage
	call 0x0823081C
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F5A1D
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_DisableJumpLandingGroundEffect_JumpInPlaceDown
	playse 0x00C5
	waitse
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0006
	@ event command: special
	special CallFallarborTentFunction
	loadword 0x00, gText_Rom_230944
	callstd 0x04
EventScript_JP_081F59FF: @ 0x081F59FF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special LoadPlayerParty
	@ event command: warp
	warp MAP_ID_FALLARBOR_TOWN_BATTLE_TENT_LOBBY, 0xFF, 0x0006, 0x0006
	.byte 0x27
EventScript_JP_081F5A1D: @ 0x081F5A1D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_DisableJumpLandingGroundEffect_JumpInPlaceDown
	playse 0x0014
	waitse
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_230930
	callstd 0x04
	closemessage
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
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081F5B74
	@ event command: applymovement
	applymovement 0x0003, LittlerootTown_MaysHouse_2F_Movement_WalkUpX4_2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x0003
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_WalkDownX3_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_230958
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
EventScript_JP_081F5AAB: @ 0x081F5AAB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081F5BC4
	compare_var_to_value 0x800D, 0x0002
	call_if 0x01, EventScript_JP_081F5BCB
	multichoice 0x14, 0x06, 0x68, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F5B59
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F5AF9
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F5B27
EventScript_JP_081F5AF9: @ 0x081F5AF9
	loadword 0x00, gText_Rom_230A44
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F5AAB
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F5BD2
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081F5AAB
EventScript_JP_081F5B27: @ 0x081F5B27
	message gText_Rom_230A5E
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F5AAB
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F59FF
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081F5AAB
EventScript_JP_081F5B59: @ 0x081F5B59
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	closemessage
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081F5990
	.byte 0x27
EventScript_JP_081F5B74: @ 0x081F5B74
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	delay 0x003C
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special LoadPlayerParty
	@ event command: warp
	warp MAP_ID_FALLARBOR_TOWN_BATTLE_TENT_LOBBY, 0xFF, 0x0006, 0x0006
	.byte 0x27, 0x16, 0x04, 0x80, 0x01, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x25, 0xED, 0x00, 0x21, 0x0D
	.byte 0x80, 0x0F, 0x27, 0x06, 0x01, 0x34, 0x5A, 0x1F, 0x08, 0x17, 0x0D, 0x80, 0x01, 0x00, 0x16, 0x04
	.byte 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x19, 0x06, 0x80, 0x0D, 0x80, 0x25, 0xED, 0x00
EventScript_JP_081F5BC4: @ 0x081F5BC4
	message gText_Rom_230972
	waitmessage
	return
EventScript_JP_081F5BCB: @ 0x081F5BCB
	message gText_Rom_230995
	waitmessage
	return
EventScript_JP_081F5BD2: @ 0x081F5BD2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_230A7F
	waitmessage
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFallarborTentFunction
	playse 0x0037
	waitse
	fadescreen 0x01
	setvar 0x8004, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	end
EventScript_JP_081F5BF4: @ 0x081F5BF4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_WalkDownX3_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081F5AAB
	.byte 0x02
LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_WalkInPlaceFastestRight_1: @ 0x081F5C0E
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkInPlaceFastestRight: @ 0x081F5C13
	@ object movement sequence
	walk_in_place_fastest_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkInPlaceFastestLeft: @ 0x081F5C15
	@ object movement sequence
	walk_in_place_fastest_left
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX4_WalkInPlaceFastestLeft_1: @ 0x081F5C17
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_left
	step_end
	.globl LittlerootTown_MaysHouse_2F_Movement_WalkLeft
LittlerootTown_MaysHouse_2F_Movement_WalkLeft: @ 0x081F5C1D
	.byte 0x0A, 0xFE
LittlerootTown_MaysHouse_2F_Movement_WalkUpX4_2: @ 0x081F5C1F
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_DisableJumpLandingGroundEffect_JumpInPlaceDown: @ 0x081F5C24
	@ object movement sequence
	disable_jump_landing_ground_effect
	jump_in_place_down
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX3_WalkInPlaceFastestRight: @ 0x081F5C27
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_WalkInPlaceFastestDown: @ 0x081F5C2C
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_down
	step_end
gMapScriptConditionTable_FallarborTown_BattleTentBattleRoom_OnWarpIntoMap: @ 0x081F5C31
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081F5C3B
	.2byte 0
EventScript_JP_081F5C3B: @ 0x081F5C3B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: hideobjectat
	hideobjectat 0x00FF, MAP_ID_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
	@ event command: hideobjectat
	hideobjectat 0x0001, MAP_ID_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
	@ event command: removeobject
	removeobject 0x0003
	setvar 0x4001, 0x0001
	end
gMapScriptDispatch_FallarborTown_PokemonCenter_1F_OnTransition_OnResume: @ 0x081F5C4E
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F5C59
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_081F5C59: @ 0x081F5C59
	setrespawn 0x0011
	call 0x08242978
	end
.globl EventScript_JP_081F5C62
EventScript_JP_081F5C62: @ 0x081F5C62
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_081F5C70
EventScript_JP_081F5C70: @ 0x081F5C70
	loadword 0x00, EventText_JP_081F5DD8
	callstd 0x02
	end
.globl EventScript_JP_081F5C79
EventScript_JP_081F5C79: @ 0x081F5C79
	loadword 0x00, EventText_JP_081F5E18
	callstd 0x02
	end
.globl EventScript_JP_081F5C82
EventScript_JP_081F5C82: @ 0x081F5C82
	lock
	faceplayer
	loadword 0x00, EventText_JP_081F5CEC
	callstd 0x04
	closemessage
	copyvar 0x8000, 0x800C
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F5CA9
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081F5CB9
	end
EventScript_JP_081F5CA9: @ 0x081F5CA9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0004, LittlerootTown_MaysHouse_2F_Movement_WalkRight_WalkDownX2_WalkLeftX4_WalkDownX4_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081F5CC9
	.byte 0x02
EventScript_JP_081F5CB9: @ 0x081F5CB9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0004, LittlerootTown_MaysHouse_2F_Movement_WalkDownX2_WalkLeftX3_WalkDownX4_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081F5CC9
	.byte 0x02
EventScript_JP_081F5CC9: @ 0x081F5CC9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	playse 0x0012
	@ event command: removeobject
	removeobject 0x0004
	clearflag 0x0366
	release
	end
LittlerootTown_MaysHouse_2F_Movement_WalkRight_WalkDownX2_WalkLeftX4_WalkDownX4_Delay8: @ 0x081F5CD4
	@ object movement sequence
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX2_WalkLeftX3_WalkDownX4_Delay8: @ 0x081F5CE1
	@ object movement sequence
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end
EventText_JP_081F5CEC: @ 0x081F5CEC
	.string "あなたは……?\p{PLAYER}{KUN}　というのですか\nあなた　トレーナー　なんですね\pということは　あたしの　つくった\nあずかりシステム　つかってますね?\pだって　つかいたいから\nパソコンの　まえに　いる　あたしに\lはなしかけてきた　という　わけですよね\lかんたんな　すいり　です\pあっ　あたし　マユミ　といいます\pあずかりシステムを　つかっている\nトレーナーに　あえて　すごく　うれしいです\pよかったら　あたしの　いえにも\nあそびに　きてください\l114ばんどうろに　ありますから{EOS}"
EventText_JP_081F5DD8: @ 0x081F5DD8
	.string "おおむかしの　ポケモンって\nどんな　すがた　だったのかしら?\pこの　まちの　はずれにいる\nかせきマニアなら　おしえてくれるかも{EOS}"
EventText_JP_081F5E18: @ 0x081F5E18
	.string "この　ハジツゲの　はたけ　ではな\nかざんばいの　なかでも　そだつような\lじょうぶな　きの　なえを　うえてるんじゃ{EOS}"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
.globl EventScript_JP_081F5E79
EventScript_JP_081F5E79: @ 0x081F5E79
	lock
	faceplayer
	checkflag 0x00E5
	goto_if 0x01, EventScript_JP_081F5F18
	checkitem 0x0118, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F5E9E
	loadword 0x00, EventText_JP_081F5F54
	callstd 0x04
	release
	end
EventScript_JP_081F5E9E: @ 0x081F5E9E
	checkflag 0x0002
	call_if 0x00, EventScript_JP_081F5EF1
	checkflag 0x0002
	call_if 0x01, EventScript_JP_081F5F02
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F5F0B
	loadword 0x00, EventText_JP_081F6035
	callstd 0x04
	setorcopyvar 0x8000, 0x013B
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setvar 0x8004, 0x0118
	call 0x08243467
	setflag 0x00E5
	loadword 0x00, EventText_JP_081F605B
	callstd 0x04
	release
	end
EventScript_JP_081F5EF1: @ 0x081F5EF1
	loadword 0x00, EventText_JP_081F5F54
	callstd 0x04
	loadword 0x00, EventText_JP_081F5FBC
	callstd 0x05
	return
EventScript_JP_081F5F02: @ 0x081F5F02
	loadword 0x00, EventText_JP_081F609F
	callstd 0x05
	return
EventScript_JP_081F5F0B: @ 0x081F5F0B
	setflag 0x0002
	loadword 0x00, EventText_JP_081F6085
	callstd 0x04
	release
	end
EventScript_JP_081F5F18: @ 0x081F5F18
	loadword 0x00, EventText_JP_081F605B
	callstd 0x04
	release
	end
.globl EventScript_JP_081F5F22
EventScript_JP_081F5F22: @ 0x081F5F22
	lock
	faceplayer
	checkflag 0x00E5
	goto_if 0x01, EventScript_JP_081F5F4A
	checkflag 0x008B
	goto_if 0x01, EventScript_JP_081F5F40
	loadword 0x00, EventText_JP_081F60E3
	callstd 0x04
	release
	end
EventScript_JP_081F5F40: @ 0x081F5F40
	loadword 0x00, EventText_JP_081F611C
	callstd 0x04
	release
	end
EventScript_JP_081F5F4A: @ 0x081F5F4A
	loadword 0x00, EventText_JP_081F6138
	callstd 0x04
	release
	end
EventText_JP_081F5F54: @ 0x081F5F54
	.string "ソライシ“ああ……\nマグマだんに　だまされたからと　いって\lいんせきが　てに　はいる　ばしょを\lおしえてしまったら　だめ　だなあ……\pりゅうせいのたき　の　いんせき\nもう　ぼくの　モノには　ならないよな……{EOS}"
EventText_JP_081F5FBC: @ 0x081F5FBC
	.string "おお!　ええ?\pそれは……\pもしかして　もしかすると……\pマグマだんが　りゅうせいのたき　から\nもっていった　いんせき　ですか……!?\pよかったら　ぼくに　ください!\pただで　とは　いいません\nかわりに　この　わざマシンを\lあげますから……{EOS}"
EventText_JP_081F6035: @ 0x081F6035
	.string "ソライシ“この　わざマシンは\nぼくの　きもちです\lぜひ　つかってください!{EOS}"
EventText_JP_081F605B: @ 0x081F605B
	.string "ソライシ“いやー　すごく　うれしいな\nこれで　ぼくの　けんきゅうも　はかどります!{EOS}"
EventText_JP_081F6085: @ 0x081F6085
	.string "ソライシ“そんな……\nものすごく　がっかりだよ……{EOS}"
EventText_JP_081F609F: @ 0x081F609F
	.string "ソライシ“その　いんせき……\nよかったら　ぼくに　ください!\pただで　とは　いいません\nかわりに　この　わざマシンを\lあげますから……{EOS}"
EventText_JP_081F60E3: @ 0x081F60E3
	.string "ソライシはかせは\nマグマだんの　ひとと　いっしょに\l114ばん　どうろに　ある\lりゅうせいのたきに　いきましたよ{EOS}"
EventText_JP_081F611C: @ 0x081F611C
	.string "ソライシはかせ……\nあんなに　おちこんで　かわいそう!{EOS}"
EventText_JP_081F6138: @ 0x081F6138
	.string "ソライシはかせ　ったら\nあんなに　よろこんで　かわいい!{EOS}"
	.byte 0x00
.globl EventScript_JP_081F6156
EventScript_JP_081F6156: @ 0x081F6156
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	checkflag 0x0001
	goto_if 0x01, EventScript_JP_081F617B
	loadword 0x00, EventText_JP_081F622F
	callstd 0x04
	setflag 0x0001
	goto EventScript_JP_081F617B
	.byte 0x02
EventScript_JP_081F617B: @ 0x081F617B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkitem 0x006F, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F6225
	loadword 0x00, EventText_JP_081F62A4
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F6225
	goto EventScript_JP_081F61A9
	.byte 0x02
EventScript_JP_081F61A9: @ 0x081F61A9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081F62CB
	callstd 0x04
	@ event command: special
	special ChooseMonForMoveRelearner
	waitstate
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x01, EventScript_JP_081F6225
	@ event command: special
	special IsSelectedMonEgg
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F6217
	compare_var_to_value 0x8005, 0x0000
	goto_if 0x01, EventScript_JP_081F6209
	goto EventScript_JP_081F61DF
	.byte 0x02
EventScript_JP_081F61DF: @ 0x081F61DF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081F62DB
	callstd 0x04
	@ event command: special
	special TeachMoveRelearnerMove
	waitstate
	compare_var_to_value 0x8004, 0x0000
	goto_if 0x01, EventScript_JP_081F61A9
	loadword 0x00, EventText_JP_081F6310
	callstd 0x04
	takeitem 0x006F, 0x0001
	goto EventScript_JP_081F6225
	.byte 0x02
EventScript_JP_081F6209: @ 0x081F6209
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081F62E9
	callstd 0x04
	goto EventScript_JP_081F61A9
	.byte 0x02
EventScript_JP_081F6217: @ 0x081F6217
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081F634D
	callstd 0x04
	goto EventScript_JP_081F61A9
	.byte 0x02
EventScript_JP_081F6225: @ 0x081F6225
	loadword 0x00, EventText_JP_081F632B
	callstd 0x04
	releaseall
	end
EventText_JP_081F622F: @ 0x081F622F
	.string "ぼく　ポケモン　わざマニア\pポケモンが　せいちょうして　おぼえていく\nわざを　すべて　しっていて\lポケモンに　おしえることが　できるんだ!\pぼくが　いま　あつめている\nハートのウロコを　くれたら\lしってる　わざを　おしえてあげるよ!{EOS}"
EventText_JP_081F62A4: @ 0x081F62A4
	.string "おおっ!\nそれは　まさしく　ハートのウロコ!\pわざを　おぼえさせたいんだね?{EOS}"
EventText_JP_081F62CB: @ 0x081F62CB
	.string "どの　ポケモンに　するんだい?{EOS}"
EventText_JP_081F62DB: @ 0x081F62DB
	.string "どの　わざに　するんだい?{EOS}"
EventText_JP_081F62E9: @ 0x081F62E9
	.string "ごめんね……\pぼくが　その　ポケモンに\nおしえられる　わざは　ないみたいだよ{EOS}"
EventText_JP_081F6310: @ 0x081F6310
	.string "{PLAYER}は　おれいに\nハートのウロコを　1まい　あげた!{EOS}"
EventText_JP_081F632B: @ 0x081F632B
	.string "おぼえさせたい　わざが　あったら\nハートのウロコを　もってきてね!{EOS}"
EventText_JP_081F634D: @ 0x081F634D
	.string "えっ?\nタマゴに　おしえられる　わざは　ないよ{EOS}"
gMapScriptDispatch_VerdanturfTown_BattleTentLobby_OnFrame_OnWarpIntoMap: @ 0x081F6365
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_VerdanturfTown_BattleTentLobby_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_VerdanturfTown_BattleTentLobby_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_VerdanturfTown_BattleTentLobby_OnWarpIntoMap: @ 0x081F6370
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081F637A
	.2byte 0
EventScript_JP_081F637A: @ 0x081F637A
	setvar 0x4001, 0x0001
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_VerdanturfTown_BattleTentLobby_OnFrame: @ 0x081F6384
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081F63AE
	.2byte 0x4000, 0x0001
	.4byte EventScript_JP_081F63B7
	.2byte 0x4000, 0x0002
	.4byte EventScript_JP_081F64CC
	.2byte 0x4000, 0x0003
	.4byte EventScript_JP_081F63EC
	.2byte 0x4000, 0x0004
	.4byte EventScript_JP_081F6492
	.2byte 0
EventScript_JP_081F63AE: @ 0x081F63AE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	end
EventScript_JP_081F63B7: @ 0x081F63B7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_22A7B5
	callstd 0x04
	closemessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x4000, 0x00FF
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	releaseall
	end
EventScript_JP_081F63EC: @ 0x081F63EC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_2752A6
	callstd 0x04
	message gText_Rom_2752D8
	waitmessage
	setvar 0x8004, 0x0006
	@ event command: special
	special CallVerdanturfTentFunction
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0005
	setvar 0x8005, 0x0000
	@ event command: special
	special CallVerdanturfTentFunction
	playse 0x0037
	waitse
EventScript_JP_081F6426: @ 0x081F6426
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2752ED
	callstd 0x04
	setvar 0x8004, 0x0007
	@ event command: special
	special CallVerdanturfTentFunction
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F6472
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	message gText_Rom_227865
	waitmessage
	playfanfare 0x0172
	waitfanfare
	loadword 0x00, gText_Rom_2750A3
	callstd 0x04
	closemessage
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_081F6472: @ 0x081F6472
	loadword 0x00, gText_Rom_22A766
	callstd 0x04
	waitmessage
	closemessage
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_081F6483: @ 0x081F6483
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_2752A6
	callstd 0x04
	goto EventScript_JP_081F6426
	.byte 0x02
EventScript_JP_081F6492: @ 0x081F6492
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	message gText_Rom_27527B
	waitmessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0005
	setvar 0x8005, 0x0000
	@ event command: special
	special CallVerdanturfTentFunction
	playse 0x0037
	waitse
	loadword 0x00, gText_Rom_2750A3
	callstd 0x04
	closemessage
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_081F64CC: @ 0x081F64CC
	lockall
	loadword 0x00, gText_Rom_22A790
	callstd 0x04
	message gText_Rom_22A79A
	waitmessage
	setvar 0x8004, 0x0005
	setvar 0x8005, 0x0001
	@ event command: special
	special CallVerdanturfTentFunction
	playse 0x0037
	waitse
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0003
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x4000, 0x00FF
	goto EventScript_JP_081F6643
.globl EventScript_JP_081F6508
EventScript_JP_081F6508: @ 0x081F6508
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8004, 0x0001
	@ event command: special
	special CallVerdanturfTentFunction
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_081F6483
	@ event command: special
	special SavePlayerParty
	loadword 0x00, gText_Rom_274F21
	callstd 0x04
EventScript_JP_081F6528: @ 0x081F6528
	message gText_Rom_274F55
	waitmessage
	multichoice 0x11, 0x06, 0x17, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F6564
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F6670
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F66CC
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081F66CC
EventScript_JP_081F6564: @ 0x081F6564
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x40CF, 0x0002
	setvar 0x40CE, 0x0000
	setvar 0x800D, 0x0002
	setvar 0x8004, 0x000F
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x8004, 0x0001
	goto_if 0x01, EventScript_JP_081F667D
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	loadword 0x00, gText_Rom_27522E
	callstd 0x04
	fadescreen 0x01
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0003
	@ event command: special
	special ChoosePartyForBattleFrontier
	waitstate
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F66C9
	loadword 0x00, gText_Rom_27524A
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F66C9
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F65E9
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081F66C9
EventScript_JP_081F65E9: @ 0x081F65E9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4000, 0x0000
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0000
	@ event command: special
	special CallVerdanturfTentFunction
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
	goto_if 0x01, EventScript_JP_081F66B2
EventScript_JP_081F6643: @ 0x081F6643
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special SavePlayerParty
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	loadword 0x00, gText_Rom_27526A
	callstd 0x04
	closemessage
	call EventScript_JP_081F66D6
	@ event command: warp
	warp MAP_ID_VERDANTURF_TOWN_BATTLE_TENT_CORRIDOR, 0xFF, 0x0002, 0x0007
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_081F6670: @ 0x081F6670
	loadword 0x00, gText_Rom_274F71
	callstd 0x04
	goto EventScript_JP_081F6528
EventScript_JP_081F667D: @ 0x081F667D
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F6698
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F66A5
EventScript_JP_081F6698: @ 0x081F6698
	loadword 0x00, gText_Rom_2750F0
	callstd 0x04
	goto EventScript_JP_081F66D4
EventScript_JP_081F66A5: @ 0x081F66A5
	loadword 0x00, gText_Rom_27518F
	callstd 0x04
	goto EventScript_JP_081F66D4
EventScript_JP_081F66B2: @ 0x081F66B2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	goto EventScript_JP_081F66CC
EventScript_JP_081F66C9: @ 0x081F66C9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special LoadPlayerParty
EventScript_JP_081F66CC: @ 0x081F66CC
	loadword 0x00, gText_Rom_2750A3
	callstd 0x04
EventScript_JP_081F66D4: @ 0x081F66D4
	release
	end
EventScript_JP_081F66D6: @ 0x081F66D6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_3
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_3
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x0006, 0x0001
	waitdooranim
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkUp_SetInvisible_2
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_3
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x0006, 0x0001
	waitdooranim
	return
LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_3: @ 0x081F6705
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUp_SetInvisible_2: @ 0x081F6709
	@ object movement sequence
	walk_up
	set_invisible
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_3: @ 0x081F670C
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
.globl EventScript_JP_081F6710
EventScript_JP_081F6710: @ 0x081F6710
	lock
	faceplayer
	checkflag 0x00EB
	goto_if 0x01, EventScript_JP_081F6747
	loadword 0x00, EventText_JP_081F696C
	callstd 0x04
	setorcopyvar 0x8000, 0x014D
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00EB
	loadword 0x00, EventText_JP_081F69C3
	callstd 0x04
	release
	end
EventScript_JP_081F6747: @ 0x081F6747
	loadword 0x00, EventText_JP_081F69C3
	callstd 0x04
	release
	end
.globl EventScript_JP_081F6751
EventScript_JP_081F6751: @ 0x081F6751
	loadword 0x00, EventText_JP_081F6A08
	callstd 0x02
	end
.globl EventScript_JP_081F675A
EventScript_JP_081F675A: @ 0x081F675A
	lock
	loadword 0x00, EventText_JP_081F6869
	callstd 0x04
	release
	end
.globl EventScript_JP_081F6765
EventScript_JP_081F6765: @ 0x081F6765
	lock
	faceplayer
	checkflag 0x01CC
	goto_if 0x01, EventScript_JP_081F6782
	loadword 0x00, EventText_JP_081F6A5B
	callstd 0x04
	addvar 0x40D1, 0x0001
	setflag 0x01CC
	release
	end
EventScript_JP_081F6782: @ 0x081F6782
	loadword 0x00, EventText_JP_081F6ADD
	callstd 0x04
	release
	end
.globl EventScript_JP_081F678C
EventScript_JP_081F678C: @ 0x081F678C
	lock
	loadword 0x00, EventText_JP_081F6909
	callstd 0x04
	release
	end
.globl EventScript_JP_081F6797
EventScript_JP_081F6797: @ 0x081F6797
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_275C42
	callstd 0x04
	goto EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F67A6: @ 0x081F67A6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_22AC54
	waitmessage
	setvar 0x8004, 0x000C
	@ event command: special
	special ShowScrollableMultichoice
	waitstate
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F6813
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F6821
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F682F
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081F683D
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081F684B
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_081F6859
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_081F6867
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081F6867
	end
EventScript_JP_081F6813: @ 0x081F6813
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_275BCD
	callstd 0x04
	goto EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F6821: @ 0x081F6821
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22AC64
	callstd 0x04
	goto EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F682F: @ 0x081F682F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22ACC9
	callstd 0x04
	goto EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F683D: @ 0x081F683D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22AD4C
	callstd 0x04
	goto EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F684B: @ 0x081F684B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22AE0B
	callstd 0x04
	goto EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F6859: @ 0x081F6859
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_22AEA7
	callstd 0x04
	goto EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F6867: @ 0x081F6867
	releaseall
	end
EventText_JP_081F6869: @ 0x081F6869
	.string "どんなに　つよい　ポケモンも\nきらいな　わざは　できるだけ\lつかいたく　ない　みたい\pたとえば　おとなしい　せいかくの\nポケモンは　あいてを　いため　つけたり\lするのは　すきじゃ　ない　だろうね\pきっと　じぶんの　ちからを　はっき　できない\nとき　って　きらいな　わざを　むりに\lだそう　として　しっぱい　してるんだよ{EOS}"
EventText_JP_081F6909: @ 0x081F6909
	.string "でもでも　ぼくの　おねえちゃん　って\nふだんは　とっても　おとなしい　けど\lおこると　すっごーーーく　こわーーーいよ!\pだから　おとなしい　ポケモン　だって\nおこったら　きっと　こわーーーいよ!!{EOS}"
EventText_JP_081F696C: @ 0x081F696C
	.string "あたしの　ポケモンへの　きもち……\nそれは　まさに　メロメロなのよ……\pあら　へんなところ　みられちゃった\pまあ　いいわ\nあなたの　ポケモンに\lこの　わざマシンは　いかが?{EOS}"
EventText_JP_081F69C3: @ 0x081F69C3
	.string "ポケモンの　あたしへの　きもちも……\nやっぱり　メロメロに　ちがいないわ!\pだって　あたしの　おもう　とおりに\nたたかって　くれるもの!{EOS}"
EventText_JP_081F6A08: @ 0x081F6A08
	.string "きみの　ポケモンには\nどんなわざを　もたせて　いるんだい?\pやっぱり　じぶんを　かいふくしたり\nぼうぎょを　あげたり　するわざが　あると\lゆうり　だと　おもうんだよ{EOS}"
EventText_JP_081F6A5B: @ 0x081F6A5B
	.string "エニシダ“これは　これは\n{PLAYER}{KUN}　あえると　おもってたよ!\pバトルテント　って　いうのはさ!\nどんな　ルール　だって\lどんな　たたかいかた　だって\lかんけいなく　つよい　トレーナーと\lであえる　ばしょだと　おもうよ!\p{PLAYER}{KUN}も　めいっぱい\nがんばってよ!{EOS}"
EventText_JP_081F6ADD: @ 0x081F6ADD
	.string "エニシダ“どんな　ときにも　つよい\nトレーナーに　あいたくって\lわたしは　ここに　かよって　いるんだよね{EOS}"
gMapScriptDispatch_VerdanturfTown_BattleTentCorridor_OnFrame: @ 0x081F6B12
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_VerdanturfTown_BattleTentCorridor_OnFrame
	.byte 0
gMapScriptConditionTable_VerdanturfTown_BattleTentCorridor_OnFrame: @ 0x081F6B18
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081F6B22
	.2byte 0
EventScript_JP_081F6B22: @ 0x081F6B22
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x4000, 0x0001
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkUpX4_3
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX4_3
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x0002, 0x0001
	waitdooranim
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_4 + 0x1
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_4
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x0002, 0x0001
	waitdooranim
	setvar 0x8006, 0x0000
	@ event command: warp
	warp MAP_ID_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM, 0xFF, 0x0006, 0x0005
	.byte 0x27, 0x6B, 0x02
LittlerootTown_MaysHouse_2F_Movement_WalkUpX4_3: @ 0x081F6B66
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_4: @ 0x081F6B6B
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
EventText_JP_081F6B6F: @ 0x081F6B6F
	.string "きみ　なにコンテストに　でるの?\nひとつ　アドバイス　してあげるよ!\pたとえば　かわいさコンテスト　でも\n1じしんさで　かわいさ　だけが\lみられてる　わけじゃ　ないみたいなんだ\pそだてかたを　くふう　したほうが　いいよ!{EOS}"
EventText_JP_081F6BDE: @ 0x081F6BDE
	.string "ポケモンが　かわいく　なるように\nそだてて　いたんだけど\pコンテストって　かわいらしさも\nきそう　ことが　できるのね!\pだいじに　そだてて　よかった……{EOS}"
EventText_JP_081F6C2B: @ 0x081F6C2B
	.string "おれの　ポケモン……\pそりゃあ　もう　かっこよくて\nたくましくて　うつくしくて\lかわいくて　かしこいんだけど　さ\pこうなったら　ぜんぶの　コンテストで\nかたっぱし　から　ゆうしょう　ねらうか!{EOS}"
EventText_JP_081F6C8C: @ 0x081F6C8C
	.string "ポケモン　コンテスト\nノーマルランク　ステージ!{EOS}"
gMapScriptDispatch_VerdanturfTown_BattleTentBattleRoom_OnTransition_OnFrame_OnWarpIntoMap: @ 0x081F6CA5
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F6CB5
	.byte 0x02
	.4byte gMapScriptConditionTable_VerdanturfTown_BattleTentBattleRoom_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_VerdanturfTown_BattleTentBattleRoom_OnWarpIntoMap
	.byte 0
EventScript_JP_081F6CB5: @ 0x081F6CB5
	call EventScript_JP_081F6CBB
	end
EventScript_JP_081F6CBB: @ 0x081F6CBB
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F6CD3
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F6CD9
	return
EventScript_JP_081F6CD3: @ 0x081F6CD3
	setvar 0x4011, 0x0064
	return
EventScript_JP_081F6CD9: @ 0x081F6CD9
	setvar 0x4011, 0x0069
	return
gMapScriptConditionTable_VerdanturfTown_BattleTentBattleRoom_OnFrame: @ 0x081F6CDF
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081F6CE9
	.2byte 0
EventScript_JP_081F6CE9: @ 0x081F6CE9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: showobjectat
	showobjectat 0x0001, MAP_ID_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_SetVisible_WalkUpX3_FaceRight
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_081F6DDD
EventScript_JP_081F6D10: @ 0x081F6D10
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0003
	@ event command: special
	special CallBattleTowerFunc
	@ event command: addobject
	addobject 0x0002
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_WalkDownX4_FaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0004
	@ event command: special
	special CallVerdanturfTentFunction
	loadword 0x00, 0x02021C7C
	callstd 0x04
	waitmessage
	call EventScript_JP_0822B737
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F6D69
EventScript_JP_081F6D4B: @ 0x081F6D4B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special LoadPlayerParty
	@ event command: warp
	warp MAP_ID_VERDANTURF_TOWN_BATTLE_TENT_LOBBY, 0xFF, 0x0006, 0x0006
	.byte 0x27
EventScript_JP_081F6D69: @ 0x081F6D69
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
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
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081F6EA2
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_WalkUpX4
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x0002
	@ event command: applymovement
	applymovement 0x0003, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterUp
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
EventScript_JP_081F6DDD: @ 0x081F6DDD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081F6F06
	compare_var_to_value 0x800D, 0x0002
	call_if 0x01, EventScript_JP_081F6F0D
	multichoice 0x14, 0x06, 0x68, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F6E8B
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F6E2B
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F6E59
EventScript_JP_081F6E2B: @ 0x081F6E2B
	loadword 0x00, gText_Rom_22B909
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F6DDD
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F6EC0
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081F6DDD
EventScript_JP_081F6E59: @ 0x081F6E59
	message gText_Rom_22B91F
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F6DDD
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F6D4B
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081F6DDD
EventScript_JP_081F6E8B: @ 0x081F6E8B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0003, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	closemessage
	goto EventScript_JP_081F6D10
EventScript_JP_081F6EA2: @ 0x081F6EA2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special LoadPlayerParty
	@ event command: warp
	warp MAP_ID_VERDANTURF_TOWN_BATTLE_TENT_LOBBY, 0xFF, 0x0006, 0x0006
	.byte 0x27
EventScript_JP_081F6EC0: @ 0x081F6EC0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_22B931
	waitmessage
	setvar 0x8004, 0x0005
	setvar 0x8005, 0x0002
	@ event command: special
	special CallVerdanturfTentFunction
	playse 0x0037
	waitse
	fadescreen 0x01
	setvar 0x8004, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	end
gMapScriptConditionTable_VerdanturfTown_BattleTentBattleRoom_OnWarpIntoMap: @ 0x081F6EE2
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081F6EEC
	.2byte 0
EventScript_JP_081F6EEC: @ 0x081F6EEC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: hideobjectat
	hideobjectat 0x0001, MAP_ID_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM
	call EventScript_JP_081F6CBB
	setvar 0x4001, 0x0001
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_SetInvisible
	@ event command: removeobject
	removeobject 0x0002
	end
EventScript_JP_081F6F06: @ 0x081F6F06
	message gText_Rom_22B855
	waitmessage
	return
EventScript_JP_081F6F0D: @ 0x081F6F0D
	message gText_Rom_22B873
	waitmessage
	return
LittlerootTown_MaysHouse_2F_Movement_SetInvisible: @ 0x081F6F14
	@ object movement sequence
	set_invisible
	step_end
LittlerootTown_MaysHouse_2F_Movement_SetVisible_WalkUpX3_FaceRight: @ 0x081F6F16
	@ object movement sequence
	set_visible
	walk_up
	walk_up
	walk_up
	face_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX4_FaceLeft: @ 0x081F6F1C
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	face_left
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUpX4: @ 0x081F6F22
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
	.byte 0x00
.globl EventScript_JP_081F6F28
EventScript_JP_081F6F28: @ 0x081F6F28
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x081F6F40
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x03, 0x00, 0x08, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11, 0x00, 0x0F, 0x00, 0x10
	.byte 0x00, 0x56, 0x00, 0x4F, 0x00, 0x51, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_081F6F5A
EventScript_JP_081F6F5A: @ 0x081F6F5A
	loadword 0x00, EventText_JP_081F6F75
	callstd 0x02
	end
.globl EventScript_JP_081F6F63
EventScript_JP_081F6F63: @ 0x081F6F63
	loadword 0x00, EventText_JP_081F6FB5
	callstd 0x02
	end
.globl EventScript_JP_081F6F6C
EventScript_JP_081F6F6C: @ 0x081F6F6C
	loadword 0x00, EventText_JP_081F6FF7
	callstd 0x02
	end
EventText_JP_081F6F75: @ 0x081F6F75
	.string "ポケモン　しょうぶに\nスペシャルアップは　かかせない!\pたたかいの　ときだけ　とはいえ\nわざの　いりょくが　あがるんだからな!{EOS}"
EventText_JP_081F6FB5: @ 0x081F6FB5
	.string "バトルテント　ひっしょう\nこうりゃくぼん　というのは\lうってない　ですねえ……\pやはり　じぶんで\nがんばらないと　ダメなんですねえ{EOS}"
EventText_JP_081F6FF7: @ 0x081F6FF7
	.string "シダケでしか　かえない　ネストボール\nよわい　ポケモンほど　つかまえ　やすくなるの{EOS}"
gMapScriptDispatch_VerdanturfTown_PokemonCenter_1F_OnTransition_OnResume: @ 0x081F7021
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F702C
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_081F702C: @ 0x081F702C
	setrespawn 0x0012
	call 0x08242978
	end
.globl EventScript_JP_081F7035
EventScript_JP_081F7035: @ 0x081F7035
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_081F7043
EventScript_JP_081F7043: @ 0x081F7043
	loadword 0x00, EventText_JP_081F7055
	callstd 0x02
	end
.globl EventScript_JP_081F704C
EventScript_JP_081F704C: @ 0x081F704C
	loadword 0x00, EventText_JP_081F70A5
	callstd 0x02
	end
EventText_JP_081F7055: @ 0x081F7055
	.string "ポケモンを　しんじられない　ようでは\nいちにんまえ　とは　いえないね\pたたかう　ポケモンたちを\nさいごまで　しんじる　ものだけが\lかちぬく　ことが　できるんだ{EOS}"
EventText_JP_081F70A5: @ 0x081F70A5
	.string "シダケにくる　りゆうと　いえば\nずばり　バトルテントじゃろ?\pそれとも　だれか　あいたい　ひとでも\nいるのかね?{EOS}"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
.globl EventScript_JP_081F7106
EventScript_JP_081F7106: @ 0x081F7106
	lock
	faceplayer
	checkflag 0x00C1
	goto_if 0x01, EventScript_JP_081F711E
	loadword 0x00, EventText_JP_081F71DA
	callstd 0x04
	setflag 0x00C1
	release
	end
EventScript_JP_081F711E: @ 0x081F711E
	loadword 0x00, EventText_JP_081F7267
	callstd 0x04
	release
	end
.globl EventScript_JP_081F7128
EventScript_JP_081F7128: @ 0x081F7128
	lock
	faceplayer
	checkflag 0x007E
	goto_if 0x01, EventScript_JP_081F7150
	checkflag 0x04F3
	goto_if 0x01, EventScript_JP_081F7146
	loadword 0x00, EventText_JP_081F729B
	callstd 0x04
	release
	end
EventScript_JP_081F7146: @ 0x081F7146
	loadword 0x00, EventText_JP_081F731F
	callstd 0x04
	release
	end
EventScript_JP_081F7150: @ 0x081F7150
	loadword 0x00, EventText_JP_081F733A
	callstd 0x04
	release
	end
.globl EventScript_JP_081F715A
EventScript_JP_081F715A: @ 0x081F715A
	loadword 0x00, EventText_JP_081F742C
	callstd 0x02
	end
.globl EventScript_JP_081F7163
EventScript_JP_081F7163: @ 0x081F7163
	lock
	faceplayer
	checkflag 0x04F3
	goto_if 0x01, EventScript_JP_081F718B
	checkflag 0x00BE
	goto_if 0x01, EventScript_JP_081F7181
	loadword 0x00, EventText_JP_081F73E3
	callstd 0x04
	release
	end
EventScript_JP_081F7181: @ 0x081F7181
	loadword 0x00, EventText_JP_081F7378
	callstd 0x04
	release
	end
EventScript_JP_081F718B: @ 0x081F718B
	loadword 0x00, EventText_JP_081F73E3
	callstd 0x04
	release
	end
.globl EventScript_JP_081F7195
EventScript_JP_081F7195: @ 0x081F7195
	lock
	faceplayer
	checkflag 0x007E
	goto_if 0x01, EventScript_JP_081F71D0
	checkflag 0x04F3
	goto_if 0x01, EventScript_JP_081F71C6
	checkflag 0x00C7
	goto_if 0x01, EventScript_JP_081F71BC
	loadword 0x00, EventText_JP_081F7450
	callstd 0x04
	release
	end
EventScript_JP_081F71BC: @ 0x081F71BC
	loadword 0x00, EventText_JP_081F74B7
	callstd 0x04
	release
	end
EventScript_JP_081F71C6: @ 0x081F71C6
	loadword 0x00, EventText_JP_081F74ED
	callstd 0x04
	release
	end
EventScript_JP_081F71D0: @ 0x081F71D0
	loadword 0x00, EventText_JP_081F7524
	callstd 0x04
	release
	end
EventText_JP_081F71DA: @ 0x081F71DA
	.string "ミツル“{PLAYER}さんに　まけたけど\nもう　おちこんでないよ\pだって　ラルトスと　いっしょに\nあちこちの　ジムで　うでだめし　して\lすごい　トレーナーに　なるって\lもくひょうが　できたから!\pいつか　{PLAYER}さん　よりも\nつよくなって　もういちど\lポケモンしょうぶを　おねがい　するからね!{EOS}"
EventText_JP_081F7267: @ 0x081F7267
	.string "ミツル“いつか　{PLAYER}さん　よりも\nつよくなって　もういちど\lポケモンしょうぶを　おねがい　するからね!{EOS}"
EventText_JP_081F729B: @ 0x081F729B
	.string "おじさん“おお!　{PLAYER}{KUN}\nミツルくんは　となりに　いるよ!\pしかし　たいした　もんだね!\pしぜんに　かこまれた　かんきょうが\nミツルくんを　げんきに　させている!\p……いや　もしかすると\nあのこに　きぼうを　あたえて　いるのは\pポケモンなのかも　しれないな……{EOS}"
EventText_JP_081F731F: @ 0x081F731F
	.string "ミツルくん……\nいつのまにか　いなくなっちゃった……{EOS}"
EventText_JP_081F733A: @ 0x081F733A
	.string "おじさん“そうですか……\nあの　ミツルくんが\lひとりで　そんな　とおくまで……\pさすがは　わたしの　おとうとの　むすこだ!{EOS}"
EventText_JP_081F7378: @ 0x081F7378
	.string "ミチル“あなたは……?\n……あ　そうか!\pミツルくんが　いってた\n{PLAYER}さんって　あなたの　ことね!\pわたしは　ミツルくんの　いとこ　なの!\pどう?　あのこ　こっちに　きてから\nずいぶん　げんきに　なったでしょう?{EOS}"
EventText_JP_081F73E3: @ 0x081F73E3
	.string "ミチル“ミツルくんの　ことなら\nだいじょうぶ!　しんぱい　ないわよ!\pだって　わたしの　いとこ　だし\nなにより　ポケモンが　いっしょ　ですもの!{EOS}"
EventText_JP_081F742C: @ 0x081F742C
	.string "きみの　おかげで\nまいにち　かのじょに　あえて\lおれは　ハッピーだよ!{EOS}"
EventText_JP_081F7450: @ 0x081F7450
	.string "うちの　むすめの　こいびとは\nずいぶん　じょうねつてきな　ひとでね\pむすめに　あうため　だけに\nひたすら　トンネルを　ほってるってよ!\pむすめも　しんぱい　なのか\nいつも　トンネルに　あしを　はこんでるよ{EOS}"
EventText_JP_081F74B7: @ 0x081F74B7
	.string "なんと!　むすめの　こいびと　ときたら\nすでで　トンネルを　ほっていたって!\pそりゃあ　たまげた　もんだ!{EOS}"
EventText_JP_081F74ED: @ 0x081F74ED
	.string "ミツルくんに　もしものことが　あったら\nあたしゃ　トウカにいる　ごりょうしんに\lあわせる　かおが　ないよ……{EOS}"
EventText_JP_081F7524: @ 0x081F7524
	.string "ミツルくんが　サイユウに　いたって!?\pそりゃ　トウカの　ごりょうしんも\nびっくり　するだろうねぇ{EOS}"
	.byte 0x00
.globl EventScript_JP_081F7557
EventScript_JP_081F7557: @ 0x081F7557
	lock
	faceplayer
	loadword 0x00, EventText_JP_081F7613
	callstd 0x04
	specialvar_ 0x800D, 0x00E6
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081F75BA
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F75C4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F75CE
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081F75D8
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081F75E2
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_081F75EC
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_081F75F6
	release
	end
EventScript_JP_081F75BA: @ 0x081F75BA
	loadword 0x00, EventText_JP_081F773C
	callstd 0x04
	release
	end
EventScript_JP_081F75C4: @ 0x081F75C4
	loadword 0x00, EventText_JP_081F7705
	callstd 0x04
	release
	end
EventScript_JP_081F75CE: @ 0x081F75CE
	loadword 0x00, EventText_JP_081F76DC
	callstd 0x04
	release
	end
EventScript_JP_081F75D8: @ 0x081F75D8
	loadword 0x00, EventText_JP_081F76B4
	callstd 0x04
	release
	end
EventScript_JP_081F75E2: @ 0x081F75E2
	loadword 0x00, EventText_JP_081F7693
	callstd 0x04
	release
	end
EventScript_JP_081F75EC: @ 0x081F75EC
	loadword 0x00, EventText_JP_081F7675
	callstd 0x04
	release
	end
EventScript_JP_081F75F6: @ 0x081F75F6
	loadword 0x00, EventText_JP_081F7641
	callstd 0x04
	release
	end
.globl EventScript_JP_081F7600
EventScript_JP_081F7600: @ 0x081F7600
	lock
	faceplayer
	waitse
	playmoncry 0x0019, 0x0000
	loadword 0x00, EventText_JP_081F7772
	callstd 0x04
	waitmoncry
	release
	end
EventText_JP_081F7613: @ 0x081F7613
	.string "あなたの　ポケモンが\nどれくらい　なついているか　みてあげる\pあら……\nあなたの　ポケモン{EOS}"
EventText_JP_081F7641: @ 0x081F7641
	.string "これいじょうは　ない　ってぐらい\nあなたに　なついているわね\lみている　こっちも　しあわせに　なるわ!{EOS}"
EventText_JP_081F7675: @ 0x081F7675
	.string "なんだか　しあわせそう\nすごく　あなたに　なついているわね{EOS}"
EventText_JP_081F7693: @ 0x081F7693
	.string "かなり　なついているわね\nあなたに　あまえたそうに　しているわよ{EOS}"
EventText_JP_081F76B4: @ 0x081F76B4
	.string "ちょっと　なついてきた　って　かんじ　かな\nあなたのこと　しんじている　みたい{EOS}"
EventText_JP_081F76DC: @ 0x081F76DC
	.string "まだ　あなたに　なれていない　ようね\nふつうの　かんけい　って　かんじが　するわ{EOS}"
EventText_JP_081F7705: @ 0x081F7705
	.string "……　なんだか　けいかい　しているみたい\nめつきも　ちょっと　こわいし\lぜんぜん　あなたに　なついていないわ{EOS}"
EventText_JP_081F773C: @ 0x081F773C
	.string "……　ちょっと　いいづらいんだけど\pあなた　じぶんの　ポケモンに\nそんなに　きらわれていて　だいじょうぶ?{EOS}"
EventText_JP_081F7772: @ 0x081F7772
	.string "ピカチュウ“ピカピカッ!{EOS}"
	.byte 0x00
.globl EventScript_JP_081F7780
EventScript_JP_081F7780: @ 0x081F7780
	loadword 0x00, EventText_JP_081F7792
	callstd 0x02
	end
.globl EventScript_JP_081F7789
EventScript_JP_081F7789: @ 0x081F7789
	loadword 0x00, EventText_JP_081F77D7
	callstd 0x02
	end
EventText_JP_081F7792: @ 0x081F7792
	.string "とおく　はなれた\nサイユウの　おくちに　ある　という\lポケモン　リーグ\pそこに　あつまるのは\nすごうでの　トレーナー　ばかり　ですって!{EOS}"
EventText_JP_081F77D7: @ 0x081F77D7
	.string "ポケモン　リーグは\nしてんのう　4にん　つづけて\lしょうぶする　という　ルールらしいの!\pとちゅうで　まけたら　ひとりめ　から\nやりなおし　だなんて　きびしいのね!{EOS}"
gMapScriptDispatch_PacifidlogTown_PokemonCenter_1F_OnTransition_OnResume: @ 0x081F782A
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F7835
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_081F7835: @ 0x081F7835
	setrespawn 0x0013
	end
.globl EventScript_JP_081F7839
EventScript_JP_081F7839: @ 0x081F7839
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_081F7847
EventScript_JP_081F7847: @ 0x081F7847
	loadword 0x00, EventText_JP_081F7862
	callstd 0x02
	end
.globl EventScript_JP_081F7850
EventScript_JP_081F7850: @ 0x081F7850
	loadword 0x00, EventText_JP_081F7887
	callstd 0x02
	end
.globl EventScript_JP_081F7859
EventScript_JP_081F7859: @ 0x081F7859
	loadword 0x00, EventText_JP_081F78C3
	callstd 0x02
	end
EventText_JP_081F7862: @ 0x081F7862
	.string "きみの　トレーナーカードは　なにいろ?\nあたしのは　カッパー　なんだよ!{EOS}"
EventText_JP_081F7887: @ 0x081F7887
	.string "キナギタウンって　サニーゴたちの\nあつまりの　うえに　うかんでいるの\p……なんて　いったら\nあなたは　しんじるかしら?{EOS}"
EventText_JP_081F78C3: @ 0x081F78C3
	.string "キナギで　くらす　ひとびとの　せんぞは\nふねの　うえで　うまれて\lそして　ふねの　うえで　しんだ　という\pなにかを　さがすために\nそんな　いきかたを　していたそうじゃ{EOS}"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
.globl EventScript_JP_081F793F
EventScript_JP_081F793F: @ 0x081F793F
	loadword 0x00, EventText_JP_081F7951
	callstd 0x02
	end
.globl EventScript_JP_081F7948
EventScript_JP_081F7948: @ 0x081F7948
	loadword 0x00, EventText_JP_081F79BE
	callstd 0x02
	end
EventText_JP_081F7951: @ 0x081F7951
	.string "ホウエンちほう　には\nいわ……　こおり……　はがね……\pそれぞれの　ちからを　つかさどる\n3びきの　ポケモンが\lそれぞれ　どこかの　どうくつに　いる……\pおれ　ちいさな　ころに\nそんな　はなしを　きいたことが　あるよ{EOS}"
EventText_JP_081F79BE: @ 0x081F79BE
	.string "‘むっつの　てんが\n　みっつの　とびらを　あける’\pおじいちゃんが　よく　いっていたけど\nいまだに　なんのことだか　わからないわ{EOS}"
	.byte 0x00
.globl EventScript_JP_081F7A00
EventScript_JP_081F7A00: @ 0x081F7A00
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	dotimebasedevents
	call EventScript_JP_081F7A4C
	checkflag 0x012B
	goto_if 0x01, EventScript_JP_081F7AEC
	checkflag 0x012C
	call_if 0x01, EventScript_JP_081F7A66
	checkflag 0x012C
	call_if 0x00, EventScript_JP_081F7A6F
	setflag 0x012C
	specialvar_ 0x800D, 0x00E6
	compare_var_to_value 0x800D, 0x0004
	goto_if 0x04, EventScript_JP_081F7A84
	specialvar_ 0x800D, 0x00E6
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x04, EventScript_JP_081F7AB3
	goto EventScript_JP_081F7ABD
	.byte 0x02
EventScript_JP_081F7A4C: @ 0x081F7A4C
	checkflag 0x012B
	goto_if 0x00, 0x08244178
	specialvar_ 0x800D, 0x014D
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_081F7A80
	return
EventScript_JP_081F7A66: @ 0x081F7A66
	loadword 0x00, EventText_JP_081F7B93
	callstd 0x04
	return
EventScript_JP_081F7A6F: @ 0x081F7A6F
	loadword 0x00, EventText_JP_081F7B35
	callstd 0x04
	loadword 0x00, EventText_JP_081F7B93
	callstd 0x04
	return
EventScript_JP_081F7A80: @ 0x081F7A80
	clearflag 0x012B
	return
EventScript_JP_081F7A84: @ 0x081F7A84
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081F7BA2
	callstd 0x04
	setorcopyvar 0x8000, 0x013B
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x012B
	@ event command: special
	special SetPacifidlogTMReceivedDay
	loadword 0x00, EventText_JP_081F7C43
	callstd 0x04
	release
	end
EventScript_JP_081F7AB3: @ 0x081F7AB3
	loadword 0x00, EventText_JP_081F7BD5
	callstd 0x04
	release
	end
EventScript_JP_081F7ABD: @ 0x081F7ABD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081F7C0F
	callstd 0x04
	setorcopyvar 0x8000, 0x0135
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x012B
	@ event command: special
	special SetPacifidlogTMReceivedDay
	loadword 0x00, EventText_JP_081F7C43
	callstd 0x04
	release
	end
EventScript_JP_081F7AEC: @ 0x081F7AEC
	specialvar_ 0x800D, 0x014D
	buffernumberstring 0x00, 0x800D
	loadword 0x00, EventText_JP_081F7C8C
	callstd 0x04
	release
	end
.globl EventScript_JP_081F7AFF
EventScript_JP_081F7AFF: @ 0x081F7AFF
	lock
	faceplayer
	waitse
	playmoncry 0x015E, 0x0000
	loadword 0x00, EventText_JP_081F7CE4
	callstd 0x04
	waitmoncry
	loadword 0x00, EventText_JP_081F7CEC
	callstd 0x04
	release
	end
.globl EventScript_JP_081F7B1A
EventScript_JP_081F7B1A: @ 0x081F7B1A
	lock
	faceplayer
	waitse
	playmoncry 0x015E, 0x0002
	loadword 0x00, EventText_JP_081F7CFC
	callstd 0x04
	waitmoncry
	loadword 0x00, EventText_JP_081F7D07
	callstd 0x04
	release
	end
EventText_JP_081F7B35: @ 0x081F7B35
	.string "ウォッホン!!\pわしが　ポケモン　だいすきクラブで\nいちばーん　えらい　かいちょうの……\pおとうと　ですぞ!\pまあ　ここで　ポケモンと　いっしょに\nバカンスを　たのしんで　おるのですな!{EOS}"
EventText_JP_081F7B93: @ 0x081F7B93
	.string "ほう!\nきみの　ポケモン……{EOS}"
EventText_JP_081F7BA2: @ 0x081F7BA2
	.string "とっても　なついて　いますなあ\pそんな　かわいらしい　ポケモンには\nこの　わざマシン　どうですかな?{EOS}"
EventText_JP_081F7BD5: @ 0x081F7BD5
	.string "ふむう……\nわるくは　ないんだが　よくもない……\pおやの　トレーナーである　きみの\nどりょくが　ひつよう　ですな!{EOS}"
EventText_JP_081F7C0F: @ 0x081F7C0F
	.string "なんだか　めつきが　わるいですのう\pそんな　こわそうな　ポケモンには\nこの　わざマシン　どうですかな?{EOS}"
EventText_JP_081F7C43: @ 0x081F7C43
	.string "ポケモンの　なつきぐあいが　たかいと\nおんがえしの　いりょくも　たかくなる\pなつきぐあいが　ひくいと\nやつあたりの　いりょくが　つよまるんだよ!{EOS}"
EventText_JP_081F7C8C: @ 0x081F7C8C
	.string "そうそう　あと{STR_VAR_1}にち　たてば\nいい　わざマシンが　てに　はいるんだよ!\pそのとき　また　あそびに　きたまえ!\nきみの　ポケモンに　あった\lすてきな　わざマシンを　あげるから{EOS}"
EventText_JP_081F7CE4: @ 0x081F7CE4
	.string "ルリリ“るりー{EOS}"
EventText_JP_081F7CEC: @ 0x081F7CEC
	.string "とっても　なついて　いるようだ{EOS}"
EventText_JP_081F7CFC: @ 0x081F7CFC
	.string "ルリリ“ルルリッ!!{EOS}"
EventText_JP_081F7D07: @ 0x081F7D07
	.string "あんまり　なついて　いないようだ……{EOS}"
	.byte 0x00
.globl EventScript_JP_081F7D1B
EventScript_JP_081F7D1B: @ 0x081F7D1B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x009A
	goto_if 0x01, EventScript_JP_081F7DB5
	setvar 0x8008, 0x0002
	copyvar 0x8004, 0x8008
	specialvar_ 0x800D, 0x00FC
	copyvar 0x8009, 0x800D
	loadword 0x00, EventText_JP_081F7DC8
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F7D9D
	@ event command: special
	special ChoosePartyMon
	waitstate
	copyvar 0x800A, 0x8004
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x01, EventScript_JP_081F7D9D
	copyvar 0x8005, 0x800A
	specialvar_ 0x800D, 0x00FF
	copyvar 0x800B, 0x800D
	compare_var_to_var 0x800D, 0x8009
	goto_if 0x05, EventScript_JP_081F7DA7
	copyvar 0x8004, 0x8008
	copyvar 0x8005, 0x800A
	@ event command: special
	special CreateInGameTradePokemon
	@ event command: special
	special DoInGameTradeScene
	waitstate
	bufferspeciesname 0x00, 0x8009
	loadword 0x00, EventText_JP_081F7E3D
	callstd 0x04
	setflag 0x009A
	release
	end
EventScript_JP_081F7D9D: @ 0x081F7D9D
	loadword 0x00, EventText_JP_081F7E92
	callstd 0x04
	release
	end
EventScript_JP_081F7DA7: @ 0x081F7DA7
	bufferspeciesname 0x00, 0x8009
	loadword 0x00, EventText_JP_081F7E77
	callstd 0x04
	release
	end
EventScript_JP_081F7DB5: @ 0x081F7DB5
	loadword 0x00, EventText_JP_081F7EBB
	callstd 0x04
	release
	end
.globl EventScript_JP_081F7DBF
EventScript_JP_081F7DBF: @ 0x081F7DBF
	loadword 0x00, EventText_JP_081F7EFD
	callstd 0x02
	end
EventText_JP_081F7DC8: @ 0x081F7DC8
	.string "みてくれよ　この　{STR_VAR_2}!\nおれが　きのう　じぶんの　たんじょうびに\lきねんに　つかまえた　{STR_VAR_2}だ!\pお!　ほしい　って　かおを　したな?\nまっ　きちょうな　{STR_VAR_2}だからな!\pよし!　{STR_VAR_1}と　だったら\nこうかん　して　やっても　いいぞ!{EOS}"
EventText_JP_081F7E3D: @ 0x081F7E3D
	.string "おっ　これが　{STR_VAR_1}　かあー!\nやっぱ　{STR_VAR_2}　とは\lいろいろ　にている　ようで\lびみょうに　ちがうなあ!\pサンキュ!{EOS}"
EventText_JP_081F7E77: @ 0x081F7E77
	.string "だめだめ!　{STR_VAR_1}　じゃないと　\nひきうけられないね!{EOS}"
EventText_JP_081F7E92: @ 0x081F7E92
	.string "ふーん　やめるのか……\pまっ　おれのほうも\nどうしても　って　わけじゃ　ないしね{EOS}"
EventText_JP_081F7EBB: @ 0x081F7EBB
	.string "じぶんで　さがしても　いいんだけど……\pほかの　トレーナーが　つかまえた\nタツベイ　って　いうのが\lどうしても　ほしかったんだよね{EOS}"
EventText_JP_081F7EFD: @ 0x081F7EFD
	.string "それって　ポケモンずかん?\pそれって　あなた　たくさんの\nポケモンと　であった　ってこと?\pそれって　すっごい　うらやましい!{EOS}"
	.byte 0x00
.globl EventScript_JP_081F7F3E
EventScript_JP_081F7F3E: @ 0x081F7F3E
	loadword 0x00, EventText_JP_081F7FD3
	callstd 0x02
	end
.globl EventScript_JP_081F7F47
EventScript_JP_081F7F47: @ 0x081F7F47
	loadword 0x00, EventText_JP_081F7F85
	callstd 0x02
	end
.globl EventScript_JP_081F7F50
EventScript_JP_081F7F50: @ 0x081F7F50
	lock
	faceplayer
	loadword 0x00, EventText_JP_081F7FE9
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F7F71
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F7F7B
	end
EventScript_JP_081F7F71: @ 0x081F7F71
	loadword 0x00, EventText_JP_081F7FF6
	callstd 0x04
	release
	end
EventScript_JP_081F7F7B: @ 0x081F7F7B
	loadword 0x00, EventText_JP_081F8015
	callstd 0x04
	release
	end
EventText_JP_081F7F85: @ 0x081F7F85
	.string "ホウエンの　そらたかくを　とんでいく\nポケモンを　みた!　って　ひとが　いるけど\pずっと　とびまわって　いるのかしら?\nどこかで　やすんだり　しそうだけど{EOS}"
EventText_JP_081F7FD3: @ 0x081F7FD3
	.string "おそらの　ポケモン!\nおそらの　ポケモン!{EOS}"
EventText_JP_081F7FE9: @ 0x081F7FE9
	.string "きみ　どこから　きたの?{EOS}"
EventText_JP_081F7FF6: @ 0x081F7FF6
	.string "はい……?\nハイ…　タウン……?\pしらないなぁ　そんな　まち{EOS}"
EventText_JP_081F8015: @ 0x081F8015
	.string "いいえ　って　そんな……\nどこからも　きてない　はずが　ないでしょ\pま　まさか　きみ……\nうみの　そこで　うまれた　とか……?{EOS}"
	.byte 0x00
.globl EventScript_JP_081F8056
EventScript_JP_081F8056: @ 0x081F8056
	lock
	faceplayer
	specialvar_ 0x800D, 0x00D1
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8072
	loadword 0x00, EventText_JP_081F8085
	callstd 0x04
	release
	end
EventScript_JP_081F8072: @ 0x081F8072
	loadword 0x00, EventText_JP_081F8099
	callstd 0x04
	release
	end
.globl EventScript_JP_081F807C
EventScript_JP_081F807C: @ 0x081F807C
	loadword 0x00, EventText_JP_081F80B5
	callstd 0x02
	end
EventText_JP_081F8085: @ 0x081F8085
	.string "きょうは　マボロシじま　みえんのう……{EOS}"
EventText_JP_081F8099: @ 0x081F8099
	.string "なっ　なんと!\nきょうは　マボロシじま　みえるのじゃ!{EOS}"
EventText_JP_081F80B5: @ 0x081F80B5
	.string "マボロシじま……\nおそらく　しんきろうの　かんけいで\lみえたり　みえなかったり　するんだろう\pいや　ひょっとしたら　ほんとうに\nあらわれたり　きえたり　しているのか……?{EOS}"
gMapScriptDispatch_PetalburgCity_WallysHouse_OnFrame_OnWarpIntoMap: @ 0x081F810B
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_PetalburgCity_WallysHouse_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_PetalburgCity_WallysHouse_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_PetalburgCity_WallysHouse_OnWarpIntoMap: @ 0x081F8116
	@ conditional map script table
	.2byte 0x4057, 0x0004
	.4byte EventScript_JP_081F8120
	.2byte 0
EventScript_JP_081F8120: @ 0x081F8120
	turnobject 0x00FF, 0x04
	turnobject 0x0001, 0x03
	end
gMapScriptConditionTable_PetalburgCity_WallysHouse_OnFrame: @ 0x081F8129
	@ conditional map script table
	.2byte 0x4057, 0x0004
	.4byte EventScript_JP_081F8133
	.2byte 0
EventScript_JP_081F8133: @ 0x081F8133
	lockall
	loadword 0x00, EventText_JP_081F82AE
	callstd 0x04
	setorcopyvar 0x8000, 0x0155
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x007A
	loadword 0x00, EventText_JP_081F83BA
	callstd 0x04
	setvar 0x4057, 0x0005
	releaseall
	end
.globl EventScript_JP_081F815A
EventScript_JP_081F815A: @ 0x081F815A
	lock
	faceplayer
	checkflag 0x007E
	goto_if 0x01, EventScript_JP_081F818E
	checkflag 0x007A
	goto_if 0x01, EventScript_JP_081F8184
	checkflag 0x0087
	goto_if 0x01, EventScript_JP_081F8198
	loadword 0x00, EventText_JP_081F81C1
	callstd 0x04
	setflag 0x0087
	release
	end
EventScript_JP_081F8184: @ 0x081F8184
	loadword 0x00, EventText_JP_081F83E2
	callstd 0x04
	release
	end
EventScript_JP_081F818E: @ 0x081F818E
	loadword 0x00, EventText_JP_081F8400
	callstd 0x04
	release
	end
EventScript_JP_081F8198: @ 0x081F8198
	loadword 0x00, EventText_JP_081F829E
	callstd 0x04
	release
	end
.globl EventScript_JP_081F81A2
EventScript_JP_081F81A2: @ 0x081F81A2
	lock
	faceplayer
	checkflag 0x007A
	goto_if 0x01, EventScript_JP_081F81B7
	loadword 0x00, EventText_JP_081F8465
	callstd 0x04
	release
	end
EventScript_JP_081F81B7: @ 0x081F81B7
	loadword 0x00, EventText_JP_081F849F
	callstd 0x04
	release
	end
EventText_JP_081F81C1: @ 0x081F81C1
	.string "きみは……\nそうか　{PLAYER}{KUN}　だね?\pさっきは　ミツルの　あいてを　してくれて\nありがとう……\pあのこは　うまれた　ときから\nからだが　じょうぶでは　なくてね\pそれで　すこしの　あいだ　シダケタウンの\nわたしの　しんせきの　うちで\lあずかってもらう　ことに　したんだよ\pあそこは　ここよりも　ずっと\nくうきが　きれいな　ところ　だからね!\p……で　ミツルかい?　ミツルなら\nもう　しゅっぱつ　していったよ\pいまごろは　どの　あたりかなあ……{EOS}"
EventText_JP_081F829E: @ 0x081F829E
	.string "ミツルは　どうしてるかなあ……{EOS}"
EventText_JP_081F82AE: @ 0x081F82AE
	.string "{PLAYER}{KUN}!\nむりに　よびだして　すまなかったね!\pミツルは　シダケタウンに　いってから\nすっかり　げんきを　とりもどしたよ!\pそれも　みんな　きみの　おかげさ!\pなにしろ　このまちを　でるときに\nミツルが　ポケモンを　つかまえるのを\lてつだって　くれただろう?\pあのときの　ことが　ミツルは　とっても\nうれしかった　らしいんだ!\pいや　ミツル　だけじゃない\nちちおやの　わたしも　うれしいよ!\pあのこに　きみの　ような\nやさしい　ともだちが　できたことが　ね!\pそのおれい　という　わけでは　ないけど\nこれを　うけとって　くれないか!{EOS}"
EventText_JP_081F83BA: @ 0x081F83BA
	.string "なみのりを　つかえるように　なれば\nいろんな　ばしょに　いけるように　なるよ!{EOS}"
EventText_JP_081F83E2: @ 0x081F83E2
	.string "もうすぐ　ミツルが　かえってくるぞ!\nたのしみだなあ……!{EOS}"
EventText_JP_081F8400: @ 0x081F8400
	.string "ええっ!?　サイユウシティで\nミツルと　であった　だって……?\pんもう　{PLAYER}{KUN}ってばー\pいくら　あのこが　げんきに　なったからって\nそんな　とおくの　まち　まで\lひとりで　いけるわけ　ないよねえ……{EOS}"
EventText_JP_081F8465: @ 0x081F8465
	.string "ミツルが　ポケモンを　つかまえた　って\nすごく　うれしそうに　はなしていたの\pあのこの　あんな　えがお　ひさしぶり{EOS}"
EventText_JP_081F849F: @ 0x081F849F
	.string "うちの　しゅじんには　ないしょ　だけど\pじつは　ミツルったら　シダケタウンを\nかってに　でて　いっちゃった　らしいの……\pあのこ　からだは　よわかったけど\nあんがい　しっかりした　せいかく　だから\lかならず　ぶじで　かえってくると\lわたしは　しんじてるわ!{EOS}"
gMapScriptDispatch_PetalburgCity_Gym_OnLoad_OnTransition_OnWarpIntoMap_OnFrame: @ 0x081F8520
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_081F8535
	.byte 0x03
	.4byte EventScript_JP_081F85C4
	.byte 0x04
	.4byte gMapScriptConditionTable_PetalburgCity_Gym_OnWarpIntoMap
	.byte 0x02
	.4byte gMapScriptConditionTable_PetalburgCity_Gym_OnFrame
	.byte 0
EventScript_JP_081F8535: @ 0x081F8535
	compare_var_to_value 0x4085, 0x0006
	goto_if 0x01, EventScript_JP_081F854C
	compare_var_to_value 0x4085, 0x0007
	call_if 0x04, EventScript_JP_081F8596
	end
EventScript_JP_081F854C: @ 0x081F854C
	setvar 0x8005, 0x0001
	call EventScript_JP_081F91F5
	checktrainerflag 0x0047
	call_if 0x01, EventScript_JP_081F9216
	checktrainerflag 0x0059
	call_if 0x01, EventScript_JP_081F9237
	checktrainerflag 0x0048
	call_if 0x01, EventScript_JP_081F9258
	checktrainerflag 0x005A
	call_if 0x01, EventScript_JP_081F9279
	checktrainerflag 0x0049
	call_if 0x01, EventScript_JP_081F929A
	checktrainerflag 0x005B
	call_if 0x01, EventScript_JP_081F92BB
	checktrainerflag 0x004A
	call_if 0x01, EventScript_JP_081F92DC
	end
EventScript_JP_081F8596: @ 0x081F8596
	setvar 0x8005, 0x0001
	call EventScript_JP_081F91F5
	call EventScript_JP_081F9216
	call EventScript_JP_081F9237
	call EventScript_JP_081F9258
	call EventScript_JP_081F9279
	call EventScript_JP_081F929A
	call EventScript_JP_081F92BB
	call EventScript_JP_081F92DC
	return
EventScript_JP_081F85C4: @ 0x081F85C4
	compare_var_to_value 0x4085, 0x0001
	call_if 0x01, EventScript_JP_081F85E4
	compare_var_to_value 0x4085, 0x0006
	call_if 0x00, EventScript_JP_081F85EC
	checkflag 0x0864
	call_if 0x01, EventScript_JP_081F85F4
	end
EventScript_JP_081F85E4: @ 0x081F85E4
	setobjectxyperm 0x000A, 0x0005, 0x006C
	return
EventScript_JP_081F85EC: @ 0x081F85EC
	setobjectxyperm 0x0001, 0x0004, 0x006B
	return
EventScript_JP_081F85F4: @ 0x081F85F4
	setorcopyvar 0x8015, 0x010D
	specialvar_ 0x800D, 0x003A
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F861C
	compare_var_to_value 0x4085, 0x0008
	goto_if 0x01, EventScript_JP_081F861C
	setobjectxyperm 0x0001, 0x0004, 0x006B
	return
EventScript_JP_081F861C: @ 0x081F861C
	setvar 0x4085, 0x0008
	end
gMapScriptConditionTable_PetalburgCity_Gym_OnWarpIntoMap: @ 0x081F8622
	@ conditional map script table
	.2byte 0x4085, 0x0001
	.4byte EventScript_JP_081F862C
	.2byte 0
EventScript_JP_081F862C: @ 0x081F862C
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_PetalburgCity_Gym_OnFrame: @ 0x081F8631
	@ conditional map script table
	.2byte 0x4085, 0x0001
	.4byte EventScript_JP_081F863B
	.2byte 0
EventScript_JP_081F863B: @ 0x081F863B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, EventText_JP_081F965A
	callstd 0x04
	loadword 0x00, EventText_JP_081F9668
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	applymovement 0x000A, LittlerootTown_MaysHouse_2F_Movement_WalkDownX3_Delay16
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0009
	@ event command: removeobject
	removeobject 0x000A
	setflag 0x02D6
	delay 0x001E
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081F9705
	callstd 0x04
	setvar 0x4085, 0x0002
	releaseall
	end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX3_Delay16: @ 0x081F8683
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	delay_16
	step_end
.globl EventScript_JP_081F8688
EventScript_JP_081F8688: @ 0x081F8688
	lock
	faceplayer
	copyvar 0x8000, 0x4085
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F89E1
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081F89EB
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081F89F5
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_081F89FF
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_081F8AD2
	compare_var_to_value 0x8000, 0x0007
	goto_if 0x01, EventScript_JP_081F8A17
	compare_var_to_value 0x8000, 0x0008
	goto_if 0x01, EventScript_JP_081F8A4A
	loadword 0x00, EventText_JP_081F9439
	callstd 0x04
	closemessage
	copyvar 0x8000, 0x800C
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081F8717
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F8722
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081F872D
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081F8738
	end
EventScript_JP_081F8717: @ 0x081F8717
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8008, 0x0000
	goto EventScript_JP_081F8743
	.byte 0x02
EventScript_JP_081F8722: @ 0x081F8722
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8008, 0x0001
	goto EventScript_JP_081F8743
	.byte 0x02
EventScript_JP_081F872D: @ 0x081F872D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8008, 0x0002
	goto EventScript_JP_081F8743
	.byte 0x02
EventScript_JP_081F8738: @ 0x081F8738
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8008, 0x0003
	goto EventScript_JP_081F8743
	.byte 0x02
EventScript_JP_081F8743: @ 0x081F8743
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: addobject
	addobject 0x000A
	playse 0x0008
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081F88C8
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081F88DA
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081F88F6
	compare_var_to_value 0x8008, 0x0003
	call_if 0x01, EventScript_JP_081F88F6
	loadword 0x00, EventText_JP_081F94BD
	callstd 0x04
	loadword 0x00, EventText_JP_081F94D9
	callstd 0x04
	loadword 0x00, EventText_JP_081F94F6
	callstd 0x04
	loadword 0x00, EventText_JP_081F9572
	callstd 0x04
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081F895E
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081F8969
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081F897B
	compare_var_to_value 0x8008, 0x0003
	call_if 0x01, EventScript_JP_081F898D
	loadword 0x00, EventText_JP_081F957F
	callstd 0x04
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081F899F
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081F89AA
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081F89B5
	compare_var_to_value 0x8008, 0x0003
	call_if 0x01, EventScript_JP_081F89C0
	loadword 0x00, EventText_JP_081F95B6
	callstd 0x04
	loadword 0x00, EventText_JP_081F95E4
	callstd 0x04
	loadword 0x00, EventText_JP_081F9630
	callstd 0x04
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081F8A09
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081F8A0A
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081F8A15
	compare_var_to_value 0x8008, 0x0003
	call_if 0x01, EventScript_JP_081F8A16
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081F89CB
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081F89D6
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081F89CB
	compare_var_to_value 0x8008, 0x0003
	call_if 0x01, EventScript_JP_081F89CB
	loadword 0x00, EventText_JP_081F9640
	callstd 0x04
	closemessage
	setflag 0x4001
	playbgm 0x01A4, 0x00
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081F890F
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081F8928
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081F893A
	compare_var_to_value 0x8008, 0x0003
	call_if 0x01, EventScript_JP_081F894C
	@ event command: removeobject
	removeobject 0x000A
	setflag 0x02D8
	setvar 0x4085, 0x0001
	setvar 0x4057, 0x0002
	clearflag 0x02D6
	clearflag 0x0362
	setflag 0x0379
	@ event command: special
	special InitBirchState
	@ event command: warp
	warp MAP_ID_PETALBURG_CITY, 0xFF, 0x000F, 0x0008
	.byte 0x27, 0x6C, 0x02
EventScript_JP_081F88C8: @ 0x081F88C8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	applymovement 0x000A, LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkUp_Delay16_Delay8_WalkUpX2
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F88DA: @ 0x081F88DA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000A, LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkUp_Delay16_Delay8_WalkUp_WalkRight_WalkUpX2_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F88F6: @ 0x081F88F6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	applymovement 0x000A, LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkUp_Delay16_Delay8_WalkUpX2
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F890F: @ 0x081F890F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	applymovement 0x000A, LittlerootTown_MaysHouse_2F_Movement_WalkDownX3_WalkInPlaceFastestUp_Delay16_WalkInPlaceDown
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_Delay16X2_WalkRight_WalkDownX5_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F8928: @ 0x081F8928
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000A, LittlerootTown_MaysHouse_2F_Movement_WalkDownX4_WalkInPlaceFastestUp_Delay16_WalkInPlaceDown
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_Delay16X3_WalkDownX3_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F893A: @ 0x081F893A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000A, LittlerootTown_MaysHouse_2F_Movement_WalkDownX3_WalkInPlaceFastestUp_Delay16_WalkInPlaceDown
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_Delay16X2_WalkDownX4_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F894C: @ 0x081F894C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000A, LittlerootTown_MaysHouse_2F_Movement_WalkDownX2_WalkRight_WalkDown_WalkInPlaceFastestUp_Delay16_WalkInPlaceDown
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkInPlaceFastestDown_Delay16X2_WalkDownX3_WalkRight_WalkDown_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F895E: @ 0x081F895E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F8969: @ 0x081F8969
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F897B: @ 0x081F897B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F898D: @ 0x081F898D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WallyFaceLeft
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F899F: @ 0x081F899F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F89AA: @ 0x081F89AA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F89B5: @ 0x081F89B5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F89C0: @ 0x081F89C0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F89CB: @ 0x081F89CB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000A, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F89D6: @ 0x081F89D6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000A, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F89E1: @ 0x081F89E1
	loadword 0x00, EventText_JP_081F97E8
	callstd 0x04
	release
	end
EventScript_JP_081F89EB: @ 0x081F89EB
	loadword 0x00, EventText_JP_081F987A
	callstd 0x04
	release
	end
EventScript_JP_081F89F5: @ 0x081F89F5
	loadword 0x00, EventText_JP_081F98EE
	callstd 0x04
	release
	end
EventScript_JP_081F89FF: @ 0x081F89FF
	loadword 0x00, EventText_JP_081F98EE
	callstd 0x04
	release
	end
EventScript_JP_081F8A09: @ 0x081F8A09
	return
EventScript_JP_081F8A0A: @ 0x081F8A0A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F8A15: @ 0x081F8A15
	return
EventScript_JP_081F8A16: @ 0x081F8A16
	return
EventScript_JP_081F8A17: @ 0x081F8A17
	call EventScript_JP_081F8A65
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8AB4
	checkflag 0x00A9
	goto_if 0x00, EventScript_JP_081F8A43
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_081F8DC4
	loadword 0x00, EventText_JP_081F9B88
	callstd 0x04
	release
	end
EventScript_JP_081F8A43: @ 0x081F8A43
	call EventScript_JP_081F8B69
	release
	end
EventScript_JP_081F8A4A: @ 0x081F8A4A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, 0x010D, 0x0000, EventText_JP_081FA4AA, EventText_JP_081FA535, EventText_JP_081FA586
	loadword 0x00, EventText_JP_081FA550
	callstd 0x06
	end
EventScript_JP_081F8A65: @ 0x081F8A65
	specialvar_ 0x800D, 0x0032
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F8AAE
	checkitem 0x00AF, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8AAE
	checkpcitem 0x00AF, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8AAE
	compare_var_to_value 0x402D, 0x0000
	goto_if 0x01, EventScript_JP_081F8AAE
	loadword 0x00, gText_Rom_2637C2
	callstd 0x04
	setvar 0x800D, 0x0001
	return
EventScript_JP_081F8AAE: @ 0x081F8AAE
	setvar 0x800D, 0x0000
	return
EventScript_JP_081F8AB4: @ 0x081F8AB4
	setorcopyvar 0x8000, 0x00AF
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setvar 0x402D, 0x0000
	release
	end
EventScript_JP_081F8AD2: @ 0x081F8AD2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081F991A
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x010D, 0x0000, EventText_JP_081F99C5
	message EventText_JP_081F9A02
	waitmessage
	call 0x0824310A
	loadword 0x00, EventText_JP_081F9A1A
	callstd 0x04
	setflag 0x04F4
	setvar 0x4085, 0x0007
	setflag 0x086B
	@ event command: special
	special ResetHealLocationFromDewford
	call 0x0824327B
	setflag 0x0391
	clearflag 0x0390
	setvar 0x8008, 0x0005
	call 0x08242FCF
	clearflag 0x03AC
	call EventScript_JP_081F8596
	@ event command: special
	special DrawWholeMapView
	call EventScript_JP_081F8B69
	delay 0x001E
	loadword 0x00, EventText_JP_081F9AE6
	callstd 0x04
	closemessage
	delay 0x0028
	playse 0x0008
	delay 0x000A
	@ event command: addobject
	addobject 0x000B
	copyvar 0x8000, 0x800C
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081F8B8C
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081F8BA0
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081F8B96
	end
EventScript_JP_081F8B69: @ 0x081F8B69
	setorcopyvar 0x8000, 0x014A
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430EA
	setflag 0x00A9
	loadword 0x00, EventText_JP_081F9A94
	callstd 0x04
	return
EventScript_JP_081F8B8C: @ 0x081F8B8C
	setvar 0x8008, 0x0001
	goto EventScript_JP_081F8BAA
EventScript_JP_081F8B96: @ 0x081F8B96
	setvar 0x8008, 0x0002
	goto EventScript_JP_081F8BAA
EventScript_JP_081F8BA0: @ 0x081F8BA0
	setvar 0x8008, 0x0003
	goto EventScript_JP_081F8BAA
EventScript_JP_081F8BAA: @ 0x081F8BAA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000B, LittlerootTown_MaysHouse_2F_Movement_WalkUp_Delay8_WalkInPlaceFastestRight_Delay8_WalkInPlaceFastestLeft_Delay16_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000B, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000B, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x000A
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081F8C84
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081F8CA0
	compare_var_to_value 0x8008, 0x0003
	call_if 0x01, EventScript_JP_081F8CBC
	loadword 0x00, EventText_JP_081F9B2E
	callstd 0x04
	closemessage
	delay 0x0014
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081F8C63
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081F8C6E
	compare_var_to_value 0x8008, 0x0003
	call_if 0x01, EventScript_JP_081F8C79
	loadword 0x00, EventText_JP_081F9B5D
	callstd 0x04
	closemessage
	setflag 0x4001
	playbgm 0x01A4, 0x00
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081F8CD8
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081F8CF1
	compare_var_to_value 0x8008, 0x0003
	call_if 0x01, EventScript_JP_081F8D03
	@ event command: removeobject
	removeobject 0x000B
	setvar 0x4057, 0x0004
	clearflag 0x033E
	@ event command: warp
	warp MAP_ID_PETALBURG_CITY, 0xFF, 0x000F, 0x0008
	.byte 0x27, 0x6C, 0x02
EventScript_JP_081F8C63: @ 0x081F8C63
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000B, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F8C6E: @ 0x081F8C6E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000B, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F8C79: @ 0x081F8C79
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000B, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F8C84: @ 0x081F8C84
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000B, LittlerootTown_MaysHouse_2F_Movement_WalkRightX2_WalkUpX3_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F8CA0: @ 0x081F8CA0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000B, LittlerootTown_MaysHouse_2F_Movement_WalkRightX2_WalkUpX3
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F8CBC: @ 0x081F8CBC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000B, LittlerootTown_MaysHouse_2F_Movement_WalkRightX2_WalkUpX2_WalkRightX2_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F8CD8: @ 0x081F8CD8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000B, LittlerootTown_MaysHouse_2F_Movement_WalkDownX2_WalkLeftX2_WalkDownX2_WalkInPlaceFastestUp_Delay8_WalkInPlaceDown_SetInvisible_1
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkDownX2_WalkLeftX2_WalkDownX2
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F8CF1: @ 0x081F8CF1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000B, LittlerootTown_MaysHouse_2F_Movement_WalkDownX2_WalkLeftX2_WalkDownX2_WalkInPlaceFastestUp_Delay8_WalkInPlaceDown_SetInvisible_2
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkDownX2_WalkLeft_WalkDownX3
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F8D03: @ 0x081F8D03
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000B, LittlerootTown_MaysHouse_2F_Movement_WalkDownX2_WalkLeftX4_WalkDownX2_WalkInPlaceFastestUp_Delay8_WalkInPlaceDown_SetInvisible
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkDownX3_WalkLeftX3_WalkDownX2
	@ event command: waitmovement
	waitmovement 0x0000
	return
LittlerootTown_MaysHouse_2F_Movement_WalkDownX2_WalkLeftX2_WalkDownX2_WalkInPlaceFastestUp_Delay8_WalkInPlaceDown_SetInvisible_1: @ 0x081F8D15
	@ object movement sequence
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_in_place_fastest_up
	delay_8
	walk_in_place_down
	set_invisible
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX2_WalkLeftX2_WalkDownX2_WalkInPlaceFastestUp_Delay8_WalkInPlaceDown_SetInvisible_2: @ 0x081F8D20
	@ object movement sequence
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_in_place_fastest_up
	delay_8
	walk_in_place_down
	set_invisible
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX2_WalkLeftX4_WalkDownX2_WalkInPlaceFastestUp_Delay8_WalkInPlaceDown_SetInvisible: @ 0x081F8D2B
	@ object movement sequence
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_in_place_fastest_up
	delay_8
	walk_in_place_down
	set_invisible
	step_end
LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkDownX2_WalkLeftX2_WalkDownX2: @ 0x081F8D38
	@ object movement sequence
	delay_16
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	step_end
LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkDownX2_WalkLeft_WalkDownX3: @ 0x081F8D40
	@ object movement sequence
	delay_16
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	step_end
LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkDownX3_WalkLeftX3_WalkDownX2: @ 0x081F8D48
	@ object movement sequence
	delay_16
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUp_Delay8_WalkInPlaceFastestRight_Delay8_WalkInPlaceFastestLeft_Delay16_WalkInPlaceFastestUp: @ 0x081F8D52
	@ object movement sequence
	walk_up
	delay_8
	walk_in_place_fastest_right
	delay_8
	walk_in_place_fastest_left
	delay_16
	walk_in_place_fastest_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkRightX2_WalkUpX3_WalkInPlaceFastestRight: @ 0x081F8D5A
	@ object movement sequence
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkRightX2_WalkUpX3: @ 0x081F8D61
	@ object movement sequence
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkRightX2_WalkUpX2_WalkRightX2_WalkUp: @ 0x081F8D67
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	step_end
	.globl LittlerootTown_MaysHouse_2F_Movement_WalkInPlaceFastestUp_Delay16X5_Delay8_WalkInPlaceFastestDown
LittlerootTown_MaysHouse_2F_Movement_WalkInPlaceFastestUp_Delay16X5_Delay8_WalkInPlaceFastestDown: @ 0x081F8D6F
	.byte 0x26, 0x14, 0x14, 0x14, 0x14, 0x14, 0x13, 0x25, 0xFE
LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkUp_Delay16_Delay8_WalkUp_WalkRight_WalkUpX2_WalkInPlaceFastestLeft: @ 0x081F8D78
	@ object movement sequence
	delay_16
	walk_up
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_in_place_fastest_left
	step_end
LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkUp_Delay16_Delay8_WalkUpX2: @ 0x081F8D82
	@ object movement sequence
	delay_16
	walk_up
	delay_16
	delay_8
	walk_up
	walk_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX4_WalkInPlaceFastestUp_Delay16_WalkInPlaceDown: @ 0x081F8D89
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_up
	delay_16
	walk_in_place_down
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX2_WalkRight_WalkDown_WalkInPlaceFastestUp_Delay16_WalkInPlaceDown: @ 0x081F8D91
	@ object movement sequence
	walk_down
	walk_down
	walk_right
	walk_down
	walk_in_place_fastest_up
	delay_16
	walk_in_place_down
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX3_WalkInPlaceFastestUp_Delay16_WalkInPlaceDown: @ 0x081F8D99
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_up
	delay_16
	walk_in_place_down
	step_end
LittlerootTown_MaysHouse_2F_Movement_Delay16X3_WalkDownX3_Delay8: @ 0x081F8DA0
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	delay_8
	step_end
LittlerootTown_MaysHouse_2F_Movement_Delay16X2_WalkRight_WalkDownX5_Delay8: @ 0x081F8DA8
	@ object movement sequence
	delay_16
	delay_16
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end
LittlerootTown_MaysHouse_2F_Movement_Delay16X2_WalkDownX4_Delay8: @ 0x081F8DB2
	@ object movement sequence
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkInPlaceFastestDown_Delay16X2_WalkDownX3_WalkRight_WalkDown_Delay8: @ 0x081F8DBA
	@ object movement sequence
	walk_in_place_fastest_down
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	delay_8
	step_end
EventScript_JP_081F8DC4: @ 0x081F8DC4
	loadword 0x00, EventText_JP_081F9BE0
	callstd 0x04
	release
	end
.globl EventScript_JP_081F8DCE
EventScript_JP_081F8DCE: @ 0x081F8DCE
	lockall
	compare_var_to_value 0x4085, 0x0006
	goto_if 0x00, EventScript_JP_081F8E14
	setvar 0x8008, 0x0007
	setvar 0x8009, 0x0055
	loadword 0x00, EventText_JP_081FA31E
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8E03
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F8E12
	end
EventScript_JP_081F8E03: @ 0x081F8E03
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	closemessage
	delay 0x001E
	@ event command: warpdoor
	warpdoor MAP_ID_PETALBURG_CITY_GYM, 0xFF, 0x8008, 0x8009
	.byte 0x27, 0x6B, 0x02
EventScript_JP_081F8E12: @ 0x081F8E12
	releaseall
	end
EventScript_JP_081F8E14: @ 0x081F8E14
	loadword 0x00, EventText_JP_081FA300
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081F8E1E
EventScript_JP_081F8E1E: @ 0x081F8E1E
	lockall
	compare_var_to_value 0x4085, 0x0006
	goto_if 0x00, EventScript_JP_081F8E14
	setvar 0x8008, 0x0001
	setvar 0x8009, 0x0062
	loadword 0x00, EventText_JP_081FA360
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8E03
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F8E12
	end
.globl EventScript_JP_081F8E53
EventScript_JP_081F8E53: @ 0x081F8E53
	lockall
	checktrainerflag 0x0047
	goto_if 0x00, EventScript_JP_081F8E14
	setvar 0x8008, 0x0007
	setvar 0x8009, 0x002E
	loadword 0x00, EventText_JP_081FA385
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8E03
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F8E12
	end
.globl EventScript_JP_081F8E86
EventScript_JP_081F8E86: @ 0x081F8E86
	lockall
	checktrainerflag 0x0047
	goto_if 0x00, EventScript_JP_081F8E14
	setvar 0x8008, 0x0001
	setvar 0x8009, 0x003B
	loadword 0x00, EventText_JP_081FA3A9
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8E03
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F8E12
	end
.globl EventScript_JP_081F8EB9
EventScript_JP_081F8EB9: @ 0x081F8EB9
	lockall
	checktrainerflag 0x0059
	goto_if 0x00, EventScript_JP_081F8E14
	setvar 0x8008, 0x0007
	setvar 0x8009, 0x003B
	loadword 0x00, EventText_JP_081FA3A9
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8E03
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F8E12
	end
.globl EventScript_JP_081F8EEC
EventScript_JP_081F8EEC: @ 0x081F8EEC
	lockall
	checktrainerflag 0x0059
	goto_if 0x00, EventScript_JP_081F8E14
	setvar 0x8008, 0x0001
	setvar 0x8009, 0x0048
	loadword 0x00, EventText_JP_081FA3CC
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8E03
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F8E12
	end
.globl EventScript_JP_081F8F1F
EventScript_JP_081F8F1F: @ 0x081F8F1F
	lockall
	checktrainerflag 0x0048
	goto_if 0x00, EventScript_JP_081F8E14
	setvar 0x8008, 0x0001
	setvar 0x8009, 0x0014
	loadword 0x00, EventText_JP_081FA3F0
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8E03
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F8E12
	end
.globl EventScript_JP_081F8F52
EventScript_JP_081F8F52: @ 0x081F8F52
	lockall
	checktrainerflag 0x005A
	goto_if 0x00, EventScript_JP_081F8E14
	setvar 0x8008, 0x0007
	setvar 0x8009, 0x0014
	loadword 0x00, EventText_JP_081FA3F0
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8E03
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F8E12
	end
.globl EventScript_JP_081F8F85
EventScript_JP_081F8F85: @ 0x081F8F85
	lockall
	checktrainerflag 0x005A
	goto_if 0x00, EventScript_JP_081F8E14
	setvar 0x8008, 0x0001
	setvar 0x8009, 0x0021
	loadword 0x00, EventText_JP_081FA413
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8E03
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F8E12
	end
.globl EventScript_JP_081F8FB8
EventScript_JP_081F8FB8: @ 0x081F8FB8
	lockall
	checktrainerflag 0x0049
	goto_if 0x00, EventScript_JP_081F8E14
	setvar 0x8008, 0x0007
	setvar 0x8009, 0x0021
	loadword 0x00, EventText_JP_081FA413
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8E03
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F8E12
	end
.globl EventScript_JP_081F8FEB
EventScript_JP_081F8FEB: @ 0x081F8FEB
	lockall
	checktrainerflag 0x005B
	goto_if 0x00, EventScript_JP_081F8E14
	setvar 0x8008, 0x0001
	setvar 0x8009, 0x0007
	loadword 0x00, EventText_JP_081FA437
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8E03
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F8E12
	end
.globl EventScript_JP_081F901E
EventScript_JP_081F901E: @ 0x081F901E
	lockall
	checktrainerflag 0x004A
	goto_if 0x00, EventScript_JP_081F8E14
	setvar 0x8008, 0x0007
	setvar 0x8009, 0x0007
	loadword 0x00, EventText_JP_081FA437
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F8E03
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F8E12
	end
.globl EventScript_JP_081F9051
EventScript_JP_081F9051: @ 0x081F9051
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x0047, 0x0000, EventText_JP_081F9D63, EventText_JP_081F9D95, EventScript_JP_081F9075
	checkflag 0x04F4
	goto_if 0x01, EventScript_JP_081F9084
	loadword 0x00, EventText_JP_081F9DA7
	callstd 0x06
	end
EventScript_JP_081F9075: @ 0x081F9075
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8005, 0x0000
	call EventScript_JP_081F9216
	@ event command: special
	special DrawWholeMapView
	release
	end
EventScript_JP_081F9084: @ 0x081F9084
	loadword 0x00, EventText_JP_081F9DE9
	callstd 0x02
	end
.globl EventScript_JP_081F908D
EventScript_JP_081F908D: @ 0x081F908D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x0048, 0x0000, EventText_JP_081F9E22, EventText_JP_081F9E48, EventScript_JP_081F90B1
	checkflag 0x04F4
	goto_if 0x01, EventScript_JP_081F90C0
	loadword 0x00, EventText_JP_081F9E68
	callstd 0x06
	end
EventScript_JP_081F90B1: @ 0x081F90B1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8005, 0x0000
	call EventScript_JP_081F9258
	@ event command: special
	special DrawWholeMapView
	release
	end
EventScript_JP_081F90C0: @ 0x081F90C0
	loadword 0x00, EventText_JP_081F9E8A
	callstd 0x02
	end
.globl EventScript_JP_081F90C9
EventScript_JP_081F90C9: @ 0x081F90C9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x0049, 0x0000, EventText_JP_081F9EB1, EventText_JP_081F9EFE, EventScript_JP_081F90ED
	checkflag 0x04F4
	goto_if 0x01, EventScript_JP_081F90FC
	loadword 0x00, EventText_JP_081F9F1D
	callstd 0x06
	end
EventScript_JP_081F90ED: @ 0x081F90ED
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8005, 0x0000
	call EventScript_JP_081F929A
	@ event command: special
	special DrawWholeMapView
	release
	end
EventScript_JP_081F90FC: @ 0x081F90FC
	loadword 0x00, EventText_JP_081F9F8B
	callstd 0x02
	end
.globl EventScript_JP_081F9105
EventScript_JP_081F9105: @ 0x081F9105
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x004A, 0x0000, EventText_JP_081F9FB3, EventText_JP_081F9FEF, EventScript_JP_081F9129
	checkflag 0x04F4
	goto_if 0x01, EventScript_JP_081F9138
	loadword 0x00, EventText_JP_081FA001
	callstd 0x06
	end
EventScript_JP_081F9129: @ 0x081F9129
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8005, 0x0000
	call EventScript_JP_081F92DC
	@ event command: special
	special DrawWholeMapView
	release
	end
EventScript_JP_081F9138: @ 0x081F9138
	loadword 0x00, EventText_JP_081FA072
	callstd 0x02
	end
.globl EventScript_JP_081F9141
EventScript_JP_081F9141: @ 0x081F9141
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x0059, 0x0000, EventText_JP_081FA09D, EventText_JP_081FA0D1, EventScript_JP_081F9165
	checkflag 0x04F4
	goto_if 0x01, EventScript_JP_081F9174
	loadword 0x00, EventText_JP_081FA0E6
	callstd 0x06
	end
EventScript_JP_081F9165: @ 0x081F9165
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8005, 0x0000
	call EventScript_JP_081F9237
	@ event command: special
	special DrawWholeMapView
	release
	end
EventScript_JP_081F9174: @ 0x081F9174
	loadword 0x00, EventText_JP_081FA13B
	callstd 0x02
	end
.globl EventScript_JP_081F917D
EventScript_JP_081F917D: @ 0x081F917D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x005A, 0x0000, EventText_JP_081FA17E, EventText_JP_081FA1A2, EventScript_JP_081F91A1
	checkflag 0x04F4
	goto_if 0x01, EventScript_JP_081F91B0
	loadword 0x00, EventText_JP_081FA1AE
	callstd 0x06
	end
EventScript_JP_081F91A1: @ 0x081F91A1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8005, 0x0000
	call EventScript_JP_081F9279
	@ event command: special
	special DrawWholeMapView
	release
	end
EventScript_JP_081F91B0: @ 0x081F91B0
	loadword 0x00, EventText_JP_081FA20C
	callstd 0x02
	end
.globl EventScript_JP_081F91B9
EventScript_JP_081F91B9: @ 0x081F91B9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, 0x005B, 0x0000, EventText_JP_081FA21D, EventText_JP_081FA25D, EventScript_JP_081F91DD
	checkflag 0x04F4
	goto_if 0x01, EventScript_JP_081F91EC
	loadword 0x00, EventText_JP_081FA26D
	callstd 0x06
	end
EventScript_JP_081F91DD: @ 0x081F91DD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8005, 0x0000
	call EventScript_JP_081F92BB
	@ event command: special
	special DrawWholeMapView
	release
	end
EventScript_JP_081F91EC: @ 0x081F91EC
	loadword 0x00, EventText_JP_081FA2BA
	callstd 0x02
	end
EventScript_JP_081F91F5: @ 0x081F91F5
	setvar 0x8004, 0x0001
	compare_var_to_value 0x8005, 0x0000
	call_if 0x01, EventScript_JP_081F93DD
	compare_var_to_value 0x8005, 0x0001
	call_if 0x01, EventScript_JP_081F93E2
	call EventScript_JP_081F92FD
	return
EventScript_JP_081F9216: @ 0x081F9216
	setvar 0x8004, 0x0002
	compare_var_to_value 0x8005, 0x0000
	call_if 0x01, EventScript_JP_081F93DD
	compare_var_to_value 0x8005, 0x0001
	call_if 0x01, EventScript_JP_081F93E2
	call EventScript_JP_081F9322
	return
EventScript_JP_081F9237: @ 0x081F9237
	setvar 0x8004, 0x0003
	compare_var_to_value 0x8005, 0x0000
	call_if 0x01, EventScript_JP_081F93DD
	compare_var_to_value 0x8005, 0x0001
	call_if 0x01, EventScript_JP_081F93E2
	call EventScript_JP_081F9347
	return
EventScript_JP_081F9258: @ 0x081F9258
	setvar 0x8004, 0x0004
	compare_var_to_value 0x8005, 0x0000
	call_if 0x01, EventScript_JP_081F93DD
	compare_var_to_value 0x8005, 0x0001
	call_if 0x01, EventScript_JP_081F93E2
	call EventScript_JP_081F936C
	return
EventScript_JP_081F9279: @ 0x081F9279
	setvar 0x8004, 0x0005
	compare_var_to_value 0x8005, 0x0000
	call_if 0x01, EventScript_JP_081F93DD
	compare_var_to_value 0x8005, 0x0001
	call_if 0x01, EventScript_JP_081F93E2
	call EventScript_JP_081F937F
	return
EventScript_JP_081F929A: @ 0x081F929A
	setvar 0x8004, 0x0006
	compare_var_to_value 0x8005, 0x0000
	call_if 0x01, EventScript_JP_081F93DD
	compare_var_to_value 0x8005, 0x0001
	call_if 0x01, EventScript_JP_081F93E2
	call EventScript_JP_081F93A4
	return
EventScript_JP_081F92BB: @ 0x081F92BB
	setvar 0x8004, 0x0007
	compare_var_to_value 0x8005, 0x0000
	call_if 0x01, EventScript_JP_081F93DD
	compare_var_to_value 0x8005, 0x0001
	call_if 0x01, EventScript_JP_081F93E2
	call EventScript_JP_081F93B7
	return
EventScript_JP_081F92DC: @ 0x081F92DC
	setvar 0x8004, 0x0008
	compare_var_to_value 0x8005, 0x0000
	call_if 0x01, EventScript_JP_081F93DD
	compare_var_to_value 0x8005, 0x0001
	call_if 0x01, EventScript_JP_081F93E2
	call EventScript_JP_081F93CA
	return
EventScript_JP_081F92FD: @ 0x081F92FD
	setmetatile 0x0006, 0x0055, 0x0210, 0x0000
	setmetatile 0x0007, 0x0055, 0x0211, 0x0000
	setmetatile 0x0001, 0x0062, 0x0210, 0x0000
	setmetatile 0x0002, 0x0062, 0x0211, 0x0000
	return
EventScript_JP_081F9322: @ 0x081F9322
	setmetatile 0x0006, 0x002E, 0x0210, 0x0000
	setmetatile 0x0007, 0x002E, 0x0211, 0x0000
	setmetatile 0x0001, 0x003B, 0x0210, 0x0000
	setmetatile 0x0002, 0x003B, 0x0211, 0x0000
	return
EventScript_JP_081F9347: @ 0x081F9347
	setmetatile 0x0006, 0x003B, 0x0210, 0x0000
	setmetatile 0x0007, 0x003B, 0x0211, 0x0000
	setmetatile 0x0001, 0x0048, 0x0210, 0x0000
	setmetatile 0x0002, 0x0048, 0x0211, 0x0000
	return
EventScript_JP_081F936C: @ 0x081F936C
	setmetatile 0x0001, 0x0014, 0x0210, 0x0000
	setmetatile 0x0002, 0x0014, 0x0211, 0x0000
	return
EventScript_JP_081F937F: @ 0x081F937F
	setmetatile 0x0006, 0x0014, 0x0210, 0x0000
	setmetatile 0x0007, 0x0014, 0x0211, 0x0000
	setmetatile 0x0001, 0x0021, 0x0210, 0x0000
	setmetatile 0x0002, 0x0021, 0x0211, 0x0000
	return
EventScript_JP_081F93A4: @ 0x081F93A4
	setmetatile 0x0006, 0x0021, 0x0210, 0x0000
	setmetatile 0x0007, 0x0021, 0x0211, 0x0000
	return
EventScript_JP_081F93B7: @ 0x081F93B7
	setmetatile 0x0001, 0x0007, 0x0210, 0x0000
	setmetatile 0x0002, 0x0007, 0x0211, 0x0000
	return
EventScript_JP_081F93CA: @ 0x081F93CA
	setmetatile 0x0006, 0x0007, 0x0210, 0x0000
	setmetatile 0x0007, 0x0007, 0x0211, 0x0000
	return
EventScript_JP_081F93DD: @ 0x081F93DD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special PetalburgGymSpecial1
	waitstate
	return
EventScript_JP_081F93E2: @ 0x081F93E2
	@ event command: special
	special PetalburgGymSpecial2
	return
.globl EventScript_JP_081F93E6
EventScript_JP_081F93E6: @ 0x081F93E6
	lock
	faceplayer
	checkflag 0x04F4
	goto_if 0x01, EventScript_JP_081F93FB
	loadword 0x00, EventText_JP_081F9C26
	callstd 0x04
	release
	end
EventScript_JP_081F93FB: @ 0x081F93FB
	loadword 0x00, EventText_JP_081F9D34
	callstd 0x04
	release
	end
.globl EventScript_JP_081F9405
EventScript_JP_081F9405: @ 0x081F9405
	lockall
	checkflag 0x086B
	goto_if 0x01, EventScript_JP_081F9425
	goto EventScript_JP_081F942F
	.byte 0x02
.globl EventScript_JP_081F9415
EventScript_JP_081F9415: @ 0x081F9415
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x086B
	goto_if 0x01, EventScript_JP_081F9425
	goto EventScript_JP_081F942F
	.byte 0x02
EventScript_JP_081F9425: @ 0x081F9425
	loadword 0x00, EventText_JP_081FA489
	callstd 0x04
	releaseall
	end
EventScript_JP_081F942F: @ 0x081F942F
	loadword 0x00, EventText_JP_081FA47B
	callstd 0x04
	releaseall
	end
EventText_JP_081F9439: @ 0x081F9439
	.string "パパ“ん?\p{PLAYER}じゃ　ないか!\nそうか　ひっこしが　おわったんだね\pそれにしても\nよく　ここまで　ひとりで　これたな\pなるほど……\nポケモンと　いっしょ　なのか\pふむ……　じゃあ　{PLAYER}も\nわたしの　ように\lポケモントレーナーに　なるのか\pそれは　たのしみ　だな!{EOS}"
EventText_JP_081F94BD: @ 0x081F94BD
	.string "あの……　ぼく……\nポケモンが　ほしいん　ですけど……{EOS}"
EventText_JP_081F94D9: @ 0x081F94D9
	.string "パパ“ん?　きみは……　たしか\nミツルくんと　いったよね{EOS}"
EventText_JP_081F94F6: @ 0x081F94F6
	.string "ミツル“ぼく　きょうから　シダケタウンの\nしんせきの　うちに　いくんですけど\pひとりじゃ　さみしいから　ポケモンを\nつれて　いこうかと　おもって……\pでも　いままで　じぶんで　ポケモンを\nつかまえた　ことが　ないから\lどう　やったら　いいのか……{EOS}"
EventText_JP_081F9572: @ 0x081F9572
	.string "パパ“……ふむ　なるほど{EOS}"
EventText_JP_081F957F: @ 0x081F957F
	.string "パパ“{PLAYER}!　はなしは　きいたね\pミツルくんが　ぶじに\nポケモンを　つかまえられるか\lみまもって　あげるんだ{EOS}"
EventText_JP_081F95B6: @ 0x081F95B6
	.string "ミツルくん\nわたしの　ポケモンを　かして　あげよう!\pミツルは\nジグザグマを　あずかった!{EOS}"
EventText_JP_081F95E4: @ 0x081F95E4
	.string "ミツル“わあ……\nポケモンだぁ……!\pパパ“うむ……\nモンスターボールは　あげるから\lがんばって　みなさい!\pミツルは\nモンスターボールを　もらった!{EOS}"
EventText_JP_081F9630: @ 0x081F9630
	.string "ミツル“おじさん　ありがとう!{EOS}"
EventText_JP_081F9640: @ 0x081F9640
	.string "{PLAYER}さん……\nぼくと　いっしょに　きてくれますよね{EOS}"
EventText_JP_081F965A: @ 0x081F965A
	.string "パパ“うまく　いったかい?{EOS}"
EventText_JP_081F9668: @ 0x081F9668
	.string "ミツル“おじさん\nおかりした　ポケモン　おかえし　します\p{PLAYER}さん　いっしょに　きてくれて\nどうも　ありがとう……\pポケモンを　つかまえることが　できたのは\nふたりの　おかげです!\lつかまえた　ポケモン　たいせつに　しますね\p……あ!　おかあさんが　まってるから\nぼくは　もう　いかなきゃ!\pじゃあね　{PLAYER}さん!{EOS}"
EventText_JP_081F9705: @ 0x081F9705
	.string "パパ“さて……\p{PLAYER}!　ポケモントレーナー　として\nつよく　なりたいのなら\lわたしの　アドバイスを　ききなさい\pまずは　この　さきにある\nカナズミシティに　いくんだ\pそこで　ツツジ　という　ジムリーダーと\nたたかうと　いい!\pそうやって　かくちの　ポケモンジムで\nジムリーダーを　たおして\lジムバッジを　あつめて　いくんだ\pもちろん　わたしも　ジムリーダーだ\nいずれ　{PLAYER}と　しょうぶ　するだろう\pだが　それは　{PLAYER}が\nつよくなってからの　はなし　だよ{EOS}"
EventText_JP_081F97E8: @ 0x081F97E8
	.string "パパ“ん?　カナズミの\nポケモンジムには　いかないのか?\pまだまだ　かけだしの　トレーナーと\nたたかっても　おもしろく　ないからな\p{PLAYER}には　もっと　つよくなって\nわたしの　まえに　あらわれて　ほしいんだ\pそうだな　ジムバッジを\n4つ　あつめられたら　そのときは\l{PLAYER}と　しょうぶ　しよう!{EOS}"
EventText_JP_081F987A: @ 0x081F987A
	.string "パパ“なるほど……\nカナズミの　ジムリーダーに　かったのか\pだが　まだまだ　{PLAYER}より\nつよい　トレーナーは　いっぱい　いる\pうみの　むこう　ムロタウンには\nトウキ　という　ジムリーダーが　いる\lかれとも　しょうぶ　してみると　いい{EOS}"
EventText_JP_081F98EE: @ 0x081F98EE
	.string "パパ“ふむ……\n{PLAYER}は　つよくなって　いるな\pその　バッジの　かずを　みれば　わかるよ{EOS}"
EventText_JP_081F991A: @ 0x081F991A
	.string "パパ“そうか……\nジムバッジを　4つ　あつめたのか\pでは　やくそく　どおり\nポケモンしょうぶ　だな……\p{PLAYER}……\pわたしは　いま　こうして\nじぶんの　こどもと\lしんけん　しょうぶ　できることが\lうれしくて　たまらない!\pだが　しょうぶは　しょうぶ!\pわたしは　ジムリーダーとして\nぜんりょくを　つくす!\l{PLAYER}も　ほんきで　かかってくるんだ!{EOS}"
EventText_JP_081F99C5: @ 0x081F99C5
	.string "……!\pまさか……\pまさか　{PLAYER}に……\p{PLAYER}に　まける　とは……\p……わかった!　きまりは　きまりだ!\nこれを　わたそう{EOS}"
EventText_JP_081F9A02: @ 0x081F9A02
	.string "{PLAYER}は　パパから\nバランスバッジを　もらった!{EOS}"
EventText_JP_081F9A1A: @ 0x081F9A1A
	.string "パパ“その　バランスバッジで\n{PLAYER}の　ポケモンの\lぼうぎょりょくが　たかくなる\pひでんわざの　なみのり　を\nおぼえた　ポケモンが　いるなら\lみずのうえを　すすめるように　なる\pこれは　わたしからの　おくりもの\n{PLAYER}なら　つかいこなせるだろう!{EOS}"
EventText_JP_081F9A94: @ 0x081F9A94
	.string "パパ“わざマシン42は　からげんき\pどくや　まひ　やけどに　なると\nわざの　いりょくが　ばいに　なる!\pピンチを　チャンスに\nかえることが　できるかも　しれないな{EOS}"
EventText_JP_081F9AE6: @ 0x081F9AE6
	.string "パパ“ジムリーダーとして\nいいようが　ないくらい　くやしい……\pだが　おや　としては\nうれしいような　さびしいような\lふしぎな　きもち　だ……{EOS}"
EventText_JP_081F9B2E: @ 0x081F9B2E
	.string "おお　いたいた　{PLAYER}{KUN}!\pちょっと　きてくれないか\nきみに　わたしたい　ものが　あるんだ!{EOS}"
EventText_JP_081F9B5D: @ 0x081F9B5D
	.string "なあ　センリさん　いいだろう?\pおたくの　{PLAYER}{KUN}を\nちょっと　おかりして　いくよ!{EOS}"
EventText_JP_081F9B88: @ 0x081F9B88
	.string "パパ“{PLAYER}!　たまには　ママにも\nあいに　いって　あげるんだぞ!\pわたしは　ここで\nじぶんを　きたえなおす!\p{PLAYER}に　まけた　ままでは\nトレーナーとして　くやしすぎる　からな{EOS}"
EventText_JP_081F9BE0: @ 0x081F9BE0
	.string "パパ“{PLAYER}!\nちょうしは　どうだ?\pポケモンは　おくが　ふかい!\nわたしは　いくら　しゅぎょう　しても\lたりなく　おもっている　ところだよ{EOS}"
EventText_JP_081F9C26: @ 0x081F9C26
	.string "げんき　しとぉや!!\nチャンピオンを　めざす　{PLAYER}!!\pこの　ジムは　へやにいる　トレーナーを\nたおせば　おくの　とびらが　ひらくッ!\p……おっと!　この　へやは　すでに\nとびらが　ひらく　ように　なってるから\lぼくを　たおしたり　しないで　くれよ!\pこの　トウカジムの　トレーナーたちは\nいろんな　わざを　つかってくるぞ!\pちなみに　ここから　いけるのは\nひだり……　すばやさの　へや\lみぎ……　めいちゅうの　へや　だ!\pとびらにも　かいてあるから　それを\nよんでから　すすむんだ\pさあ!　すきな　ほうを　えらんだら\nきばってこォー!!{EOS}"
EventText_JP_081F9D34: @ 0x081F9D34
	.string "{PLAYER}は　じぶんの　パパさえも\nのりこえて　しまったのか!?\pこらァ　びっくり　たまげたッ!!{EOS}"
EventText_JP_081F9D63: @ 0x081F9D63
	.string "あいてよりも　さきに　こうげき　できる……\pそれだけで　しょうぶは\nかなり　ゆうりに　なるだろう?{EOS}"
EventText_JP_081F9D95: @ 0x081F9D95
	.string "すばらしい　しょうぶ　だった……!{EOS}"
EventText_JP_081F9DA7: @ 0x081F9DA7
	.string "おくの　へやに　すすみたまえ!\nさらなる　しれんが　きみを　まっている\pひだりは　こんらんの　へや!\nみぎは　まもりの　へや　だ!{EOS}"
EventText_JP_081F9DE9: @ 0x081F9DE9
	.string "だれに　かとうとも\nだれに　まけようとも\lおのれと　ポケモンを　きたえつづける……\pそれが　ジムリーダー　なのさ{EOS}"
EventText_JP_081F9E22: @ 0x081F9E22
	.string "ここは　こんらんの　へや!\pきみと　ポケモンの　きずな\nみせて　もらうよ!{EOS}"
EventText_JP_081F9E48: @ 0x081F9E48
	.string "こんらん　させきれなかった\nふかい　きずなを　もっているね……{EOS}"
EventText_JP_081F9E68: @ 0x081F9E68
	.string "つぎは　ちからの　へや!\nその　こうげきりょくに　たえられるかい?{EOS}"
EventText_JP_081F9E8A: @ 0x081F9E8A
	.string "ジムリーダーが　きみに　まけてから\nくんれんが　さらに　きびしく　なったよ!{EOS}"
EventText_JP_081F9EB1: @ 0x081F9EB1
	.string "あとすこしで　たおせると　おもったとき\nあいての　たいりょくが　かいふく　する\lそれが　どんなに　つらい　ことか……\pその　つらさ　あじわってもらうよ!{EOS}"
EventText_JP_081F9EFE: @ 0x081F9EFE
	.string "かいふく　しきれなかった……\nすごい　こうげきりょく　だ……{EOS}"
EventText_JP_081F9F1D: @ 0x081F9F1D
	.string "さすがは　ジムリーダーの　こども……\pいや!　トレーナーの　さいのうは\nどりょくで　つちかわれる　もの……\pきみに　まけたのは　ぼくの　どりょくが\nたりなかった　から　なんだ……!\pさあ　つぎは　いちげきの　へや　だ!{EOS}"
EventText_JP_081F9F8B: @ 0x081F9F8B
	.string "ポケモンジムで　しゅぎょうを　かさね\nいつかは　ジムリーダーに　なってみせるよ{EOS}"
EventText_JP_081F9FB3: @ 0x081F9FB3
	.string "ジムリーダーの　こども　だからって\nてかげんは　しない!\pきゅうしょに　あたる　こわさ\nとくと　あじわって　もらうよ!{EOS}"
EventText_JP_081F9FEF: @ 0x081F9FEF
	.string "きみの　つよさは　ほんものだ……!{EOS}"
EventText_JP_081FA001: @ 0x081FA001
	.string "きみの　パパは　ほんとうに　つよい\nそんけいに　あたいする　トレーナーだ!\pそして　きみにも\nきみの　パパと　おなじ\lかがやきを　かんじる……\pおやこ　ふたりが　のうりょくを　きそう\nさいこうの　めいしょうぶを　みせてくれ!{EOS}"
EventText_JP_081FA072: @ 0x081FA072
	.string "きみの　パパが　ジムリーダーに　なってから\nトウカの　トレーナーたちも　つよくなった{EOS}"
EventText_JP_081FA09D: @ 0x081FA09D
	.string "ふふふ……\nここは　めいちゅうの　へや!\pすべての　こうげきが　あたるのって\nけっこう　いやな　ものよ{EOS}"
EventText_JP_081FA0D1: @ 0x081FA0D1
	.string "あなたの　ほうが　いちまい　うわてね……{EOS}"
EventText_JP_081FA0E6: @ 0x081FA0E6
	.string "おくで　さらに　てごわい　トレーナーが\nあなたを　まっている\pひだりは　まもりの　へや\nみぎは　かいふくの　へや　よ\pあなたの　ポケモンの\nこうげきりょくが　とわれるわ{EOS}"
EventText_JP_081FA13B: @ 0x081FA13B
	.string "あなたは　わたしたち　トレーナーが\nなにを　めざしているか　しってる?\p……それはね　ポケモンと\nこころを　ひとつに　する　ことよ!{EOS}"
EventText_JP_081FA17E: @ 0x081FA17E
	.string "まもりが　かたければ　かたいほど\nおもいきった　こうげきが　できるのよ{EOS}"
EventText_JP_081FA1A2: @ 0x081FA1A2
	.string "まもりきれなかった……{EOS}"
EventText_JP_081FA1AE: @ 0x081FA1AE
	.string "あなたには　たいせつな　ことを\nおしえて　もらった　きが　するわ……\pさあ　すすみなさい!\nひだりは　ちからの　へや\lみぎは　いちげきの　へや\pともに　こうげきを　とくいと　しているわ!{EOS}"
EventText_JP_081FA20C: @ 0x081FA20C
	.string "どう?　なみのりは　つかってる?{EOS}"
EventText_JP_081FA21D: @ 0x081FA21D
	.string "ぜんりょくで　あなたを　たおせと\nジムリーダーから　いわれている……\pたとえ　その　あいてが\nリーダーの　こども　だとしても!{EOS}"
EventText_JP_081FA25D: @ 0x081FA25D
	.string "ぜんりょくを　だしたのに……!{EOS}"
EventText_JP_081FA26D: @ 0x081FA26D
	.string "あなたの　ポケモンの　つかいかた……\nどことなく　おとうさんに　にているわ\pさあ!　この　おくには　ジムリーダー\nあなたの　おとうさんが　まっているわ!{EOS}"
EventText_JP_081FA2BA: @ 0x081FA2BA
	.string "ポケモンを　つよく　するのも　いいけど\pしょうぶの　ゆくえを　きめるのは\nそのひと　じしんの　ポケモンに　たいする\lきもち　なのよね……!{EOS}"
EventText_JP_081FA300: @ 0x081FA300
	.string "いまは　まだ　この　とびらは\nとざされて　いる　ようだ……{EOS}"
EventText_JP_081FA31E: @ 0x081FA31E
	.string "このさき　すばやさの　へや\p……と　かいてある\nおくに　すすみますか?{EOS}"
EventText_JP_081FA342: @ 0x081FA342
	.string "いまは　まだ　この　とびらは\nとざされて　いる　ようだ……{EOS}"
EventText_JP_081FA360: @ 0x081FA360
	.string "このさき　めいちゅうの　へや\p……と　かいてある\nおくに　すすみますか?{EOS}"
EventText_JP_081FA385: @ 0x081FA385
	.string "このさき　こんらんの　へや\p……と　かいてある\nおくに　すすみますか?{EOS}"
EventText_JP_081FA3A9: @ 0x081FA3A9
	.string "このさき　まもりの　へや\p……と　かいてある\nおくに　すすみますか?{EOS}"
EventText_JP_081FA3CC: @ 0x081FA3CC
	.string "このさき　かいふくの　へや\p……と　かいてある\nおくに　すすみますか?{EOS}"
EventText_JP_081FA3F0: @ 0x081FA3F0
	.string "このさき　ちからの　へや\p……と　かいてある\nおくに　すすみますか?{EOS}"
EventText_JP_081FA413: @ 0x081FA413
	.string "このさき　いちげきの　へや\p……と　かいてある\nおくに　すすみますか?{EOS}"
EventText_JP_081FA437: @ 0x081FA437
	.string "このさき　ジムリーダー\pどんな　ポケモンが　まっているか　は\nじぶんの　めで　たしかめよ!\p……と　かいてある\nおくに　すすみますか?{EOS}"
EventText_JP_081FA47B: @ 0x081FA47B
	.string "トウカシティ　ポケモンジム{EOS}"
EventText_JP_081FA489: @ 0x081FA489
	.string "トウカシティ　ポケモンジム\pセンリ　にんてい　トレーナー!\n{PLAYER}{EOS}"
EventText_JP_081FA4AA: @ 0x081FA4AA
	.string "パパ“{PLAYER}……\nやはり　あらわれたな……\pおまえに　しょうぶを　いどまれて\nこの　わたしが　ことわる　はずがない\pわかっているな?\pジムの　なかでは　おたがいに\nおやこで　あることなど　かんけいない\p……いや　おやこ　だからこそ\nぜんりょくで　ぶつかるんだ\lそうだろ?　{PLAYER}!{EOS}"
EventText_JP_081FA535: @ 0x081FA535
	.string "はは　はは……\nぜんりょくを　だしすぎた……　かな?{EOS}"
EventText_JP_081FA550: @ 0x081FA550
	.string "パパ“{PLAYER}……\nおまえの　ゆめは　なんだ?\pわたしの　ゆめは……\nははは……\lじつは　もう　かなったんだよ{EOS}"
EventText_JP_081FA586: @ 0x081FA586
	.string "パパ“{PLAYER}……\nやはり　あらわれたな……\pおまえに　しょうぶを　いどまれて\nこの　わたしが　ことわる　はずがない\pわかっているな?\pジムの　なかでは　おたがいに\nおやこで　あることなど　かんけいない……\p……うん?　なんだ　{PLAYER}\nおまえは　たたかえる　ポケモンを\l1ひきしか　もっていないのか\pわるいけれど　2ひき　いじょうの\nポケモンを　もって　また　きておくれ{EOS}"
	.byte 0x00
.globl EventScript_JP_081FA63E
EventScript_JP_081FA63E: @ 0x081FA63E
	loadword 0x00, EventText_JP_081FA650
	callstd 0x02
	end
.globl EventScript_JP_081FA647
EventScript_JP_081FA647: @ 0x081FA647
	loadword 0x00, EventText_JP_081FA67F
	callstd 0x02
	end
EventText_JP_081FA650: @ 0x081FA650
	.string "たびは　いいぞ!\pわしも　わかいときは　あちこちの\nうみや　やまを　わたりあるいた　ものだ!{EOS}"
EventText_JP_081FA67F: @ 0x081FA67F
	.string "あぁ……\pわたしも　ポケモンと　いっしょに\nぼうけんの　たびに　でかけて　みたい……\pしめった　くさむらに　もぐったり\nごつごつの　いわやまを　のぼったり\lうみの　あらなみを　わたったり\lまっくらな　どうくつを　さまよったり……\pそれでいて　ときには　じぶんの　おうちが\nこいしく　なったりして……\pたびって　いいよね!{EOS}"
	.byte 0x00
.globl EventScript_JP_081FA721
EventScript_JP_081FA721: @ 0x081FA721
	loadword 0x00, EventText_JP_081FA733
	callstd 0x02
	end
.globl EventScript_JP_081FA72A
EventScript_JP_081FA72A: @ 0x081FA72A
	loadword 0x00, EventText_JP_081FA775
	callstd 0x02
	end
EventText_JP_081FA733: @ 0x081FA733
	.string "この　まちの　あたらしい\nジムリーダーに　なった　センリさん\pとおくに　すんでいた　ごかぞくを\nこっちに　よびよせた　らしいのよね{EOS}"
EventText_JP_081FA775: @ 0x081FA775
	.string "まえに　いちど　しょうぶ　してみたけど\nさすがに　センリさんは　つよいね!\pなんというか　こう……\p‘ポケモン　ひとすじに　いきる!’\nっていうのを　ヒシヒシと　かんじたよ!{EOS}"
gMapScriptDispatch_PetalburgCity_PokemonCenter_1F_OnTransition_OnResume: @ 0x081FA7CD
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081FA7D8
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_081FA7D8: @ 0x081FA7D8
	setrespawn 0x0003
	call 0x08242978
	end
.globl EventScript_JP_081FA7E1
EventScript_JP_081FA7E1: @ 0x081FA7E1
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_081FA7EF
EventScript_JP_081FA7EF: @ 0x081FA7EF
	loadword 0x00, EventText_JP_081FA85B
	callstd 0x02
	end
.globl EventScript_JP_081FA7F8
EventScript_JP_081FA7F8: @ 0x081FA7F8
	loadword 0x00, EventText_JP_081FA894
	callstd 0x02
	end
.globl EventScript_JP_081FA801
EventScript_JP_081FA801: @ 0x081FA801
	lock
	faceplayer
	loadword 0x00, EventText_JP_081FA8BC
	callstd 0x04
	specialvar_ 0x800D, 0x012D
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FA81D
	release
	end
EventScript_JP_081FA81D: @ 0x081FA81D
	compare_var_to_value 0x4023, 0x0000
	call_if 0x01, EventScript_JP_081FA840
	compare_var_to_value 0x4023, 0x0001
	call_if 0x01, EventScript_JP_081FA849
	compare_var_to_value 0x4023, 0x0002
	call_if 0x01, EventScript_JP_081FA852
	release
	end
EventScript_JP_081FA840: @ 0x081FA840
	loadword 0x00, EventText_JP_081FA907
	callstd 0x04
	return
EventScript_JP_081FA849: @ 0x081FA849
	loadword 0x00, EventText_JP_081FA946
	callstd 0x04
	return
EventScript_JP_081FA852: @ 0x081FA852
	loadword 0x00, EventText_JP_081FA984
	callstd 0x04
	return
EventText_JP_081FA85B: @ 0x081FA85B
	.string "パソコンで　つかえる\nポケモン　あずかり　システム……\pつくった　やつは\nすげー　かがくに　くわしいんだろうな!{EOS}"
EventText_JP_081FA894: @ 0x081FA894
	.string "ポケモンに　オレンのみ　を　たべさせたら\nたいりょくが　かいふく　したんだぜ!{EOS}"
EventText_JP_081FA8BC: @ 0x081FA8BC
	.string "ポケモンには\nいろいろ　タイプが　あるの!\pで　タイプには　あいしょうが　あるから\nポケモンしょうぶの　とき\lゆうり　だったり　ふり　だったりするの{EOS}"
EventText_JP_081FA907: @ 0x081FA907
	.string "たとえば　あなたの　キモリは\nくさタイプ　でしょ\pみずタイプや　じめんタイプに　つよくて\nほのおタイプが　にがて　なのよね!{EOS}"
EventText_JP_081FA946: @ 0x081FA946
	.string "たとえば　あなたの\nアチャモは　ほのおタイプ　でしょ\pくさタイプや　むしタイプに　つよくて\nみずタイプが　にがて　なんだ!{EOS}"
EventText_JP_081FA984: @ 0x081FA984
	.string "たとえば　あなたの\nミズゴロウは　みずタイプ　だよね\pほのおタイプに　つよくて\nくさタイプや　でんきタイプが　にがて　ね!{EOS}"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
.globl EventScript_JP_081FA9EA
EventScript_JP_081FA9EA: @ 0x081FA9EA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	checkflag 0x0128
	goto_if 0x01, EventScript_JP_081FAA26
	pokemart 0x081FAA0C
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x04, 0x00, 0x0D, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11, 0x00, 0x55, 0x00, 0x56, 0x00
	.byte 0x4D, 0x00, 0x4B, 0x00, 0x4C, 0x00, 0x79, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081FAA26: @ 0x081FAA26
	pokemart 0x081FAA38
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x04, 0x00, 0x03, 0x00, 0x0D, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11
	.byte 0x00, 0x55, 0x00, 0x56, 0x00, 0x4D, 0x00, 0x4B, 0x00, 0x4C, 0x00, 0x79, 0x00, 0x00, 0x00, 0x6C
	.byte 0x02
.globl EventScript_JP_081FAA56
EventScript_JP_081FAA56: @ 0x081FAA56
	loadword 0x00, EventText_JP_081FAA71
	callstd 0x02
	end
.globl EventScript_JP_081FAA5F
EventScript_JP_081FAA5F: @ 0x081FAA5F
	loadword 0x00, EventText_JP_081FAAAB
	callstd 0x02
	end
.globl EventScript_JP_081FAA68
EventScript_JP_081FAA68: @ 0x081FAA68
	loadword 0x00, EventText_JP_081FAADF
	callstd 0x02
	end
EventText_JP_081FAA71: @ 0x081FAA71
	.string "いまは　よわい　ポケモンでも\nそだててあげれば　きっと　つよくなる!\pだいじ　なのは\nポケモンへの　あいじょうよ!{EOS}"
EventText_JP_081FAAAB: @ 0x081FAAAB
	.string "むしよけスプレー　つかってる?\nつかうと　ポケモンが　よってこないから\lいそぐとき　べんり　なんだぜ!{EOS}"
EventText_JP_081FAADF: @ 0x081FAADF
	.string "きみ　どくけし　もってるかい?\pポケモン　どくを　くらったまま\nあるいていると　たいりょく　なくなって\lたおれちゃうから　もっておくと　いいよ!{EOS}"
	.byte 0x00
.globl EventScript_JP_081FAB29
EventScript_JP_081FAB29: @ 0x081FAB29
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_081FAB7B
	checkflag 0x086D
	goto_if 0x01, EventScript_JP_081FAB8F
	checkflag 0x0095
	goto_if 0x01, EventScript_JP_081FABC2
	checkflag 0x0094
	goto_if 0x01, EventScript_JP_081FABA3
	loadword 0x00, EventText_JP_081FABF1
	callstd 0x04
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081FAC36
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	setflag 0x0094
	setflag 0x0372
	releaseall
	end
EventScript_JP_081FAB7B: @ 0x081FAB7B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081FADD8
	callstd 0x04
	releaseall
	end
EventScript_JP_081FAB8F: @ 0x081FAB8F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081FAD7D
	callstd 0x04
	releaseall
	end
EventScript_JP_081FABA3: @ 0x081FABA3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081FACDE
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_081FABC2: @ 0x081FABC2
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081FAD21
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081FABD6
EventScript_JP_081FABD6: @ 0x081FABD6
	loadword 0x00, EventText_JP_081FAF20
	callstd 0x02
	end
.globl EventScript_JP_081FABDF
EventScript_JP_081FABDF: @ 0x081FABDF
	loadword 0x00, EventText_JP_081FAF7A
	callstd 0x02
	end
.globl EventScript_JP_081FABE8
EventScript_JP_081FABE8: @ 0x081FABE8
	loadword 0x00, EventText_JP_081FAE4A
	callstd 0x02
	end
EventText_JP_081FABF1: @ 0x081FABF1
	.string "えーと……　これが　こーなって\nそいでもって　あれが　あーなって\lと　いうことは　それと　これは　どれ?\pああ　もう　わけが　わからん!{EOS}"
EventText_JP_081FAC36: @ 0x081FAC36
	.string "……ん?\pぼくは　クスノキかんちょう　から\nれんらくせんの　せっけいを　まかされた\lツガという　ものだけど……\pあっ!?\nそれは　デボンのにもつ!\pうーん……\nこまったな……\pクスノキかんちょう\nほかにも　しごとが　あるからって\lどこかに　いっちゃったんだ\pわるいけど　きみ　クスノキかんちょう\nさがして　にもつを　わたしてあげてよ!{EOS}"
EventText_JP_081FACDE: @ 0x081FACDE
	.string "ツガ“クスノキかんちょう\nどこに　いっちゃったのかな?\pわるいけど　きみ　クスノキかんちょう\nさがして　にもつを　わたしてあげてよ!{EOS}"
EventText_JP_081FAD21: @ 0x081FAD21
	.string "ツガ“ふねをつくる　っていうのは\nつくえの　うえでの　けいさん　だけでは\lわからないことも　おおくてね\pやっぱり　うみのことを　しりつくした\nベテランの　ちえが　ほしいところだよ……{EOS}"
EventText_JP_081FAD7D: @ 0x081FAD7D
	.string "ツガ“やあ!　ハギろうじんが　ここで\nてつだって　くれるように　なったよ!\pでんせつの　ふなのりに　てつだってもらえて\nれんらくせんは　ちゃくちゃくと\lかんせいに　むかっているよ!{EOS}"
EventText_JP_081FADD8: @ 0x081FADD8
	.string "ツガ“ついに　ふねは　かんせいしたよ!\pできた　れんらくせん　タイドリップごうは\nまさに　さいこう　けっさく!\pだけど　もっと　いいものが　できそうな……\nそんな　きも　するんだよ\pそう……\nものづくりに　おわりは　ないのさ!{EOS}"
EventText_JP_081FAE4A: @ 0x081FAE4A
	.string "ハギ“おお!　{PLAYER}{KUN}!\nひさしぶり　じゃのう!\pいやあ　きみと　であってから\nふなのりの　ちが　さわいでな……\pツガくんに　きょうりょく　して\nれんらくせんを　つくりたく　なったんじゃ!\pれんらくせんが　できると　おおくの\nひとを　はこべるように　なるからのう\pしかし……　ふむう……\nツガくんは　すごいのう……\pかれの　ぎじゅつと　わしの　けいけんを\nがったい　させれば　かならずや\lすごい　ふねが　できるに　ちがいない!{EOS}"
EventText_JP_081FAF20: @ 0x081FAF20
	.string "きせつや　てんきや　つきのいち　など\nさまざまな　じょうけん　によって\lうみは　つねに　すがたを　かえていきます\pそう!　うみ　というのは\nいきもの　のような　もの　なんですよ!{EOS}"
EventText_JP_081FAF7A: @ 0x081FAF7A
	.string "ぼくは　すぐに　ふなよい　するのよね\nだから　ここで　おてつだい　してるのよね{EOS}"
	.byte 0x00
.globl EventScript_JP_081FAFA3
EventScript_JP_081FAFA3: @ 0x081FAFA3
	loadword 0x00, EventText_JP_081FAFB5
	callstd 0x02
	end
.globl EventScript_JP_081FAFAC
EventScript_JP_081FAFAC: @ 0x081FAFAC
	loadword 0x00, EventText_JP_081FAFED
	callstd 0x02
	end
EventText_JP_081FAFB5: @ 0x081FAFB5
	.string "おおきな　ふねを　つくる　というのは\nのりものを　つくる　というよりも\lたてものを　つくるのに　にているんだよ{EOS}"
EventText_JP_081FAFED: @ 0x081FAFED
	.string "おもたい　てつで　できている　ふねが\nうみに　うくなんて　ふしぎ　だろう?\pあれは　‘ふりょく’　という　げんりを\nおうよう　しているんだ{EOS}"
gMapScriptDispatch_SlateportCity_BattleTentLobby_OnFrame_OnWarpIntoMap: @ 0x081FB033
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_SlateportCity_BattleTentLobby_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_SlateportCity_BattleTentLobby_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_SlateportCity_BattleTentLobby_OnWarpIntoMap: @ 0x081FB03E
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081FB048
	.2byte 0
EventScript_JP_081FB048: @ 0x081FB048
	setvar 0x4001, 0x0001
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_SlateportCity_BattleTentLobby_OnFrame: @ 0x081FB052
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081FB07C
	.2byte 0x4000, 0x0001
	.4byte EventScript_JP_081FB085
	.2byte 0x4000, 0x0002
	.4byte EventScript_JP_081FB174
	.2byte 0x4000, 0x0003
	.4byte EventScript_JP_081FB0BA
	.2byte 0x4000, 0x0004
	.4byte EventScript_JP_081FB13A
	.2byte 0
EventScript_JP_081FB07C: @ 0x081FB07C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	end
EventScript_JP_081FB085: @ 0x081FB085
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_275660
	callstd 0x04
	closemessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x4000, 0x00FF
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	releaseall
	end
EventScript_JP_081FB0BA: @ 0x081FB0BA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	message gText_Rom_275596
	waitmessage
	setvar 0x8004, 0x0004
	@ event command: special
	special CallSlateportTentFunction
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0000
	@ event command: special
	special CallSlateportTentFunction
	playse 0x0037
	waitse
EventScript_JP_081FB0EC: @ 0x081FB0EC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2755EC
	callstd 0x04
	setvar 0x8004, 0x0005
	@ event command: special
	special CallSlateportTentFunction
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FB12D
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	message gText_Rom_22064B
	waitmessage
	playfanfare 0x0172
	waitfanfare
	goto EventScript_JP_081FB164
EventScript_JP_081FB12D: @ 0x081FB12D
	loadword 0x00, gText_Rom_275607
	callstd 0x04
	goto EventScript_JP_081FB164
EventScript_JP_081FB13A: @ 0x081FB13A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	message gText_Rom_275524
	waitmessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0000
	@ event command: special
	special CallSlateportTentFunction
	playse 0x0037
	waitse
EventScript_JP_081FB164: @ 0x081FB164
	loadword 0x00, gText_Rom_27549D
	callstd 0x04
	closemessage
	setvar 0x4000, 0x00FF
	releaseall
	end
EventScript_JP_081FB174: @ 0x081FB174
	lockall
	message gText_Rom_275634
	waitmessage
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0001
	@ event command: special
	special CallSlateportTentFunction
	playse 0x0037
	waitse
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0003
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x4000, 0x00FF
	setvar 0x8006, 0x0002
	goto EventScript_JP_081FB2AF
.globl EventScript_JP_081FB1AD
EventScript_JP_081FB1AD: @ 0x081FB1AD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x8004, 0x0001
	@ event command: special
	special CallSlateportTentFunction
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_081FB0EC
	@ event command: special
	special SavePlayerParty
	loadword 0x00, gText_Rom_275307
	callstd 0x04
EventScript_JP_081FB1CD: @ 0x081FB1CD
	message gText_Rom_275335
	waitmessage
	multichoice 0x11, 0x06, 0x17, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FB209
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FB30A
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081FB331
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081FB331
EventScript_JP_081FB209: @ 0x081FB209
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x40CF, 0x0004
	setvar 0x40CE, 0x0000
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	setvar 0x8006, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	loadword 0x00, gText_Rom_2754D7
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FB32E
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FB253
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081FB32E
EventScript_JP_081FB253: @ 0x081FB253
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4000, 0x0000
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0000
	@ event command: special
	special CallSlateportTentFunction
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
	closemessage
	delay 0x0002
	call 0x082423E9
	setvar 0x4000, 0x00FF
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FB317
	setvar 0x8006, 0x0000
EventScript_JP_081FB2AF: @ 0x081FB2AF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_275515
	callstd 0x04
	closemessage
	call EventScript_JP_081FB2CC
	@ event command: warp
	warp MAP_ID_SLATEPORT_CITY_BATTLE_TENT_CORRIDOR, 0xFF, 0x0002, 0x0007
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_081FB2CC: @ 0x081FB2CC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_4
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_5
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x0006, 0x0001
	waitdooranim
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkUp_SetInvisible_3
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_5
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x0006, 0x0001
	waitdooranim
	return
LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_4: @ 0x081FB2FB
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUp_SetInvisible_3: @ 0x081FB2FF
	@ object movement sequence
	walk_up
	set_invisible
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_5: @ 0x081FB302
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_5: @ 0x081FB306
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
EventScript_JP_081FB30A: @ 0x081FB30A
	loadword 0x00, gText_Rom_27534A
	callstd 0x04
	goto EventScript_JP_081FB1CD
EventScript_JP_081FB317: @ 0x081FB317
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	goto EventScript_JP_081FB331
EventScript_JP_081FB32E: @ 0x081FB32E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special LoadPlayerParty
EventScript_JP_081FB331: @ 0x081FB331
	loadword 0x00, gText_Rom_27549D
	callstd 0x04
	release
	end
	.byte 0x09, 0x09, 0x09, 0x54, 0xFE
.globl EventScript_JP_081FB340
EventScript_JP_081FB340: @ 0x081FB340
	lock
	faceplayer
	checkflag 0x0109
	goto_if 0x01, EventScript_JP_081FB377
	loadword 0x00, EventText_JP_081FB451
	callstd 0x04
	setorcopyvar 0x8000, 0x0149
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0109
	loadword 0x00, EventText_JP_081FB4C1
	callstd 0x04
	release
	end
EventScript_JP_081FB377: @ 0x081FB377
	loadword 0x00, EventText_JP_081FB4C1
	callstd 0x04
	release
	end
.globl EventScript_JP_081FB381
EventScript_JP_081FB381: @ 0x081FB381
	loadword 0x00, EventText_JP_081FB516
	callstd 0x02
	end
.globl EventScript_JP_081FB38A
EventScript_JP_081FB38A: @ 0x081FB38A
	loadword 0x00, EventText_JP_081FB54A
	callstd 0x02
	end
.globl EventScript_JP_081FB393
EventScript_JP_081FB393: @ 0x081FB393
	loadword 0x00, EventText_JP_081FB570
	callstd 0x02
	end
.globl EventScript_JP_081FB39C
EventScript_JP_081FB39C: @ 0x081FB39C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, gText_Rom_231A91
	callstd 0x04
	goto EventScript_JP_081FB3AB
	.byte 0x02
EventScript_JP_081FB3AB: @ 0x081FB3AB
	message gText_Rom_231AA7
	waitmessage
	multichoice 0x11, 0x00, 0x6F, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FB409
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FB417
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081FB425
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081FB433
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081FB441
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_081FB44F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081FB44F
	end
EventScript_JP_081FB409: @ 0x081FB409
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2756F3
	callstd 0x04
	goto EventScript_JP_081FB3AB
	.byte 0x02
EventScript_JP_081FB417: @ 0x081FB417
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_275757
	callstd 0x04
	goto EventScript_JP_081FB3AB
	.byte 0x02
EventScript_JP_081FB425: @ 0x081FB425
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2757A8
	callstd 0x04
	goto EventScript_JP_081FB3AB
	.byte 0x02
EventScript_JP_081FB433: @ 0x081FB433
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_275803
	callstd 0x04
	goto EventScript_JP_081FB3AB
	.byte 0x02
EventScript_JP_081FB441: @ 0x081FB441
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_27589C
	callstd 0x04
	goto EventScript_JP_081FB3AB
	.byte 0x02
EventScript_JP_081FB44F: @ 0x081FB44F
	releaseall
	end
EventText_JP_081FB451: @ 0x081FB451
	.string "なかなか　かりたい　ポケモンが\nみつからねぇ　からよぉ\lそこの　にーさんに　もんく　いったけどよぉ\pちぃっとも　あいて　してくれねぇのさ\nくやしいったら　ありゃ　しねぇぜ!\pおい　おまえ!\nだまって　これを　うけとれよぉ!{EOS}"
EventText_JP_081FB4C1: @ 0x081FB4C1
	.string "わざマシン41は　いちゃもん!\pあいてによぉ　おなじ　わざを　つづけて\nださせねえように　する　わざ　なんだよぉ!\pいっとくけどなぁ\nおれは　いちゃもん　つけてねぇぞ!{EOS}"
EventText_JP_081FB516: @ 0x081FB516
	.string "たまには　にがてな\nむしタイプの　ポケモンでも\lつかって　みようかな?\lスキに　なるかも　しれないし!{EOS}"
EventText_JP_081FB54A: @ 0x081FB54A
	.string "つよい　ポケモン　もってなくても\nここでなら　いっぱい　しょうぶできるね!{EOS}"
EventText_JP_081FB570: @ 0x081FB570
	.string "ステキな　トレーナーの　おにいさんも\nかしだして　くれれば　いいのにぃ{EOS}"
gMapScriptDispatch_SlateportCity_BattleTentCorridor_OnFrame_OnWarpIntoMap: @ 0x081FB594
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_SlateportCity_BattleTentCorridor_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_SlateportCity_BattleTentCorridor_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_SlateportCity_BattleTentCorridor_OnWarpIntoMap: @ 0x081FB59F
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081FB5A9
	.2byte 0
EventScript_JP_081FB5A9: @ 0x081FB5A9
	setvar 0x4001, 0x0001
	compare_var_to_value 0x8006, 0x0001
	goto_if 0x05, EventScript_JP_081FB5C4
	setobjectxy 0x0001, 0x0002, 0x0002
	turnobject 0x0001, 0x01
EventScript_JP_081FB5C4: @ 0x081FB5C4
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_SlateportCity_BattleTentCorridor_OnFrame: @ 0x081FB5C9
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081FB5D3
	.2byte 0
EventScript_JP_081FB5D3: @ 0x081FB5D3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x8006, 0x0001
	goto_if 0x01, EventScript_JP_081FB65C
	setvar 0x4000, 0x0001
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkUpX4_WalkInPlaceFastestDown
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX4_4
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x8006, 0x0002
	goto_if 0x01, EventScript_JP_081FB7B2
	setvar 0x8004, 0x0009
	@ event command: special
	special CallSlateportTentFunction
	setvar 0x8004, 0x0008
	@ event command: special
	special CallSlateportTentFunction
	loadword 0x00, gText_Rom_2323B3
	callstd 0x04
	fadescreen 0x01
	setvar 0x8004, 0x0006
	@ event command: special
	special CallSlateportTentFunction
	waitstate
EventScript_JP_081FB622: @ 0x081FB622
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_23287D
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x0002, 0x0001
	waitdooranim
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_MaysHouse_2F_Movement_WalkUp_SetInvisible_4
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_6
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x0002, 0x0001
	waitdooranim
	@ event command: warp
	warp MAP_ID_SLATEPORT_CITY_BATTLE_TENT_BATTLE_ROOM, 0xFF, 0x0004, 0x0004
	.byte 0x27, 0x02
EventScript_JP_081FB65C: @ 0x081FB65C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0009
	@ event command: special
	special CallBattleFactoryFunction
	setvar 0x8004, 0x0010
	@ event command: special
	special CallBattleFactoryFunction
	loadword 0x00, gText_Rom_2323F8
	callstd 0x04
	playfanfare 0x0170
	waitfanfare
	@ event command: special
	special HealPlayerParty
EventScript_JP_081FB67B: @ 0x081FB67B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081FB782
	compare_var_to_value 0x800D, 0x0002
	call_if 0x01, EventScript_JP_081FB789
	multichoice 0x14, 0x06, 0x68, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FB729
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FB6C9
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081FB6F7
EventScript_JP_081FB6C9: @ 0x081FB6C9
	loadword 0x00, gText_Rom_2324CA
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FB67B
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FB790
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081FB67B
EventScript_JP_081FB6F7: @ 0x081FB6F7
	message gText_Rom_2324E3
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FB67B
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FBD14
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081FB67B
EventScript_JP_081FB729: @ 0x081FB729
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0008
	@ event command: special
	special CallSlateportTentFunction
	loadword 0x00, gText_Rom_232839
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FB622
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FB75F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081FB622
EventScript_JP_081FB75F: @ 0x081FB75F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	fadescreen 0x01
	setvar 0x8004, 0x0007
	@ event command: special
	special CallSlateportTentFunction
	waitstate
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FB622
	loadword 0x00, gText_Rom_23285F
	callstd 0x04
	goto EventScript_JP_081FB622
EventScript_JP_081FB782: @ 0x081FB782
	message gText_Rom_232415
	waitmessage
	return
EventScript_JP_081FB789: @ 0x081FB789
	message gText_Rom_232433
	waitmessage
	return
EventScript_JP_081FB790: @ 0x081FB790
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_23288B
	waitmessage
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0002
	@ event command: special
	special CallSlateportTentFunction
	playse 0x0037
	waitse
	fadescreen 0x01
	setvar 0x8004, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	end
EventScript_JP_081FB7B2: @ 0x081FB7B2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special SavePlayerParty
	setvar 0x8004, 0x000A
	setvar 0x8005, 0x0000
	@ event command: special
	special CallBattleFactoryFunction
	goto EventScript_JP_081FB67B
LittlerootTown_MaysHouse_2F_Movement_WalkUpX4_4: @ 0x081FB7C7
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUpX2_SetInvisible_6: @ 0x081FB7CC
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUpX4_WalkInPlaceFastestDown: @ 0x081FB7D0
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_down
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUp_SetInvisible_4: @ 0x081FB7D6
	@ object movement sequence
	walk_up
	set_invisible
	step_end
EventText_JP_081FB7D9: @ 0x081FB7D9
	.string "コンテストの　ナイスな　じょうほう\nおしえて　やるよ!\pある　わざの　つぎに\nとくていの　わざで　アピールすると\lすごく　めだつ　ときが　あるんだ!\pうまくやれば　かなり\nゆうりな　アピールが　できるよ!\pただ　じゃまされちゃう　ときも　あるけどね{EOS}"
EventText_JP_081FB856: @ 0x081FB856
	.string "ぼくの　おとうさん　コンテストの\nしんさいんを　やって　いるんだ!\pぼくは　おおきく　なったら\nコンテストの　しんさいん　と\lジムリーダーと　どっちに　なろうかな?{EOS}"
EventText_JP_081FB8A9: @ 0x081FB8A9
	.string "どうして　おれの　ポケモンが\nゆうしょう　できなかったのか\lちぃっとも　わからねえ　からよぉ\lしんさいんに　もんく　いったけどよぉ\pちぃっとも　あいて　してくれねぇのさ\nくやしいったら　ありゃ　しねぇぜ!\pおい　おまえ!\nだまって　これを　うけとれよぉ!{EOS}"
EventText_JP_081FB929: @ 0x081FB929
	.string "わざマシン41は　いちゃもん!\pあいてによぉ　おなじ　わざを　つづけて\nださせねえように　する　わざ　なんだよぉ!\pいっとくけどなぁ\nおれは　いちゃもん　つけてねぇぞ!{EOS}"
EventText_JP_081FB97E: @ 0x081FB97E
	.string "しかい“あら!　なかなか　すてきな\nポケモンを　つれて　いますね!\pぜひ!　コンテストに\nでて　みて　くださーい!\pきっと　いいセン　いきますよ!\nわたしの　みる　めは　たしかですよ!{EOS}"
EventText_JP_081FB9DB: @ 0x081FB9DB
	.string "しんさいん“やあ　こんにちは!\nきみも　トレーナーの　ようだね!\pだったら　ポケモンコンテストに\nでない　ては　ないよ!\pコンテストパスを　シダケタウンで　もらって\nいますぐ　エントリーだ!{EOS}"
EventText_JP_081FBA3B: @ 0x081FBA3B
	.string "これから　いよいよ　アピールタイム!\nどの　わざから　みせようかな?{EOS}"
EventText_JP_081FBA5E: @ 0x081FBA5E
	.string "オレの　ポケモンの　アピール\nあんまり　みて　もらえなかった……\pフッ……　あの　しんさいん\nみる　めが　ないな!{EOS}"
	.byte 0x05, 0x50, 0xAB, 0x00, 0x0A, 0x2E, 0x15, 0x00, 0x14, 0x0A, 0x2B, 0x1F, 0x44, 0x00, 0x01, 0x37
	.byte 0x50, 0x13, 0x07, 0x13, 0xFE, 0x57, 0x70, 0x00, 0x09, 0x2E, 0x07, 0x35, 0x03, 0x00, 0x18, 0x50
	.byte 0x0C, 0x2E, 0x41, 0x18, 0xAB, 0xFA, 0x3D, 0x34, 0x01, 0x00, 0x02, 0x02, 0x0A, 0x14, 0x00, 0x05
	.byte 0x0C, 0x04, 0x13, 0x00, 0x01, 0x3A, 0x29, 0x26, 0xFB, 0x41, 0x0C, 0x10, 0x00, 0x2C, 0x3C, 0x37
	.byte 0x00, 0x1F, 0x2C, 0x28, 0x16, 0x00, 0x03, 0x09, 0x29, 0x14, 0xFE, 0x06, 0x02, 0x3D, 0x36, 0x03
	.byte 0x37, 0x00, 0x54, 0x57, 0x5B, 0x52, 0x64, 0x00, 0x0C, 0x13, 0x08, 0x29, 0xAB, 0xFB, 0x02, 0x11
	.byte 0x46, 0x2E, 0x00, 0x54, 0x57, 0x5B, 0x52, 0x64, 0x00, 0x0C, 0x10, 0x14, 0x07, 0xFE, 0x51, 0x9C
	.byte 0xAE, 0x79, 0x0C, 0x13, 0x10, 0x00, 0x9F, 0x59, 0x73, 0x7E, 0x16, 0x1A, 0xB0, 0xB0, 0xFB, 0x02
	.byte 0x02, 0x0A, 0x14, 0x37, 0x00, 0x01, 0x29, 0x06, 0x23, 0x15, 0xAB, 0xFF
EventText_JP_081FBB24: @ 0x081FBB24
	.string "だ　だめだぁ!　ポケモンより\nじぶんの　ほうが　きんちょう　してる!\lブルブル……　ドキドキ…{EOS}"
EventText_JP_081FBB54: @ 0x081FBB54
	.string "ポケモンしょうぶも　コンテストも\nちがう　ようで　にて　いるよね!\pだいじに　そだてた　ポケモンを\nしんらいして　がんばる　ところがさ!{EOS}"
EventText_JP_081FBB99: @ 0x081FBB99
	.string "あの　ポケモン　ちょうし　よさそうだろ!\p2じしんさで　ちょうしが　よくなった\nポケモンは　あまり　きんちょうしないで\lアピール　できる　ように　なるみたいだな{EOS}"
EventText_JP_081FBBEA: @ 0x081FBBEA
	.string "なんだあー　このぐらい　なら\nおれの　ポケモンの　ほうが\lだんぜん　うえ　だね!{EOS}"
EventText_JP_081FBC13: @ 0x081FBC13
	.string "げんきな　アピールを　みていると\nいっしょに　からだを\lうごかしたく　なって　こないか?{EOS}"
EventText_JP_081FBC40: @ 0x081FBC40
	.string "ポケモン　コンテスト\nハイパーランク　ステージ!{EOS}"
gMapScriptDispatch_SlateportCity_BattleTentBattleRoom_OnTransition_OnWarpIntoMap_OnFrame: @ 0x081FBC59
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081FBC69
	.byte 0x04
	.4byte gMapScriptConditionTable_SlateportCity_BattleTentBattleRoom_OnWarpIntoMap
	.byte 0x02
	.4byte gMapScriptConditionTable_SlateportCity_BattleTentBattleRoom_OnFrame
	.byte 0
EventScript_JP_081FBC69: @ 0x081FBC69
	call EventScript_JP_081FBC6F
	end
EventScript_JP_081FBC6F: @ 0x081FBC6F
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FBC87
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FBC8D
	return
EventScript_JP_081FBC87: @ 0x081FBC87
	setvar 0x4011, 0x0064
	return
EventScript_JP_081FBC8D: @ 0x081FBC8D
	setvar 0x4011, 0x0069
	return
gMapScriptConditionTable_SlateportCity_BattleTentBattleRoom_OnWarpIntoMap: @ 0x081FBC93
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081FBC9D
	.2byte 0
EventScript_JP_081FBC9D: @ 0x081FBC9D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4001, 0x0001
	@ event command: hideobjectat
	hideobjectat 0x00FF, MAP_ID_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
	@ event command: hideobjectat
	hideobjectat 0x0002, MAP_ID_SLATEPORT_CITY_BATTLE_TENT_BATTLE_ROOM
	end
gMapScriptConditionTable_SlateportCity_BattleTentBattleRoom_OnFrame: @ 0x081FBCAD
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081FBCB7
	.2byte 0
EventScript_JP_081FBCB7: @ 0x081FBCB7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0003, LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_WalkInPlaceFastestRight_2
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x000B
	@ event command: special
	special CallBattleFactoryFunction
	setobjectxyperm 0x0002, 0x0005, 0x0001
	@ event command: removeobject
	removeobject 0x0002
	@ event command: addobject
	addobject 0x0002
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_WalkDownX4_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0004
	@ event command: special
	special CallVerdanturfTentFunction
	lockall
	loadword 0x00, 0x02021C7C
	callstd 0x04
	waitmessage
	closemessage
	@ event command: special
	special HealPlayerParty
	setvar 0x8004, 0x0006
	setvar 0x8005, 0x0000
	@ event command: special
	special DoSpecialTrainerBattle
	waitstate
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FBD32
EventScript_JP_081FBD14: @ 0x081FBD14
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special LoadPlayerParty
	@ event command: warp
	warp MAP_ID_SLATEPORT_CITY_BATTLE_TENT_LOBBY, 0xFF, 0x0006, 0x0006
	.byte 0x27
EventScript_JP_081FBD32: @ 0x081FBD32
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
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
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081FBD74
	setvar 0x8006, 0x0001
	@ event command: warp
	warp MAP_ID_SLATEPORT_CITY_BATTLE_TENT_CORRIDOR, 0xFF, 0x0002, 0x0003
	.byte 0x27
EventScript_JP_081FBD74: @ 0x081FBD74
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special LoadPlayerParty
	@ event command: warp
	warp MAP_ID_SLATEPORT_CITY_BATTLE_TENT_LOBBY, 0xFF, 0x0006, 0x0006
	.byte 0x27
LittlerootTown_MaysHouse_2F_Movement_WalkUpX3_WalkInPlaceFastestRight_2: @ 0x081FBD92
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX4_WalkInPlaceFastestLeft: @ 0x081FBD97
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_left
	step_end
	.byte 0x00
.globl EventScript_JP_081FBD9E
EventScript_JP_081FBD9E: @ 0x081FBD9E
	lock
	faceplayer
	loadword 0x00, EventText_JP_081FBE87
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FBDBF
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FBDE2
	end
EventScript_JP_081FBDBF: @ 0x081FBDBF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081FBED1
	callstd 0x04
	@ event command: special
	special ChoosePartyMon
	waitstate
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x05, EventScript_JP_081FBDEC
	compare_var_to_value 0x8004, 0x00FF
	goto_if 0x01, EventScript_JP_081FBDE2
	end
EventScript_JP_081FBDE2: @ 0x081FBDE2
	loadword 0x00, EventText_JP_081FBF7D
	callstd 0x04
	release
	end
EventScript_JP_081FBDEC: @ 0x081FBDEC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	specialvar_ 0x800D, 0x0146
	compare_var_to_value 0x800D, 0x019C
	goto_if 0x01, EventScript_JP_081FBE3F
	@ event command: special
	special TV_CopyNicknameToStringVar1AndEnsureTerminated
	@ event command: special
	special TV_CheckMonOTIDEqualsPlayerID
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FBE49
	specialvar_ 0x800D, 0x014F
	@ event command: special
	special TV_CopyNicknameToStringVar1AndEnsureTerminated
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FBE49
	loadword 0x00, EventText_JP_081FBEEA
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FBE53
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FBDE2
	end
EventScript_JP_081FBE3F: @ 0x081FBE3F
	loadword 0x00, EventText_JP_081FC011
	callstd 0x04
	release
	end
EventScript_JP_081FBE49: @ 0x081FBE49
	loadword 0x00, EventText_JP_081FBFCF
	callstd 0x04
	release
	end
EventScript_JP_081FBE53: @ 0x081FBE53
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081FBF35
	callstd 0x04
	call 0x08243460
	specialvar_ 0x800D, 0x007B
	@ event command: special
	special TV_CopyNicknameToStringVar1AndEnsureTerminated
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FBE7D
	loadword 0x00, EventText_JP_081FBF8F
	callstd 0x04
	release
	end
EventScript_JP_081FBE7D: @ 0x081FBE7D
	loadword 0x00, EventText_JP_081FBF4E
	callstd 0x04
	release
	end
EventText_JP_081FBE87: @ 0x081FBE87
	.string "はい　はい!\nわたしは　せいめい　はんだんし\lいうなれば　なまえの　うらないです\pはい　あなたの　ポケモンの\nニックネームを　うらなって　あげるよ{EOS}"
EventText_JP_081FBED1: @ 0x081FBED1
	.string "どの　ポケモンの\nニックネームを　うらなうかね?{EOS}"
EventText_JP_081FBEEA: @ 0x081FBEEA
	.string "うーむ　{STR_VAR_1}か……\nなかなか　いい　ニックネームを　つけたね\pでもねー\nもう　すこしだけ　いい　なまえを\lわたしが　つけて　あげようか?　どうかな?{EOS}"
EventText_JP_081FBF35: @ 0x081FBF35
	.string "そうか　では\nどんな　ニックネームに　しようかな{EOS}"
EventText_JP_081FBF4E: @ 0x081FBF4E
	.string "よし　これから\nこの　ポケモンは　{STR_VAR_1}だ!\pまえより　いい　なまえ　じゃないか\nよかったな!{EOS}"
EventText_JP_081FBF7D: @ 0x081FBF7D
	.string "そうか\nわかった　また　きなさいよ{EOS}"
EventText_JP_081FBF8F: @ 0x081FBF8F
	.string "よし　これから\nこの　ポケモンは　{STR_VAR_1}だ!\pまえと　おなじように　みえるが\nこっちの　ほうが　だんぜん　いいぞ!\lよかったな!{EOS}"
EventText_JP_081FBFCF: @ 0x081FBFCF
	.string "うーむ　{STR_VAR_1}か!\nこれは　すばらしい　ニックネームだ!\lけちの　つけようもない!\pこれからも　{STR_VAR_1}を\nかわいがって　あげなさいよ!{EOS}"
EventText_JP_081FC011: @ 0x081FC011
	.string "おいおい……\nそれは　タマゴ　じゃないか!{EOS}"
	.byte 0x00
.globl EventScript_JP_081FC028
EventScript_JP_081FC028: @ 0x081FC028
	lock
	faceplayer
	checkflag 0x0155
	goto_if 0x00, EventScript_JP_081FC2E4
	checkflag 0x0156
	call_if 0x00, EventScript_JP_081FC304
	copyvar 0x8000, 0x40B7
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FC064
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FC077
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081FC0CD
	release
	end
EventScript_JP_081FC064: @ 0x081FC064
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x40B7, 0x0001
	loadword 0x00, EventText_JP_081FC4E7
	callstd 0x04
	goto EventScript_JP_081FC0D7
	.byte 0x02
EventScript_JP_081FC077: @ 0x081FC077
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4002, 0x0000
	checkflag 0x00CC
	call_if 0x01, EventScript_JP_081FC162
	checkflag 0x00CB
	call_if 0x01, EventScript_JP_081FC162
	checkflag 0x00CA
	call_if 0x01, EventScript_JP_081FC162
	checkflag 0x00C9
	call_if 0x01, EventScript_JP_081FC162
	checkflag 0x00C8
	call_if 0x01, EventScript_JP_081FC162
	compare_var_to_value 0x4002, 0x0005
	call_if 0x01, EventScript_JP_081FC15C
	compare_var_to_value 0x40B7, 0x0002
	goto_if 0x01, EventScript_JP_081FC0CD
	loadword 0x00, EventText_JP_081FC5F9
	callstd 0x04
	goto EventScript_JP_081FC0D7
	.byte 0x02
EventScript_JP_081FC0CD: @ 0x081FC0CD
	loadword 0x00, EventText_JP_081FC826
	callstd 0x04
	release
	end
EventScript_JP_081FC0D7: @ 0x081FC0D7
	loadword 0x00, EventText_JP_081FC623
	callstd 0x04
	setvar 0x4001, 0x0000
	checkflag 0x00CC
	call_if 0x00, EventScript_JP_081FC2CD
	checkflag 0x00CB
	call_if 0x00, EventScript_JP_081FC2B6
	checkflag 0x00CA
	call_if 0x00, EventScript_JP_081FC29F
	checkflag 0x00C9
	call_if 0x00, EventScript_JP_081FC288
	checkflag 0x00C8
	call_if 0x00, EventScript_JP_081FC271
	bufferleadmonspeciesname 0x00
	copyvar 0x8000, 0x4001
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FC168
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FC172
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081FC1A3
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081FC1D4
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081FC205
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_081FC236
	release
	end
EventScript_JP_081FC15C: @ 0x081FC15C
	setvar 0x40B7, 0x0002
	return
EventScript_JP_081FC162: @ 0x081FC162
	addvar 0x4002, 0x0001
	return
EventScript_JP_081FC168: @ 0x081FC168
	loadword 0x00, EventText_JP_081FC631
	callstd 0x04
	release
	end
EventScript_JP_081FC172: @ 0x081FC172
	checkitemspace 0x00FE, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FC267
	loadword 0x00, EventText_JP_081FC6CB
	callstd 0x04
	setflag 0x00C8
	setorcopyvar 0x8000, 0x00FE
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	loadword 0x00, EventText_JP_081FC728
	callstd 0x04
	release
	end
EventScript_JP_081FC1A3: @ 0x081FC1A3
	checkitemspace 0x00FF, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FC267
	loadword 0x00, EventText_JP_081FC6CB
	callstd 0x04
	setflag 0x00C9
	setorcopyvar 0x8000, 0x00FF
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	loadword 0x00, EventText_JP_081FC75D
	callstd 0x04
	release
	end
EventScript_JP_081FC1D4: @ 0x081FC1D4
	checkitemspace 0x0100, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FC267
	loadword 0x00, EventText_JP_081FC6CB
	callstd 0x04
	setflag 0x00CA
	setorcopyvar 0x8000, 0x0100
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	loadword 0x00, EventText_JP_081FC792
	callstd 0x04
	release
	end
EventScript_JP_081FC205: @ 0x081FC205
	checkitemspace 0x0101, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FC267
	loadword 0x00, EventText_JP_081FC6CB
	callstd 0x04
	setflag 0x00CB
	setorcopyvar 0x8000, 0x0101
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	loadword 0x00, EventText_JP_081FC7C4
	callstd 0x04
	release
	end
EventScript_JP_081FC236: @ 0x081FC236
	checkitemspace 0x0102, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FC267
	loadword 0x00, EventText_JP_081FC6CB
	callstd 0x04
	setflag 0x00CC
	setorcopyvar 0x8000, 0x0102
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	loadword 0x00, EventText_JP_081FC7F5
	callstd 0x04
	release
	end
EventScript_JP_081FC267: @ 0x081FC267
	loadword 0x00, EventText_JP_081FC68D
	callstd 0x04
	release
	end
EventScript_JP_081FC271: @ 0x081FC271
	specialvar_ 0x800D, 0x0109
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081FC282
	return
EventScript_JP_081FC282: @ 0x081FC282
	setvar 0x4001, 0x0001
	return
EventScript_JP_081FC288: @ 0x081FC288
	specialvar_ 0x800D, 0x010A
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081FC299
	return
EventScript_JP_081FC299: @ 0x081FC299
	setvar 0x4001, 0x0002
	return
EventScript_JP_081FC29F: @ 0x081FC29F
	specialvar_ 0x800D, 0x010B
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081FC2B0
	return
EventScript_JP_081FC2B0: @ 0x081FC2B0
	setvar 0x4001, 0x0003
	return
EventScript_JP_081FC2B6: @ 0x081FC2B6
	specialvar_ 0x800D, 0x010C
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081FC2C7
	return
EventScript_JP_081FC2C7: @ 0x081FC2C7
	setvar 0x4001, 0x0004
	return
EventScript_JP_081FC2CD: @ 0x081FC2CD
	specialvar_ 0x800D, 0x010D
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081FC2DE
	return
EventScript_JP_081FC2DE: @ 0x081FC2DE
	setvar 0x4001, 0x0005
	return
EventScript_JP_081FC2E4: @ 0x081FC2E4
	checkflag 0x0156
	goto_if 0x01, EventScript_JP_081FC2FA
	loadword 0x00, EventText_JP_081FC3C5
	callstd 0x04
	setflag 0x0156
	release
	end
EventScript_JP_081FC2FA: @ 0x081FC2FA
	loadword 0x00, EventText_JP_081FC4B3
	callstd 0x04
	release
	end
EventScript_JP_081FC304: @ 0x081FC304
	loadword 0x00, EventText_JP_081FC3C5
	callstd 0x04
	setflag 0x0156
	return
.globl EventScript_JP_081FC310
EventScript_JP_081FC310: @ 0x081FC310
	lock
	faceplayer
	checkflag 0x0116
	goto_if 0x01, EventScript_JP_081FC370
	loadword 0x00, EventText_JP_081FC873
	callstd 0x04
	specialvar_ 0x800D, 0x00E6
	compare_var_to_value 0x800D, 0x0004
	goto_if 0x04, EventScript_JP_081FC335
	release
	end
EventScript_JP_081FC335: @ 0x081FC335
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	playse 0x0015
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081FC8FE
	callstd 0x04
	setorcopyvar 0x8000, 0x00B8
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0116
	release
	end
EventScript_JP_081FC370: @ 0x081FC370
	loadword 0x00, EventText_JP_081FC93D
	callstd 0x04
	release
	end
.globl EventScript_JP_081FC37A
EventScript_JP_081FC37A: @ 0x081FC37A
	loadword 0x00, EventText_JP_081FC989
	callstd 0x02
	end
.globl EventScript_JP_081FC383
EventScript_JP_081FC383: @ 0x081FC383
	loadword 0x00, EventText_JP_081FC9DB
	callstd 0x02
	end
.globl EventScript_JP_081FC38C
EventScript_JP_081FC38C: @ 0x081FC38C
	lock
	faceplayer
	waitse
	playmoncry 0x013B, 0x0000
	loadword 0x00, EventText_JP_081FCA19
	callstd 0x04
	waitmoncry
	release
	end
.globl EventScript_JP_081FC39F
EventScript_JP_081FC39F: @ 0x081FC39F
	lock
	faceplayer
	waitse
	playmoncry 0x0120, 0x0000
	loadword 0x00, EventText_JP_081FCA24
	callstd 0x04
	waitmoncry
	release
	end
.globl EventScript_JP_081FC3B2
EventScript_JP_081FC3B2: @ 0x081FC3B2
	lock
	faceplayer
	waitse
	playmoncry 0x00B8, 0x0000
	loadword 0x00, EventText_JP_081FCA31
	callstd 0x04
	waitmoncry
	release
	end
EventText_JP_081FC3C5: @ 0x081FC3C5
	.string "ウォッホン!!\pわしが　ポケモン　だいすきクラブで\nいちばーん　えらい　かいちょう　ですぞ!\pなんたって　かいちょう　ですからな\nポケモンを　そだてさせたら\lみぎに　でるもの　なし!\pそんな　ポケモンを　じまんできる\nポケモンコンテストという\lもよおしが　あるの　ですが…\pなにしろ　とおくの　まちで　やっているので\nあまり　さんか　できんのですよ\pですから　いまは　ここで\nじぶんの　ポケモンを　じまんしたり\lみなさんの　ポケモンを\lみせて　いただくだけに　しておるのです{EOS}"
EventText_JP_081FC4B3: @ 0x081FC4B3
	.string "ポケモンコンテストに　でた　ことが\nある　トレーナーの　ポケモン…\lぜひとも　みて　みたい　ものですな{EOS}"
EventText_JP_081FC4E7: @ 0x081FC4E7
	.string "ウォッホン!!\nおっ　コンテストに　でられましたな!\pどれ　あなたは　ポケモンを\nどんな　ふうに　そだてられて　いるのかな?\pいやー　ひとの　そだてた　ポケモンを\nはいけん　するのは　たのしい　ですぞ!\pきちんと　そだてられた　ポケモンの\nしあわせそうな　かお……\pそれを　みつめる　トレーナーの\nやさしげな　ひとみ……\pいやー　しあわせで\nむねが　いっぱいに　なりますな……\pおっと　しつれい!　ついつい\nはなしが　ながくなって　しまいましたな\pでは　さっそく　きみの　ポケモンが\nどれほど　そだっているのか\lはいけん　させて　もらいますかな!{EOS}"
EventText_JP_081FC5F9: @ 0x081FC5F9
	.string "きみの　ポケモン　そだって　ますかな?\nちょっと　はいけん　させて　もらいますぞ!{EOS}"
EventText_JP_081FC623: @ 0x081FC623
	.string "ふむふむ……\nなるほど……{EOS}"
EventText_JP_081FC631: @ 0x081FC631
	.string "ふむう……\nわるくは　ないんだが　よくもない……\pおやの　トレーナーである　きみの\nどりょくが　ひつよう　ですな!\pたとえば　もっと　たくさん\nポロックを　あげるのは　どうですかな?{EOS}"
EventText_JP_081FC68D: @ 0x081FC68D
	.string "あらら……\pけっこう　ポケモンが　そだっているので\nいいものを　あげようと　おもったのですが\lもちものが　いっぱい　ですな{EOS}"
EventText_JP_081FC6CB: @ 0x081FC6CB
	.string "きみの　{STR_VAR_1}　ですが\nなかなか　みごとに　そだって　おりますな!\lいやー　たいした　ものです!\pだが　この　どうぐを　つかって　あげたなら\nもっと　そだつこと　まちがいなし!　ですぞ!{EOS}"
EventText_JP_081FC728: @ 0x081FC728
	.string "その　あかいバンダナを　もたせると\nポケモンの　かっこよさを\lみんなに　みとめさせることが　できますぞ!{EOS}"
EventText_JP_081FC75D: @ 0x081FC75D
	.string "その　あおいバンダナを　もたせると\nポケモンの　うつくしさを\lいまより　きわだたせることが　できますぞ!{EOS}"
EventText_JP_081FC792: @ 0x081FC792
	.string "その　ピンクのバンダナを　もたせると\nポケモンの　かわいさを\lもっと　ひきだすことが　できますぞ!{EOS}"
EventText_JP_081FC7C4: @ 0x081FC7C4
	.string "その　みどりのバンダナを　もたせると\nポケモンの　かしこさを\lさらに　みがくことが　できますぞ!{EOS}"
EventText_JP_081FC7F5: @ 0x081FC7F5
	.string "その　きいろのバンダナを　もたせると\nポケモンの　たくましさを\lいっそう　アピール　できますぞ!{EOS}"
EventText_JP_081FC826: @ 0x081FC826
	.string "きみに　あげる　どうぐは\nもう　なにも　ないですぞ!\pなにしろ　どうぐに　たよらんでも\nきみの　ポケモンを　そだてる\lさいのうは　バツグン　ですからな!{EOS}"
EventText_JP_081FC873: @ 0x081FC873
	.string "わたし　ポケモンが　なついている\nすがたを　みるのが　すき\pポケモンって　いっしょに　いる\nひとの　きもちに　すごく　びんかん!\pあなたが　ポケモンを　だいじに　すれば\nポケモンも　あなたに　なついてくれるわ!\pあなたの　ポケモンが　あなたに　なついたら\nわたしにも　みせてね{EOS}"
EventText_JP_081FC8FE: @ 0x081FC8FE
	.string "あなたの　ポケモン\nあなたに　なついているのね\pポケモンに　やさしい　トレーナーさんに\nだいすきクラブからの　おくりもの　よ{EOS}"
EventText_JP_081FC93D: @ 0x081FC93D
	.string "ポケモンって　いっしょに　いる\nひとの　きもちに　すごく　びんかん!\pあなたが　ポケモンを　だいじに　すれば\nポケモンも　あなたに　なついてくれるわ!{EOS}"
EventText_JP_081FC989: @ 0x081FC989
	.string "ポケモンしょうぶに　まけて\nひんしに　させて　ばかりだと\lポケモンが　どんどん　すさんで\lトレーナーのこと　うたがう　ようになる\pつまり　なついて　くれなくなるよ{EOS}"
EventText_JP_081FC9DB: @ 0x081FC9DB
	.string "ポケモンって　どうぐ\nつかってもらうのが　すきなのかな?\pだって　タウリンとか　あげると\nすごく　うれしそうに　するのよ!{EOS}"
EventText_JP_081FCA19: @ 0x081FCA19
	.string "エネコ“ふにゃあーあ{EOS}"
EventText_JP_081FCA24: @ 0x081FCA24
	.string "ジグザグマ“キュウウ……{EOS}"
EventText_JP_081FCA31: @ 0x081FCA31
	.string "マリルリ“マリ　マリ!?{EOS}"
	.byte 0x00
.globl EventScript_JP_081FCA3F
EventScript_JP_081FCA3F: @ 0x081FCA3F
	loadword 0x00, EventText_JP_081FCCC1
	callstd 0x02
	end
.globl EventScript_JP_081FCA48
EventScript_JP_081FCA48: @ 0x081FCA48
	lockall
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081FCA6A
	.byte 0x02
.globl EventScript_JP_081FCA59
EventScript_JP_081FCA59: @ 0x081FCA59
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081FCA6A
	.byte 0x02
EventScript_JP_081FCA6A: @ 0x081FCA6A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	showmoneybox 0x00, 0x00, 0x00
	loadword 0x00, EventText_JP_081FCC7E
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FCA91
	closemessage
	hidemoneybox
	nop
	nop
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkDown_1
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_081FCA91: @ 0x081FCA91
	checkmoney 0x00000032, 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FCAC1
	playse 0x005F
	takemoney 0x00000032, 0x00
	updatemoneybox 0x00, 0x00
	nop
	loadword 0x00, EventText_JP_081FCCC1
	callstd 0x04
	setvar 0x40AA, 0x0001
	hidemoneybox
	nop
	nop
	releaseall
	end
EventScript_JP_081FCAC1: @ 0x081FCAC1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x0095
	goto_if 0x00, EventScript_JP_081FCAE2
	loadword 0x00, EventText_JP_081FCCCC
	callstd 0x04
	closemessage
	hidemoneybox
	nop
	nop
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkDown_1
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_081FCAE2: @ 0x081FCAE2
	loadword 0x00, EventText_JP_081FCCDD
	callstd 0x04
	setvar 0x40AA, 0x0001
	hidemoneybox
	nop
	nop
	releaseall
	end
LittlerootTown_MaysHouse_2F_Movement_WalkDown_1: @ 0x081FCAF4
	@ object movement sequence
	walk_down
	step_end
.globl EventScript_JP_081FCAF6
EventScript_JP_081FCAF6: @ 0x081FCAF6
	loadword 0x00, EventText_JP_081FCD12
	callstd 0x02
	end
.globl EventScript_JP_081FCAFF
EventScript_JP_081FCAFF: @ 0x081FCAFF
	loadword 0x00, EventText_JP_081FCD2D
	callstd 0x02
	end
.globl EventScript_JP_081FCB08
EventScript_JP_081FCB08: @ 0x081FCB08
	loadword 0x00, EventText_JP_081FCD60
	callstd 0x02
	end
.globl EventScript_JP_081FCB11
EventScript_JP_081FCB11: @ 0x081FCB11
	loadword 0x00, EventText_JP_081FCD7C
	callstd 0x03
	end
.globl EventScript_JP_081FCB1A
EventScript_JP_081FCB1A: @ 0x081FCB1A
	loadword 0x00, EventText_JP_081FCD97
	callstd 0x02
	end
.globl EventScript_JP_081FCB23
EventScript_JP_081FCB23: @ 0x081FCB23
	loadword 0x00, EventText_JP_081FCDBB
	callstd 0x02
	end
.globl EventScript_JP_081FCB2C
EventScript_JP_081FCB2C: @ 0x081FCB2C
	loadword 0x00, EventText_JP_081FCF51
	callstd 0x03
	end
.globl EventScript_JP_081FCB35
EventScript_JP_081FCB35: @ 0x081FCB35
	loadword 0x00, EventText_JP_081FCF9B
	callstd 0x03
	end
.globl EventScript_JP_081FCB3E
EventScript_JP_081FCB3E: @ 0x081FCB3E
	loadword 0x00, EventText_JP_081FCFEB
	callstd 0x03
	end
.globl EventScript_JP_081FCB47
EventScript_JP_081FCB47: @ 0x081FCB47
	loadword 0x00, EventText_JP_081FD062
	callstd 0x03
	end
.globl EventScript_JP_081FCB50
EventScript_JP_081FCB50: @ 0x081FCB50
	loadword 0x00, EventText_JP_081FD0D7
	callstd 0x03
	end
.globl EventScript_JP_081FCB59
EventScript_JP_081FCB59: @ 0x081FCB59
	loadword 0x00, EventText_JP_081FD16B
	callstd 0x03
	end
.globl EventScript_JP_081FCB62
EventScript_JP_081FCB62: @ 0x081FCB62
	loadword 0x00, EventText_JP_081FD1EA
	callstd 0x03
	end
.globl EventScript_JP_081FCB6B
EventScript_JP_081FCB6B: @ 0x081FCB6B
	loadword 0x00, EventText_JP_081FD258
	callstd 0x03
	end
.globl EventScript_JP_081FCB74
EventScript_JP_081FCB74: @ 0x081FCB74
	loadword 0x00, EventText_JP_081FD2CF
	callstd 0x03
	end
.globl EventScript_JP_081FCB7D
EventScript_JP_081FCB7D: @ 0x081FCB7D
	loadword 0x00, EventText_JP_081FCDDF
	callstd 0x02
	end
.globl EventScript_JP_081FCB86
EventScript_JP_081FCB86: @ 0x081FCB86
	loadword 0x00, EventText_JP_081FCE00
	callstd 0x02
	end
.globl EventScript_JP_081FCB8F
EventScript_JP_081FCB8F: @ 0x081FCB8F
	loadword 0x00, EventText_JP_081FCE4A
	callstd 0x02
	end
.globl EventScript_JP_081FCB98
EventScript_JP_081FCB98: @ 0x081FCB98
	loadword 0x00, EventText_JP_081FCE86
	callstd 0x02
	end
.globl EventScript_JP_081FCBA1
EventScript_JP_081FCBA1: @ 0x081FCBA1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	delay 0x0008
	playse 0x0015
	@ event command: applymovement
	applymovement 0x000D, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x000D, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081FCEBA
	callstd 0x04
	setorcopyvar 0x8000, 0x014E
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FCC5E
	setflag 0x010D
	loadword 0x00, EventText_JP_081FCF12
	callstd 0x04
	closemessage
	compare_var_to_value 0x800C, 0x0002
	goto_if 0x01, EventScript_JP_081FCC15
	compare_var_to_value 0x800C, 0x0001
	goto_if 0x01, EventScript_JP_081FCC2C
	compare_var_to_value 0x800C, 0x0003
	goto_if 0x01, EventScript_JP_081FCC3C
	compare_var_to_value 0x800C, 0x0004
	goto_if 0x01, EventScript_JP_081FCC3C
	end
EventScript_JP_081FCC15: @ 0x081FCC15
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_Delay16_Delay8_Delay4_WalkInPlaceFastestDown
	@ event command: applymovement
	applymovement 0x000D, LittlerootTown_MaysHouse_2F_Movement_WalkFastRight_WalkFastDownX4_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081FCC53
	.byte 0x02
EventScript_JP_081FCC2C: @ 0x081FCC2C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000D, LittlerootTown_MaysHouse_2F_Movement_FaceDown_WalkFastDownX4_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081FCC53
	.byte 0x02
EventScript_JP_081FCC3C: @ 0x081FCC3C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkInPlaceFastestDown_1
	@ event command: applymovement
	applymovement 0x000D, LittlerootTown_MaysHouse_2F_Movement_FaceDown_WalkFastDownX4_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081FCC53
	.byte 0x02
EventScript_JP_081FCC53: @ 0x081FCC53
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setflag 0x03C5
	playse 0x0009
	@ event command: removeobject
	removeobject 0x000D
	release
	end
EventScript_JP_081FCC5E: @ 0x081FCC5E
	loadword 0x00, EventText_JP_081FCF3A
	callstd 0x04
	release
	end
LittlerootTown_MaysHouse_2F_Movement_Delay16_Delay8_Delay4_WalkInPlaceFastestDown: @ 0x081FCC68
	@ object movement sequence
	delay_16
	delay_8
	delay_4
	walk_in_place_fastest_down
	step_end
LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkInPlaceFastestDown_1: @ 0x081FCC6D
	@ object movement sequence
	delay_16
	walk_in_place_fastest_down
	step_end
LittlerootTown_MaysHouse_2F_Movement_FaceDown_WalkFastDownX4_Delay8: @ 0x081FCC70
	@ object movement sequence
	face_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_8
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkFastRight_WalkFastDownX4_Delay8: @ 0x081FCC77
	@ object movement sequence
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_8
	step_end
EventText_JP_081FCC7E: @ 0x081FCC7E
	.string "うみの　かがく　はくぶつかんへ\nようこそ　いらっしゃいませ!\pにゅうじょうりょう　50えんに　なります\nけんがく　して　いきますか?{EOS}"
EventText_JP_081FCCC1: @ 0x081FCCC1
	.string "ごゆっくり　どうぞ!{EOS}"
EventText_JP_081FCCCC: @ 0x081FCCCC
	.string "……あら　おかねが　たりませんわ{EOS}"
EventText_JP_081FCCDD: @ 0x081FCCDD
	.string "……あら　さっきの　だんたいさん?\nあなただけ　おくれちゃって　しかたないわね\lはやく　とおっちゃって!{EOS}"
EventText_JP_081FCD12: @ 0x081FCD12
	.string "みんなの　ために\nわれわれ　アクアだんは　いるのよ!{EOS}"
EventText_JP_081FCD2D: @ 0x081FCD2D
	.string "げんちしゅうごう　で\nここに　あつまったのは　いいけど……\pかんじんの　リーダーが　まだ　こないんだ{EOS}"
EventText_JP_081FCD60: @ 0x081FCD60
	.string "ここに　おいてある　もの\nかっぱらうと　もうかるかな?{EOS}"
EventText_JP_081FCD7C: @ 0x081FCD7C
	.string "この　ちしきを　いかして\nわるいこと　してやるか……{EOS}"
EventText_JP_081FCD97: @ 0x081FCD97
	.string "なかまが　カナズミで　ドジらなければ\nここに　こなくて　すんだのによ!{EOS}"
EventText_JP_081FCDBB: @ 0x081FCDBB
	.string "さっき　50えんが　なくて\nうけつけで　すごい　じかん　かかったよ……{EOS}"
EventText_JP_081FCDDF: @ 0x081FCDDF
	.string "うみのこと　べんきょう　して\nポケモンしょうぶに　やくだてたいの{EOS}"
EventText_JP_081FCE00: @ 0x081FCE00
	.string "わたくしッ\nうみを　みると　こうふん　するのですッ!\pそんな　わたくしに　とって\nクスノキかんちょうは\lあこがれの　ひと　ナンバー1　なのですッ!{EOS}"
EventText_JP_081FCE4A: @ 0x081FCE4A
	.string "うみは　はてしなく　ひろく\nどこまでも　ふかい……\pきっと　われわれが　しらない　ポケモンも\nいっぱい　いるのだろうね{EOS}"
EventText_JP_081FCE86: @ 0x081FCE86
	.string "あたし　うみの　ポケモンが　ほしいの\pだって　ひんやりと　してて\nだきしめたら　きもちよさそう　だもの{EOS}"
EventText_JP_081FCEBA: @ 0x081FCEBA
	.string "ひえー!!\nなんで　おまえ　ここに　いるんだよ!?\pおれ?　おれは　カナシダ　トンネルで\nおまえに　コテンパンに　された\lアクアだん　だよ\pこれを　やるから　ゆるしてくれよ!{EOS}"
EventText_JP_081FCF12: @ 0x081FCF12
	.string "その　わざマシン\nおれより　おまえのほうが　にあうぜ!\pじゃあな　わはははー!{EOS}"
EventText_JP_081FCF3A: @ 0x081FCF3A
	.string "たのむから\nなんとかして　うけとってくれよ!{EOS}"
EventText_JP_081FCF51: @ 0x081FCF51
	.string "ガラスの　なかで　あおい　みずが\nくるくると　まわって　いる!\p‘これは　かぜの　ちからで　じんこうてきに\n　うずしおを　おこす　じっけん　です’{EOS}"
EventText_JP_081FCF9B: @ 0x081FCF9B
	.string "ガラスの　なかで　あかい　ボールが\nうかんだり　しずんだり　している!\p‘これは　ボールの　ふりょくを　りようした\n　たきのぼりの　げんりの　じっけん　です’{EOS}"
EventText_JP_081FCFEB: @ 0x081FCFEB
	.string "うみの　そこの　つちの　みほんだ!\p‘かいていには　ながい　ねんげつを　かけて\n　せいぶつの　しがいが　ふりつもり\l　ちそうが　かたち　づくられて　いきます’\p‘これらを　ぶんせき　することで\n　とおい　むかしの　ことが　わかるのです’{EOS}"
EventText_JP_081FD062: @ 0x081FD062
	.string "うみべの　すなの　みほんだ!\p‘やまから　かわを　つたって　きた　いしは\n　みずの　なかで　ころがる　うちに\l　くだかれたり　けずれたり　していきます’\p‘それらが　ちいさな　つぶに　なって\n　うみべの　すなが　できて　いくのです’{EOS}"
EventText_JP_081FD0D7: @ 0x081FD0D7
	.string "‘うみの　まめちしき　その1\n　なぜ　うみの　みずは　あおいの?’\p‘ひかりには　いくつもの　いろが　あって\n　ほとんどの　ひかりは　みずに　はいると\l　その　いろが　なくなって　いきます’\p‘けれど　あおい　ひかり　だけは\n　そのままの　いろで　のこる　ため\l　うみは　あおく　みえるのです’{EOS}"
EventText_JP_081FD16B: @ 0x081FD16B
	.string "‘うみの　まめちしき　その2\n　なぜ　うみの　みずは　しょっぱいの?’\p‘かいすい　には　いわから　にじみでた\p　しおの　もとに　なる\n　ナトリウムイオン　と　えんそイオン\l　という　ぶっしつが　おおく　ふくまれ\l　だから　なめると　しょっぱいのです’{EOS}"
EventText_JP_081FD1EA: @ 0x081FD1EA
	.string "‘うみの　まめちしき　その3\n　うみと　りくは　どちらが　ひろいの?’\p‘だいたい　うみが　70パーセントで\n　りくが　30パーセント　くらいです\p　りくちに　くらべて　うみは\n　その　2ばい　いじょうも　あるのです’{EOS}"
EventText_JP_081FD258: @ 0x081FD258
	.string "デコボコに　なみうった　かせきが　ある!\p‘うみの　そこに　たまった　つちには\n　かいすいが　ながれる　えいきょうで\l　なみの　ような　もようが　できます’\p‘それが　そのまま　かせきに　なったものを\n　リップルマークと　よんでいます’{EOS}"
EventText_JP_081FD2CF: @ 0x081FD2CF
	.string "まるい　ドームの　なかで　なんだか\nよく　わからない　きかいが　まわってる!\pなにかの　ふかさを　しらべるのかな?{EOS}"
	.byte 0x00
.globl EventScript_JP_081FD30A
EventScript_JP_081FD30A: @ 0x081FD30A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	loadword 0x00, EventText_JP_081FD597
	callstd 0x04
	closemessage
	playbgm 0x01A3, 0x01
	@ event command: addobject
	addobject 0x0003
	@ event command: applymovement
	applymovement 0x0003, LittlerootTown_MaysHouse_2F_Movement_WalkDown_WalkRight_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: addobject
	addobject 0x0004
	@ event command: applymovement
	applymovement 0x0004, LittlerootTown_MaysHouse_2F_Movement_WalkDown_2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0003, LittlerootTown_MaysHouse_2F_Movement_WalkDownX3_WalkRightX3
	@ event command: applymovement
	applymovement 0x0004, LittlerootTown_MaysHouse_2F_Movement_WalkDownX4_WalkRightX4
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x800C, 0x0001
	call_if 0x01, EventScript_JP_081FD49C
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_081FD49C
	loadword 0x00, EventText_JP_081FD5F3
	callstd 0x04
	compare_var_to_value 0x800C, 0x0004
	call_if 0x05, EventScript_JP_081FD4A7
	loadword 0x00, EventText_JP_081FD60B
	callstd 0x04
	loadword 0x00, EventText_JP_081FD61D
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0004, LittlerootTown_MaysHouse_2F_Movement_WalkRight_2
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x800C, 0x0001
	call_if 0x01, EventScript_JP_081FD4B2
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_081FD4BD
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0014, 0x0000, EventText_JP_081FD64E
	loadword 0x00, EventText_JP_081FD661
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0004, LittlerootTown_MaysHouse_2F_Movement_LockFacingDirection_WalkLeft_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0003, LittlerootTown_MaysHouse_2F_Movement_WalkRight_2
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081FD678
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0015, 0x0000, EventText_JP_081FD699
	@ event command: applymovement
	applymovement 0x0003, LittlerootTown_MaysHouse_2F_Movement_LockFacingDirection_WalkLeft_UnlockFacingDirection
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0003, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081FD6AC
	callstd 0x04
	closemessage
	delay 0x0023
	@ event command: addobject
	addobject 0x0002
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_WalkDownX5_WalkRightX4
	@ event command: applymovement
	applymovement 0x0004, LittlerootTown_MaysHouse_2F_Movement_Delay16X8_Delay8_WalkFastDown_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081FD6F5
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_WalkRight_1
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081FD72A
	callstd 0x04
	closemessage
	savebgm 0x0000
	fadedefaultbgm
	fadescreen 0x01
	@ event command: removeobject
	removeobject 0x0002
	@ event command: removeobject
	removeobject 0x0003
	@ event command: removeobject
	removeobject 0x0004
	fadescreen 0x00
	delay 0x001E
	setflag 0x0373
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081FD871
	callstd 0x04
	setvar 0x8004, 0x010D
	call 0x08243467
	loadword 0x00, EventText_JP_081FD8E0
	callstd 0x04
	closemessage
	fadescreen 0x01
	playfanfare 0x0170
	waitfanfare
	@ event command: special
	special HealPlayerParty
	@ event command: removeobject
	removeobject 0x0001
	setflag 0x0384
	compare_var_to_value 0x40DA, 0x0000
	call_if 0x01, EventScript_JP_081FD496
	setflag 0x0095
	clearflag 0x03B3
	setflag 0x03B5
	setvar 0x40D2, 0x0001
	fadescreen 0x00
	release
	end
EventScript_JP_081FD496: @ 0x081FD496
	setvar 0x40DA, 0x0001
	return
EventScript_JP_081FD49C: @ 0x081FD49C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081FD4A7: @ 0x081FD4A7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081FD4B2: @ 0x081FD4B2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkLeft_WalkDown_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081FD4BD: @ 0x081FD4BD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUp_WalkLeftX2_WalkDown_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
LittlerootTown_MaysHouse_2F_Movement_WalkLeft_WalkDown_WalkInPlaceFastestLeft: @ 0x081FD4C8
	@ object movement sequence
	walk_left
	walk_down
	walk_in_place_fastest_left
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUp_WalkLeftX2_WalkDown_WalkInPlaceFastestLeft: @ 0x081FD4CC
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_up
	walk_left
	walk_left
	walk_down
	walk_in_place_fastest_left
	step_end
	.globl LittlerootTown_MaysHouse_2F_Movement_WalkUp_WalkLeftX5_WalkUpX2_WalkLeftX2_WalkUpX2_Delay8
LittlerootTown_MaysHouse_2F_Movement_WalkUp_WalkLeftX5_WalkUpX2_WalkLeftX2_WalkUpX2_Delay8: @ 0x081FD4D2
	.byte 0x09, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x09, 0x09, 0x0A, 0x0A, 0x09, 0x09, 0x13, 0xFE
LittlerootTown_MaysHouse_2F_Movement_WalkRight_1: @ 0x081FD4E0
	@ object movement sequence
	walk_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX5_WalkRightX4: @ 0x081FD4E2
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkRight_2: @ 0x081FD4EC
	@ object movement sequence
	walk_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDown_WalkRight_WalkInPlaceFastestDown: @ 0x081FD4EE
	@ object movement sequence
	walk_down
	walk_right
	walk_in_place_fastest_down
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX3_WalkRightX3: @ 0x081FD4F2
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_LockFacingDirection_WalkLeft_UnlockFacingDirection: @ 0x081FD4F9
	@ object movement sequence
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDown_2: @ 0x081FD4FD
	@ object movement sequence
	walk_down
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkDownX4_WalkRightX4: @ 0x081FD4FF
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_Delay16X8_Delay8_WalkFastDown_WalkInPlaceFastestUp: @ 0x081FD508
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_8
	walk_fast_down
	walk_in_place_fastest_up
	step_end
.globl EventScript_JP_081FD514
EventScript_JP_081FD514: @ 0x081FD514
	loadword 0x00, EventText_JP_081FD9B0
	callstd 0x03
	end
.globl EventScript_JP_081FD51D
EventScript_JP_081FD51D: @ 0x081FD51D
	loadword 0x00, EventText_JP_081FD9F8
	callstd 0x03
	end
.globl EventScript_JP_081FD526
EventScript_JP_081FD526: @ 0x081FD526
	loadword 0x00, EventText_JP_081FDA3F
	callstd 0x03
	end
.globl EventScript_JP_081FD52F
EventScript_JP_081FD52F: @ 0x081FD52F
	loadword 0x00, EventText_JP_081FDAC0
	callstd 0x03
	end
.globl EventScript_JP_081FD538
EventScript_JP_081FD538: @ 0x081FD538
	loadword 0x00, EventText_JP_081FDAF8
	callstd 0x03
	end
.globl EventScript_JP_081FD541
EventScript_JP_081FD541: @ 0x081FD541
	loadword 0x00, EventText_JP_081FDB4B
	callstd 0x03
	end
.globl EventScript_JP_081FD54A
EventScript_JP_081FD54A: @ 0x081FD54A
	loadword 0x00, EventText_JP_081FDB95
	callstd 0x03
	end
.globl EventScript_JP_081FD553
EventScript_JP_081FD553: @ 0x081FD553
	loadword 0x00, EventText_JP_081FDBD1
	callstd 0x03
	end
.globl EventScript_JP_081FD55C
EventScript_JP_081FD55C: @ 0x081FD55C
	loadword 0x00, EventText_JP_081FDC0D
	callstd 0x03
	end
.globl EventScript_JP_081FD565
EventScript_JP_081FD565: @ 0x081FD565
	loadword 0x00, EventText_JP_081FDC3E
	callstd 0x03
	end
.globl EventScript_JP_081FD56E
EventScript_JP_081FD56E: @ 0x081FD56E
	loadword 0x00, EventText_JP_081FD94A
	callstd 0x02
	end
.globl EventScript_JP_081FD577
EventScript_JP_081FD577: @ 0x081FD577
	loadword 0x00, EventText_JP_081FD977
	callstd 0x02
	end
.globl EventScript_JP_081FD580
EventScript_JP_081FD580: @ 0x081FD580
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	loadword 0x00, EventText_JP_081FD997
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventText_JP_081FD597: @ 0x081FD597
	.string "はい?　クスノキは　わたし　だが……?\pおお!　それは　デボンの　ツワブキさんに\nたのんで　おいた　パーツだね!\pいやー　どうも　ごくろうさま!\nおかげで　しゅっぱつ　できそうだ……{EOS}"
EventText_JP_081FD5F3: @ 0x081FD5F3
	.string "へへへ　その　パーツ\nおれたちが　いただくぜ!{EOS}"
EventText_JP_081FD60B: @ 0x081FD60B
	.string "クスノキ“だ　だれだ　きみたちは!{EOS}"
EventText_JP_081FD61D: @ 0x081FD61D
	.string "おれたち　アクアだん!\pリーダーが　そのパーツを　ほしがってるんだ!\nなにも　いわずに　よこせ!{EOS}"
EventText_JP_081FD64E: @ 0x081FD64E
	.string "うわー!\nこどもに　やられちまった!{EOS}"
EventText_JP_081FD661: @ 0x081FD661
	.string "やばい……\nリーダーに　おこられちまうぞ……{EOS}"
EventText_JP_081FD678: @ 0x081FD678
	.string "ふん!　だらしない　やつめ!\nここは　おれに　まかせてもらうぜ!{EOS}"
EventText_JP_081FD699: @ 0x081FD699
	.string "なんだと!\nおれも　まけてしまった!{EOS}"
EventText_JP_081FD6AC: @ 0x081FD6AC
	.string "ど　どうしよう……\nパーツを　うばえないと　まずくないか?\pうむ……\nまさか　こどもに　じゃま　されるなんて\lこれっぽっちも　おもってなかったぜ{EOS}"
EventText_JP_081FD6F5: @ 0x081FD6F5
	.string "パーツを　うばうのに\nいつまで　かかっているのかと　おもえば\lこんな　こどもに　じゃま　されていたのか?{EOS}"
EventText_JP_081FD72A: @ 0x081FD72A
	.string "われわれは\nうみを　あいする　アクアだん!\pそして　おれは\nアクアだんの　リーダー　アオギリだ\pわれわれの　じゃまをする　おまえは……\nま　まさか!\lマグマだんの　なかま　なのか!?\pいや　それにしては\nみにつけている　ふくが　ちがうな\p……　……　……\n……　……　……\pポケモンも　ひとも　すべての　いのちは\nうみから　うまれた……\pだから　アクアだんは\nうみを　ふやそうと　しているのだよ\pどうだい?\nとても　すばらしい　ことだろう?\pまあ　いい……\nまだ　わかい　おまえに\lわれわれの　りそうなど　わかるまい……\pだが　このさきも　われわれの\nかつどうを　じゃまする　つもりなら\lただでは　すまさない　からな!\pそれだけは　おぼえて　おくのだ!{EOS}"
EventText_JP_081FD871: @ 0x081FD871
	.string "クスノキ“きみは……\nそうか　{PLAYER}{KUN}　というのか……\pいやあ　あぶない　ところ　だった!\nたすけてくれて　ありがとうよ!\pおっと　そうだった!\nデボンに　たのんでおいた　パーツを\lもってきて　くれたの　わすれていたよ!{EOS}"
EventText_JP_081FD8E0: @ 0x081FD8E0
	.string "クスノキ“おっと!\nこうしちゃ　いられない!\pそろそろ　かいてい　ちょうさに\nしゅっぱつ　する　じかんだ!\pわたしは　これで　しつれい　するけど\nきみは　ゆっくり　かんないを\lけんぶつ　していって　くれたまえ!{EOS}"
EventText_JP_081FD94A: @ 0x081FD94A
	.string "ふねの　もけいを　みておると\nムロの　ちかくに　ある\lすてられぶねを　おもいだすのう……{EOS}"
EventText_JP_081FD977: @ 0x081FD977
	.string "はくぶつかんの　なかを\nはしり　まわるんじゃ　ありませんよッ!{EOS}"
EventText_JP_081FD997: @ 0x081FD997
	.string "せんすいてい　かっこいー!\nおれも　のりてーよ!{EOS}"
EventText_JP_081FD9B0: @ 0x081FD9B0
	.string "‘すいしつ　サンプル　1’\nと　かかれた　ラベルが　はってある!\pうみは　みんな　つながって　いるのに\nちいきに　よって　すこし　ちがうらしい{EOS}"
EventText_JP_081FD9F8: @ 0x081FD9F8
	.string "‘すいしつ　サンプル　2’\nと　かかれた　ラベルが　はってある!\pちいきが　ちがえば　うみの　みずの\nしょっぱさも　ちがったり　するのかな?{EOS}"
EventText_JP_081FDA3F: @ 0x081FDA3F
	.string "ゴムで　できた　ボールが\nふくらんだり　しぼんだり　している!\p‘うみの　そこには　すいあつ　といって\n　みずじたいの　おもさが　かかります’\p‘あさい　ところでは　すいあつも　かるく\n　ふかい　ところでは　なんまんトン　もの\l　すいあつが　かかるのです’{EOS}"
EventText_JP_081FDAC0: @ 0x081FDAC0
	.string "‘ホウエン　ちほうの　もけい’\pホウエンちほう　ぜんたいの　ミニチュアだ!\nミシロタウンは　どのへん　だろう?{EOS}"
EventText_JP_081FDAF8: @ 0x081FDAF8
	.string "かいすいの　ながれに　ついての　てんじだ!\p‘うみの　そこに　ちかい　ところ　では\n　みずの　おんどや　えんぶんの　ちがいで\l　うみの　みずが　ながれて　いきます’{EOS}"
EventText_JP_081FDB4B: @ 0x081FDB4B
	.string "かいすいの　ながれに　ついての　てんじだ!\p‘うみの　ひょうめん　あたり　では\n　かぜの　ちからに　よって\l　うみの　みずが　ながれて　いきます’{EOS}"
EventText_JP_081FDB95: @ 0x081FDB95
	.string "‘れんらくせん　タイドリップごう’\pこれは　げんざい　クスノキ　ぞうせんじょで\nつくられている　ふねの　もけい　です!{EOS}"
EventText_JP_081FDBD1: @ 0x081FDBD1
	.string "‘せんすいてい　かいえん　1ごう’\pうみの　そこを　ちょうさ　するための\nこうせいのう　せんすいていの　もけい　です!{EOS}"
EventText_JP_081FDC0D: @ 0x081FDC0D
	.string "‘せんすい　ポッド’\pかいていで　さぎょうを　するための\nむじん　こがたポッドの　もけい　です!{EOS}"
EventText_JP_081FDC3E: @ 0x081FDC3E
	.string "‘サント·アンヌ　ごう’\pせかいを　いっしゅう　している\nごうか　きゃくせんの　もけい　です!{EOS}"
gMapScriptDispatch_SlateportCity_Harbor_OnTransition: @ 0x081FDC6E
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081FDC74
	.byte 0
EventScript_JP_081FDC74: @ 0x081FDC74
	@ event command: setescapewarp
	setescapewarp MAP_ID_SLATEPORT_CITY, 0xFF, 0x001C, 0x000D
	.byte 0x16, 0x01, 0x40, 0x00, 0x00, 0x21, 0xA0, 0x40, 0x01, 0x00, 0x07, 0x01, 0x9A, 0xDC, 0x1F, 0x08
	.byte 0x2B, 0x64, 0x08, 0x07, 0x01, 0x96, 0xDC, 0x1F, 0x08, 0x02, 0x2A, 0x5C, 0x03, 0x03, 0x34, 0xA3
	.byte 0x01, 0x63, 0x04, 0x00, 0x0C, 0x00, 0x0D, 0x00, 0x65, 0x04, 0x00, 0x09, 0x29, 0x89, 0x03, 0x03
.globl EventScript_JP_081FDCAC
EventScript_JP_081FDCAC: @ 0x081FDCAC
	lockall
	setvar 0x8008, 0x0000
	goto EventScript_JP_081FDCE6
	.byte 0x02
.globl EventScript_JP_081FDCB8
EventScript_JP_081FDCB8: @ 0x081FDCB8
	lockall
	setvar 0x8008, 0x0001
	goto EventScript_JP_081FDCE6
	.byte 0x02
.globl EventScript_JP_081FDCC4
EventScript_JP_081FDCC4: @ 0x081FDCC4
	lockall
	setvar 0x8008, 0x0002
	goto EventScript_JP_081FDCE6
	.byte 0x02
.globl EventScript_JP_081FDCD0
EventScript_JP_081FDCD0: @ 0x081FDCD0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x8008, 0x0003
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUp_1
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_081FDCE6
	.byte 0x02
EventScript_JP_081FDCE6: @ 0x081FDCE6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0007, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0006, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_081FE364
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0006, LittlerootTown_MaysHouse_2F_Movement_Delay16X2_JumpUp_SetInvisible
	@ event command: applymovement
	applymovement 0x0007, LittlerootTown_MaysHouse_2F_Movement_Delay16X2_JumpUp_SetInvisible
	@ event command: applymovement
	applymovement 0x0008, LittlerootTown_MaysHouse_2F_Movement_Delay16X4_WalkRightX3_WalkFastRightX6
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x0006
	@ event command: removeobject
	removeobject 0x0007
	@ event command: removeobject
	removeobject 0x0008
	setvar 0x40A0, 0x0002
	setflag 0x0061
	setflag 0x0313
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081FDD7A
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081FDD8F
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081FDDA4
	compare_var_to_value 0x8008, 0x0003
	call_if 0x01, EventScript_JP_081FDDA4
	loadword 0x00, EventText_JP_081FE3D4
	callstd 0x04
	closemessage
	setflag 0x0335
	setflag 0x0336
	moveobjectoffscreen 0x0004
	setobjectmovementtype 0x0004, 0x0A
	releaseall
	end
EventScript_JP_081FDD7A: @ 0x081FDD7A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0004, LittlerootTown_MaysHouse_2F_Movement_WalkLeftX4_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081FDD8F: @ 0x081FDD8F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0004, LittlerootTown_MaysHouse_2F_Movement_WalkLeftX2_WalkUp_WalkLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081FDDA4: @ 0x081FDDA4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0004, LittlerootTown_MaysHouse_2F_Movement_WalkLeftX3
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
LittlerootTown_MaysHouse_2F_Movement_Delay16X2_JumpUp_SetInvisible: @ 0x081FDDB9
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	delay_16
	delay_16
	jump_up
	set_invisible
	step_end
	.globl LittlerootTown_MaysHouse_2F_Movement_Delay16X2_JumpUp_SetInvisible_1
LittlerootTown_MaysHouse_2F_Movement_Delay16X2_JumpUp_SetInvisible_1: @ 0x081FDDBE
	.byte 0x14, 0x14, 0x43, 0x54, 0xFE
LittlerootTown_MaysHouse_2F_Movement_Delay16X4_WalkRightX3_WalkFastRightX6: @ 0x081FDDC3
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
	walk_right
	walk_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkLeftX4_WalkUp: @ 0x081FDDD1
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkLeftX2_WalkUp_WalkLeft: @ 0x081FDDD7
	@ object movement sequence
	walk_left
	walk_left
	walk_up
	walk_left
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkLeftX3: @ 0x081FDDDC
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUp_1: @ 0x081FDDE0
	@ object movement sequence
	walk_up
	step_end
.globl EventScript_JP_081FDDE2
EventScript_JP_081FDDE2: @ 0x081FDDE2
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_081FDDF7
	loadword 0x00, EventText_JP_081FE111
	callstd 0x04
	release
	end
EventScript_JP_081FDDF7: @ 0x081FDDF7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081FE13F
	callstd 0x04
	message EventText_JP_081FE19E
	waitmessage
	goto EventScript_JP_081FDE0B
	.byte 0x02
EventScript_JP_081FDE0B: @ 0x081FDE0B
	checkflag 0x01D0
	goto_if 0x01, EventScript_JP_081FDE41
	multichoicedefault 0x12, 0x08, 0x38, 0x02, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FDE83
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FDF1E
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081FDF1E
	end
EventScript_JP_081FDE41: @ 0x081FDE41
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	multichoicedefault 0x11, 0x06, 0x34, 0x02, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FDE83
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FDEAB
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081FDF1E
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081FDF1E
	end
	.byte 0x0F, 0x00, 0x62, 0xE1, 0x1F, 0x08, 0x09, 0x04, 0x6C, 0x02
EventScript_JP_081FDE83: @ 0x081FDE83
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081FE1DB
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FDECE
	setvar 0x40B4, 0x0001
	call EventScript_JP_081FDEDA
	@ event command: warp
	warp MAP_ID_SS_TIDAL_CORRIDOR, 0xFF, 0x0001, 0x000A
	.byte 0x27, 0x6C, 0x02
EventScript_JP_081FDEAB: @ 0x081FDEAB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081FE1E7
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FDECE
	call EventScript_JP_081FDEDA
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_OUTSIDE_WEST, 0xFF, 0x0013, 0x0043
	.byte 0x27, 0x6C, 0x02
EventScript_JP_081FDECE: @ 0x081FDECE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message EventText_JP_081FE20A
	waitmessage
	goto EventScript_JP_081FDE0B
	.byte 0x02
EventScript_JP_081FDEDA: @ 0x081FDEDA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081FE1F6
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x001E
	@ event command: hideobjectat
	hideobjectat 0x800F, MAP_ID_SLATEPORT_CITY_HARBOR
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081FDF33
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_081FDF28
	delay 0x001E
	@ event command: hideobjectat
	hideobjectat 0x00FF, MAP_ID_PETALBURG_CITY
	setvar 0x8004, 0x0005
	call 0x08243265
	return
EventScript_JP_081FDF1E: @ 0x081FDF1E
	loadword 0x00, EventText_JP_081FE1CD
	callstd 0x04
	release
	end
EventScript_JP_081FDF28: @ 0x081FDF28
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkRight_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081FDF33: @ 0x081FDF33
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkUp_2
	@ event command: waitmovement
	waitmovement 0x0000
	return
LittlerootTown_MaysHouse_2F_Movement_WalkRight_WalkInPlaceFastestUp: @ 0x081FDF3E
	@ object movement sequence
	walk_right
	walk_in_place_fastest_up
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkUp_2: @ 0x081FDF41
	@ object movement sequence
	walk_up
	step_end
.globl EventScript_JP_081FDF43
EventScript_JP_081FDF43: @ 0x081FDF43
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x00, EventScript_JP_081FDF7A
	setvar 0x8004, 0x0000
	checkflag 0x01BE
	call_if 0x01, EventScript_JP_081FDF84
	checkflag 0x01BF
	call_if 0x01, EventScript_JP_081FDF84
	compare_var_to_value 0x8004, 0x0002
	goto_if 0x01, EventScript_JP_081FDF7A
	loadword 0x00, EventText_JP_081FE249
	callstd 0x04
	release
	end
EventScript_JP_081FDF7A: @ 0x081FDF7A
	loadword 0x00, EventText_JP_081FE21A
	callstd 0x04
	release
	end
EventScript_JP_081FDF84: @ 0x081FDF84
	addvar 0x8004, 0x0001
	return
.globl EventScript_JP_081FDF8A
EventScript_JP_081FDF8A: @ 0x081FDF8A
	loadword 0x00, EventText_JP_081FE2D6
	callstd 0x02
	end
.globl EventScript_JP_081FDF93
EventScript_JP_081FDF93: @ 0x081FDF93
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x086D
	goto_if 0x01, EventScript_JP_081FDFF1
	checkflag 0x010F
	goto_if 0x01, EventScript_JP_081FDFE7
	checkflag 0x0070
	goto_if 0x01, EventScript_JP_081FDFDA
	compare_var_to_value 0x40A0, 0x0002
	goto_if 0x01, EventScript_JP_081FDFD0
	loadword 0x00, EventText_JP_081FE335
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_081FDFD0: @ 0x081FDFD0
	loadword 0x00, EventText_JP_081FE3D4
	callstd 0x04
	release
	end
EventScript_JP_081FDFDA: @ 0x081FDFDA
	setflag 0x010F
	loadword 0x00, EventText_JP_081FE44D
	callstd 0x04
	release
	end
EventScript_JP_081FDFE7: @ 0x081FDFE7
	loadword 0x00, EventText_JP_081FE518
	callstd 0x04
	release
	end
EventScript_JP_081FDFF1: @ 0x081FDFF1
	compare_var_to_value 0x4001, 0x0001
	goto_if 0x01, EventScript_JP_081FE102
	checkitem 0x0116, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FE029
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_081FE01F
	loadword 0x00, EventText_JP_081FE59B
	callstd 0x04
	release
	end
EventScript_JP_081FE01F: @ 0x081FE01F
	loadword 0x00, EventText_JP_081FE5E2
	callstd 0x04
	release
	end
EventScript_JP_081FE029: @ 0x081FE029
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message EventText_JP_081FE638
	waitmessage
	goto EventScript_JP_081FE035
	.byte 0x02
EventScript_JP_081FE035: @ 0x081FE035
	multichoice 0x00, 0x00, 0x2E, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FE06C
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FE0AC
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081FE0EC
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081FE0EC
	end
EventScript_JP_081FE06C: @ 0x081FE06C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081FE6F9
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FE0F6
	setorcopyvar 0x8000, 0x00C0
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	takeitem 0x0116, 0x0001
	loadword 0x00, EventText_JP_081FE735
	callstd 0x04
	setflag 0x0126
	goto EventScript_JP_081FE102
	.byte 0x02
EventScript_JP_081FE0AC: @ 0x081FE0AC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081FE70E
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FE0F6
	setorcopyvar 0x8000, 0x00C1
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	takeitem 0x0116, 0x0001
	loadword 0x00, EventText_JP_081FE735
	callstd 0x04
	setflag 0x0126
	goto EventScript_JP_081FE102
	.byte 0x02
EventScript_JP_081FE0EC: @ 0x081FE0EC
	loadword 0x00, EventText_JP_081FE6A7
	callstd 0x04
	release
	end
EventScript_JP_081FE0F6: @ 0x081FE0F6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message EventText_JP_081FE724
	waitmessage
	goto EventScript_JP_081FE035
	.byte 0x02
EventScript_JP_081FE102: @ 0x081FE102
	setvar 0x4001, 0x0001
	loadword 0x00, EventText_JP_081FE750
	callstd 0x04
	release
	end
EventText_JP_081FE111: @ 0x081FE111
	.string "えっ?　ふね　ですか?\pもうしわけ　ございません　げんざい\nれんらくせんは　ないんです……{EOS}"
EventText_JP_081FE13F: @ 0x081FE13F
	.string "れんらくせんを　ごりよう　ですね!\nチケットは　おもち　でしょうか?{EOS}"
EventText_JP_081FE162: @ 0x081FE162
	.string "{PLAYER}は\nチケットを　もっていない!\p……もうしわけ　ありません!\pふねに　のれるのは\nチケットの　ある　かた　だけです{EOS}"
EventText_JP_081FE19E: @ 0x081FE19E
	.string "{PLAYER}は\nふねのチケットを　みせた!\pはい!　けっこう　です!\pいきさきは　どちら　でしょう?{EOS}"
EventText_JP_081FE1CD: @ 0x081FE1CD
	.string "また　ごりよう　ください!{EOS}"
EventText_JP_081FE1DB: @ 0x081FE1DB
	.string "ミナモシティ　ですね!{EOS}"
EventText_JP_081FE1E7: @ 0x081FE1E7
	.string "バトルフロンティア　ですね!{EOS}"
EventText_JP_081FE1F6: @ 0x081FE1F6
	.string "れんらくせんに　のって　おまちください{EOS}"
EventText_JP_081FE20A: @ 0x081FE20A
	.string "いきさきは　どちら　でしょう?{EOS}"
EventText_JP_081FE21A: @ 0x081FE21A
	.string "うみの　そこ　かあ……\nいったい　どんなふう　なのかな?\pおれも　いつか　もぐってみたいぜ!{EOS}"
EventText_JP_081FE249: @ 0x081FE249
	.string "ふねを　あんぜんに　すすめる　ためには\nてんきを　りかいする　ひつようが　ある!\pそういえば　てんきけんきゅうじょの\nひとが　いってたけど\pさいきん　かくちで　いじょうきしょうが\nかんそく　されている　らしいな!\pきみも　けんきゅうじょに　いって\nはなしを　きいてみると　いいぞ!{EOS}"
EventText_JP_081FE2D6: @ 0x081FE2D6
	.string "ぼくも　クスノキ　かんちょうと　いっしょに\nかいてい　ちょうさに　いきたかった!\pでも　せんすいていの　なかは　せまいから\nぼくが　のったら　かんちょうが\lのれなく　なっちゃうんだよね……{EOS}"
EventText_JP_081FE335: @ 0x081FE335
	.string "クスノキ“あいつらは……\pいぜん　はくぶつかんで\nデボンのにもつを　うばおうと　していた……{EOS}"
EventText_JP_081FE364: @ 0x081FE364
	.string "アオギリ“おや?　また　きみか……\pわざわざ　ここまで　おいかけて　くるとは\nごくろうな　ことだな……\pだが　もう　だれにも\nわれわれを　とめられない\pとめられると　おもうなら\nミナモの　アジトまで　くるかね?\lフフフ……{EOS}"
EventText_JP_081FE3D4: @ 0x081FE3D4
	.string "クスノキ“なぜ……\pアクアだんの　れんちゅうが\nわたしの　せんすいてい\l‘かいえん　1ごう’を　うばうのだろう?\pまさか　かれらも\nかいていに　ねむる　ポケモンを……\pだが　わたしが　おいかけても\nあんな　れんちゅうに　かてる　わけない……{EOS}"
EventText_JP_081FE44D: @ 0x081FE44D
	.string "クスノキ“ああ　{PLAYER}{KUN}……\pそうか……　アクアだんは\nしゅっぱつ　して　しまったか……\pいや　きにしなくて　いいよ\nきみの　せきにん　では　ないからね\pせんすいていを　おいかけるのは\nふつうの　ひとには　むりな　はなし　だよ\pポケモンに　ダイビング　といって\nうみに　もぐれる　わざを　おしえないと……\pトクサネに　いけば\nダイビングを　する　ひとが　おおいから\lおしえて　もらえるかも　しれないけどね{EOS}"
EventText_JP_081FE518: @ 0x081FE518
	.string "クスノキ“せんすいていを　おいかけるのは\nふつうの　ひとには　むりな　はなし　だよ\pポケモンに　ダイビング　といって\nうみに　もぐれる　わざを　おしえないと……\pトクサネに　いけば\nダイビングを　する　ひとが　おおいから\lおしえて　もらえるかも　しれないけどね{EOS}"
EventText_JP_081FE59B: @ 0x081FE59B
	.string "クスノキ“そうだ!　ハギろうじんが\nぞうせんじょに　きてくれたんだ!\pよーし!　これで　れんらくせんが\nかんせい　するのも　もうすぐ　だぞ!{EOS}"
EventText_JP_081FE5E2: @ 0x081FE5E2
	.string "クスノキ“{PLAYER}{KUN}!\pれんらくせん　タイドリップごうが\nついに　かんせい　したんだ!\pきみの　しりあいの　ハギろうじんが\nてつだって　くれたからだよ\pぜひ　のってみてよ!{EOS}"
EventText_JP_081FE638: @ 0x081FE638
	.string "クスノキ“おや?\n{PLAYER}{KUN}が　もってる　それは……\pたんちき　だね!\nそれがあると　ちょうさが　はかどりそうだ\p{PLAYER}{KUN}!　ぼくの　もってる\nしんかいのキバか　しんかいのウロコと\lたんちきを　こうかん　してくれないかな?{EOS}"
EventText_JP_081FE6A7: @ 0x081FE6A7
	.string "クスノキ“そうかい?\n{PLAYER}{KUN}が　もっていても\lつかいみちが　ないと　おもうけどな……\pまあ　いいや\nたんちきを　こうかん　したくなったら\lまた　はなしかけてよ!{EOS}"
EventText_JP_081FE6F9: @ 0x081FE6F9
	.string "クスノキ“しんかいのキバが　いいんだね?{EOS}"
EventText_JP_081FE70E: @ 0x081FE70E
	.string "クスノキ“しんかいのウロコに　するんだね?{EOS}"
EventText_JP_081FE724: @ 0x081FE724
	.string "クスノキ“どっちに　するんだい?{EOS}"
EventText_JP_081FE735: @ 0x081FE735
	.string "{PLAYER}は　クスノキかんちょうに\nたんちきを　わたした!{EOS}"
EventText_JP_081FE750: @ 0x081FE750
	.string "クスノキ“{PLAYER}{KUN}　ありがとう!\nこれで　けんきゅうが　はかどるよ{EOS}"
	.byte 0x00
.globl EventScript_JP_081FE773
EventScript_JP_081FE773: @ 0x081FE773
	loadword 0x00, EventText_JP_081FE785
	callstd 0x02
	end
.globl EventScript_JP_081FE77C
EventScript_JP_081FE77C: @ 0x081FE77C
	loadword 0x00, EventText_JP_081FE7D4
	callstd 0x02
	end
EventText_JP_081FE785: @ 0x081FE785
	.string "わたしの　ポケモン　せっかちでね\nほかの　ポケモンと　くらべると\lすばやさが　たかいんだわ\pせいかくで　そだちやすい　のうりょくに\nちがいが　あるのかもな?{EOS}"
EventText_JP_081FE7D4: @ 0x081FE7D4
	.string "あなた　ポケモントレーナーね\nカイナシティに　きた　っていうことは\lとうぜん　バトルテントに　いくのね!{EOS}"
gMapScriptDispatch_SlateportCity_PokemonCenter_1F_OnTransition_OnResume: @ 0x081FE809
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081FE814
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_081FE814: @ 0x081FE814
	setrespawn 0x0004
	call 0x08242978
	end
.globl EventScript_JP_081FE81D
EventScript_JP_081FE81D: @ 0x081FE81D
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_081FE82B
EventScript_JP_081FE82B: @ 0x081FE82B
	loadword 0x00, EventText_JP_081FE83D
	callstd 0x02
	end
.globl EventScript_JP_081FE834
EventScript_JP_081FE834: @ 0x081FE834
	loadword 0x00, EventText_JP_081FE89A
	callstd 0x02
	end
EventText_JP_081FE83D: @ 0x081FE83D
	.string "しょうぶの　コツ……\pいろんな　ポケモンを\nバランスよく　そだてることじゃ　ないか?\pいっぴきだけ　つよくても\nにがてな　ポケモンに　であってしまうと\lても　あしも　でなくなりそうだぜ{EOS}"
EventText_JP_081FE89A: @ 0x081FE89A
	.string "ともだちと　ポケモンこうかん　するでしょ\pポケモンが　どうぐを　もっていると\n2ばい　うれしく　なるよねー!!{EOS}"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
.globl EventScript_JP_081FE8FA
EventScript_JP_081FE8FA: @ 0x081FE8FA
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x081FE914
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x04, 0x00, 0x03, 0x00, 0x0D, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x55
	.byte 0x00, 0x56, 0x00, 0x7A, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_081FE92A
EventScript_JP_081FE92A: @ 0x081FE92A
	loadword 0x00, EventText_JP_081FE93C
	callstd 0x02
	end
.globl EventScript_JP_081FE933
EventScript_JP_081FE933: @ 0x081FE933
	loadword 0x00, EventText_JP_081FE97B
	callstd 0x02
	end
EventText_JP_081FE93C: @ 0x081FE93C
	.string "たしかに　いちば　には\nいろんな　ほりだしものが　ある\pだが　フレンドリィショップ　じゃないと\nかえない　ものも　あるからな{EOS}"
EventText_JP_081FE97B: @ 0x081FE97B
	.string "スーパーボールは　モンスターボールよりも\nポケモンを　つかまえやすい!\pこれなら　あの　てごわい　ポケモンも……{EOS}"
gMapScriptDispatch_MauvilleCity_Gym_OnLoad: @ 0x081FE9B4
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_081FE9BA
	.byte 0
EventScript_JP_081FE9BA: @ 0x081FE9BA
	checkflag 0x04F2
	goto_if 0x01, EventScript_JP_081FEB2D
	copyvar 0x8000, 0x4093
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FEA00
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FEAF5
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081FEB03
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081FEB11
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081FEB1F
	end
EventScript_JP_081FEA00: @ 0x081FEA00
	checkflag 0x0063
	goto_if 0x01, EventScript_JP_081FEA0A
	end
EventScript_JP_081FEA0A: @ 0x081FEA0A
	setmetatile 0x0003, 0x000B, 0x0241, 0x0001
	setmetatile 0x0003, 0x000C, 0x0249, 0x0001
	setmetatile 0x0003, 0x000D, 0x0250, 0x0001
	setmetatile 0x0004, 0x000A, 0x0222, 0x0000
	setmetatile 0x0005, 0x000A, 0x0223, 0x0000
	setmetatile 0x0004, 0x000B, 0x022A, 0x0001
	setmetatile 0x0005, 0x000B, 0x022B, 0x0001
	setmetatile 0x0007, 0x000A, 0x0222, 0x0000
	setmetatile 0x0008, 0x000A, 0x0223, 0x0000
	setmetatile 0x0007, 0x000B, 0x022A, 0x0001
	setmetatile 0x0008, 0x000B, 0x022B, 0x0001
	setmetatile 0x0004, 0x000D, 0x0230, 0x0000
	setmetatile 0x0005, 0x000D, 0x0231, 0x0000
	setmetatile 0x0004, 0x000E, 0x0238, 0x0000
	setmetatile 0x0005, 0x000E, 0x0239, 0x0000
	setmetatile 0x0001, 0x000A, 0x0230, 0x0000
	setmetatile 0x0002, 0x000A, 0x0231, 0x0000
	setmetatile 0x0001, 0x000B, 0x0238, 0x0000
	setmetatile 0x0002, 0x000B, 0x0239, 0x0000
	setmetatile 0x0006, 0x0008, 0x0242, 0x0001
	setmetatile 0x0006, 0x0009, 0x021A, 0x0000
	setmetatile 0x0006, 0x000A, 0x0251, 0x0000
	setmetatile 0x0004, 0x0006, 0x0230, 0x0000
	setmetatile 0x0005, 0x0006, 0x0231, 0x0000
	setmetatile 0x0004, 0x0007, 0x0238, 0x0000
	setmetatile 0x0005, 0x0007, 0x0239, 0x0000
	end
EventScript_JP_081FEAF5: @ 0x081FEAF5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	@ event command: special
	special MauvilleGymSpecial1
	goto EventScript_JP_081FEA00
	.byte 0x02
EventScript_JP_081FEB03: @ 0x081FEB03
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	@ event command: special
	special MauvilleGymSpecial1
	goto EventScript_JP_081FEA00
	.byte 0x02
EventScript_JP_081FEB11: @ 0x081FEB11
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	@ event command: special
	special MauvilleGymSpecial1
	goto EventScript_JP_081FEA00
	.byte 0x02
EventScript_JP_081FEB1F: @ 0x081FEB1F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0003
	@ event command: special
	special MauvilleGymSpecial1
	goto EventScript_JP_081FEA00
	.byte 0x02
EventScript_JP_081FEB2D: @ 0x081FEB2D
	@ event command: special
	special MauvilleGymSpecial3
	end
.globl EventScript_JP_081FEB31
EventScript_JP_081FEB31: @ 0x081FEB31
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, 0x010B, 0x0000, EventText_JP_081FF064, EventText_JP_081FF130, EventScript_JP_081FEB71
	specialvar_ 0x800D, 0x0039
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FEC24
	checkflag 0x00A7
	goto_if 0x00, EventScript_JP_081FEBD3
	compare_var_to_value 0x40BA, 0x0002
	goto_if 0x01, EventScript_JP_081FEC1A
	loadword 0x00, EventText_JP_081FF240
	callstd 0x04
	release
	end
EventScript_JP_081FEB71: @ 0x081FEB71
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message EventText_JP_081FF165
	waitmessage
	call 0x0824310A
	loadword 0x00, EventText_JP_081FF17F
	callstd 0x04
	setvar 0x40D2, 0x0003
	clearflag 0x02FE
	setflag 0x04F2
	setflag 0x0869
	addvar 0x4085, 0x0001
	compare_var_to_value 0x4085, 0x0006
	call_if 0x01, 0x08242F10
	setvar 0x8008, 0x0003
	call 0x08242FCF
	@ event command: special
	special MauvilleGymSpecial3
	@ event command: special
	special DrawWholeMapView
	playse 0x002C
	call EventScript_JP_081FEBF7
	closemessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, EventText_JP_081FF224
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x01D5
	release
	end
EventScript_JP_081FEBD3: @ 0x081FEBD3
	setorcopyvar 0x8000, 0x0142
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	loadword 0x00, EventText_JP_081FF1DF
	callstd 0x04
	setflag 0x00A7
	release
	end
EventScript_JP_081FEBF7: @ 0x081FEBF7
	setorcopyvar 0x8000, 0x0142
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430EA
	loadword 0x00, EventText_JP_081FF1DF
	callstd 0x04
	setflag 0x00A7
	return
EventScript_JP_081FEC1A: @ 0x081FEC1A
	loadword 0x00, EventText_JP_081FF265
	callstd 0x04
	release
	end
EventScript_JP_081FEC24: @ 0x081FEC24
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, 0x010B, 0x0000, EventText_JP_081FF2B5, EventText_JP_081FF310, EventText_JP_081FF36A
	loadword 0x00, EventText_JP_081FF320
	callstd 0x06
	end
.globl EventScript_JP_081FEC3F
EventScript_JP_081FEC3F: @ 0x081FEC3F
	lockall
	checkflag 0x04F2
	goto_if 0x01, EventScript_JP_081FECF3
	compare_var_to_value 0x4093, 0x0001
	goto_if 0x01, EventScript_JP_081FECF3
	setvar 0x4093, 0x0001
	setvar 0x8004, 0x0000
	goto EventScript_JP_081FECD3
	.byte 0x02
.globl EventScript_JP_081FEC64
EventScript_JP_081FEC64: @ 0x081FEC64
	lockall
	checkflag 0x04F2
	goto_if 0x01, EventScript_JP_081FECF3
	compare_var_to_value 0x4093, 0x0002
	goto_if 0x01, EventScript_JP_081FECF3
	setvar 0x4093, 0x0002
	setvar 0x8004, 0x0001
	goto EventScript_JP_081FECD3
	.byte 0x02
.globl EventScript_JP_081FEC89
EventScript_JP_081FEC89: @ 0x081FEC89
	lockall
	checkflag 0x04F2
	goto_if 0x01, EventScript_JP_081FECF3
	compare_var_to_value 0x4093, 0x0003
	goto_if 0x01, EventScript_JP_081FECF3
	setvar 0x4093, 0x0003
	setvar 0x8004, 0x0002
	goto EventScript_JP_081FECD3
	.byte 0x02
.globl EventScript_JP_081FECAE
EventScript_JP_081FECAE: @ 0x081FECAE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x04F2
	goto_if 0x01, EventScript_JP_081FECF3
	compare_var_to_value 0x4093, 0x0004
	goto_if 0x01, EventScript_JP_081FECF3
	setvar 0x4093, 0x0004
	setvar 0x8004, 0x0003
	goto EventScript_JP_081FECD3
	.byte 0x02
EventScript_JP_081FECD3: @ 0x081FECD3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special MauvilleGymSpecial2
	@ event command: special
	special MauvilleGymSpecial1
	@ event command: special
	special DrawWholeMapView
	playse 0x002C
	checkflag 0x0063
	goto_if 0x01, EventScript_JP_081FECFA
	checkflag 0x0063
	goto_if 0x00, EventScript_JP_081FECF5
	releaseall
	end
EventScript_JP_081FECF3: @ 0x081FECF3
	releaseall
	end
EventScript_JP_081FECF5: @ 0x081FECF5
	setflag 0x0063
	releaseall
	end
EventScript_JP_081FECFA: @ 0x081FECFA
	clearflag 0x0063
	releaseall
	end
.globl EventScript_JP_081FECFF
EventScript_JP_081FECFF: @ 0x081FECFF
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x00BF, 0x0000, EventText_JP_081FEE8A, EventText_JP_081FEEAB
	loadword 0x00, EventText_JP_081FEEBC
	callstd 0x06
	end
.globl EventScript_JP_081FED16
EventScript_JP_081FED16: @ 0x081FED16
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x00C2, 0x0000, EventText_JP_081FEED6, EventText_JP_081FEF00
	loadword 0x00, EventText_JP_081FEF0D
	callstd 0x06
	end
.globl EventScript_JP_081FED2D
EventScript_JP_081FED2D: @ 0x081FED2D
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0143, 0x0000, EventText_JP_081FEF48, EventText_JP_081FEF63
	loadword 0x00, EventText_JP_081FEF70
	callstd 0x06
	end
.globl EventScript_JP_081FED44
EventScript_JP_081FED44: @ 0x081FED44
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0289, 0x0000, EventText_JP_081FEF99, EventText_JP_081FEFB8
	loadword 0x00, EventText_JP_081FEFC9
	callstd 0x06
	end
.globl EventScript_JP_081FED5B
EventScript_JP_081FED5B: @ 0x081FED5B
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0322, 0x0000, EventText_JP_081FF019, EventText_JP_081FF02D
	loadword 0x00, EventText_JP_081FF03D
	callstd 0x06
	end
.globl EventScript_JP_081FED72
EventScript_JP_081FED72: @ 0x081FED72
	lock
	faceplayer
	checkflag 0x04F2
	goto_if 0x01, EventScript_JP_081FED87
	loadword 0x00, EventText_JP_081FEDC5
	callstd 0x04
	release
	end
EventScript_JP_081FED87: @ 0x081FED87
	loadword 0x00, EventText_JP_081FEE65
	callstd 0x04
	release
	end
.globl EventScript_JP_081FED91
EventScript_JP_081FED91: @ 0x081FED91
	lockall
	checkflag 0x0869
	goto_if 0x01, EventScript_JP_081FEDB1
	goto EventScript_JP_081FEDBB
	.byte 0x02
.globl EventScript_JP_081FEDA1
EventScript_JP_081FEDA1: @ 0x081FEDA1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x0869
	goto_if 0x01, EventScript_JP_081FEDB1
	goto EventScript_JP_081FEDBB
	.byte 0x02
EventScript_JP_081FEDB1: @ 0x081FEDB1
	loadword 0x00, EventText_JP_081FF292
	callstd 0x04
	releaseall
	end
EventScript_JP_081FEDBB: @ 0x081FEDBB
	loadword 0x00, EventText_JP_081FF283
	callstd 0x04
	releaseall
	end
EventText_JP_081FEDC5: @ 0x081FEDC5
	.string "げんき　しとぉや!!\nチャンピオンを　めざす　{PLAYER}!!\pキンセツシティの　ジムリーダー　テッセンは\nでんきタイプ　ポケモンの　つかいてだ!\pみずタイプの　ポケモンで　むかうと\nビリビリ　しびれさせられるぞ!\pしかも　スイッチで　あけたり　する\nけったいな　とびらを\lジムに　つくって　しまったんだ!\pきばってこー　な!{EOS}"
EventText_JP_081FEE65: @ 0x081FEE65
	.string "こりゃ　びっくり　たまげたッ!\nきみの　おかげで　とびらは　ひらかれた!{EOS}"
EventText_JP_081FEE8A: @ 0x081FEE8A
	.string "しびれる　オレの　ハートが\nきみの　やぼうを　ふんさい　するっ!{EOS}"
EventText_JP_081FEEAB: @ 0x081FEEAB
	.string "しびれる　たたかい　だったぜ……{EOS}"
EventText_JP_081FEEBC: @ 0x081FEEBC
	.string "ポケモンも　ロックも　ハートが　すべて\nいぇーい!{EOS}"
EventText_JP_081FEED6: @ 0x081FEED6
	.string "テッセンさんに　きたえられた　この　オレが\nそう　かんたんに　まける　はずがねえ!{EOS}"
EventText_JP_081FEF00: @ 0x081FEF00
	.string "キュ　キュイィィィン……{EOS}"
EventText_JP_081FEF0D: @ 0x081FEF0D
	.string "このジムの　リーダー　テッセンさんは\nきみの　おやじが　うまれる　まえから\lポケモンと　たたかってきた　つわものさ!{EOS}"
EventText_JP_081FEF48: @ 0x081FEF48
	.string "この　ポケモンジムは\nしかけが　あって　たのしいな!{EOS}"
EventText_JP_081FEF63: @ 0x081FEF63
	.string "まけると　たのしくないよ{EOS}"
EventText_JP_081FEF70: @ 0x081FEF70
	.string "テッセンさんは　スイッチを　つかった\nしかけを　つくるのが　しゅみ　なんだって!{EOS}"
EventText_JP_081FEF99: @ 0x081FEF99
	.string "あたしの　みりょくと\nポケモンの　わざで　しびれさせちゃう!{EOS}"
EventText_JP_081FEFB8: @ 0x081FEFB8
	.string "あなたの　つよさに　しびれたわ!{EOS}"
EventText_JP_081FEFC9: @ 0x081FEFC9
	.string "この　キンセツシティは\nテッセンさんが　つくったって　はなし\pあなたや　わたしが\nうまれる　まえからの　トレーナーだもの\lきっと　いろんな　ことを　しってるわ{EOS}"
EventText_JP_081FF019: @ 0x081FF019
	.string "ぼく　ひかるもの　だーいすき　なんだ!{EOS}"
EventText_JP_081FF02D: @ 0x081FF02D
	.string "ああ…\nめのまえが　チカ　チカ{EOS}"
EventText_JP_081FF03D: @ 0x081FF03D
	.string "キンセツジムも　テッセンさんの　おデコも\nピカピカ　ひかってて　うれしいな!{EOS}"
EventText_JP_081FF064: @ 0x081FF064
	.string "まちを　かいぞうする　けいかくは\nあきらめた　わし　じゃが\pいまは　このジムの　とびらの　しかけを\nつくることに　うちこんで　おるのじゃ!\p……あれ?　おまえさん\nなんで　わしの　まえに　いるんじゃ?\pなにー!　とびらの　しかけを\nくぐりぬけて　きたと　いうのかっ!\pわっはははは!　こりゃ　おもしろい!\pならば　この　キンセツ　ポケモン　ジムの\nリーダー　テッセンが\lポケモンで　しびれさせて　やるぞい!{EOS}"
EventText_JP_081FF130: @ 0x081FF130
	.string "わっはははは!　わしの　まけじゃ!\nおまえさんには　しびれた　わい\lこの　バッジ　もっていくが　いいぞ!{EOS}"
EventText_JP_081FF165: @ 0x081FF165
	.string "{PLAYER}は　テッセンから\nダイナモバッジを　もらった!{EOS}"
EventText_JP_081FF17F: @ 0x081FF17F
	.string "ダイナモバッジを　もっておると\nひでんの　いわくだきが\lつかえるように　なるんじゃ!\pそれに　おまえさんの　ポケモン\nいっそう　すばやく　なるぞい!\pうむ……\nこれも　もっていくが　いいぞ!{EOS}"
EventText_JP_081FF1DF: @ 0x081FF1DF
	.string "その　わざマシン34　には\nでんげきは　が　はいっておる!\pかならず　めいちゅう　する\nたのもしい　わざ　なんじゃよ!\p……　……　……{EOS}"
EventText_JP_081FF224: @ 0x081FF224
	.string "ジムリーダー　テッセンを\nポケナビに　とうろく　した!{EOS}"
EventText_JP_081FF240: @ 0x081FF240
	.string "みどころの　ある　わかものの　しゅつげん\nじつに　たのもしい　ことじゃ!{EOS}"
EventText_JP_081FF265: @ 0x081FF265
	.string "わっはははは!\nわかものよ　もっともっと　がんばるんじゃ!{EOS}"
EventText_JP_081FF283: @ 0x081FF283
	.string "キンセツシティ　ポケモンジム{EOS}"
EventText_JP_081FF292: @ 0x081FF292
	.string "キンセツシティ　ポケモンジム\pテッセン　にんてい　トレーナー!\n{PLAYER}{EOS}"
EventText_JP_081FF2B5: @ 0x081FF2B5
	.string "テッセン“おーっと　あらわれたな!\nわかっとる!　わしと　ポケモンの\lしょうぶを　したいんじゃろう!?\pわっはははは!\pひばな　バチバチ　いわせて　やるから\nかくご　するんじゃぞ!{EOS}"
EventText_JP_081FF310: @ 0x081FF310
	.string "ふぅ　バッテリーぎれ　じゃ……{EOS}"
EventText_JP_081FF320: @ 0x081FF320
	.string "テッセン“わしゃ　じゅうでんの　しなおしだ\pたいせいを　たてなおしたら\nまた　きみの　ちょうせんを　うけるから\lしばらく　してから　きておくれ……{EOS}"
EventText_JP_081FF36A: @ 0x081FF36A
	.string "テッセン“おーっと　あらわれたな!\nわかっとる!　わしと　ポケモンの\lしょうぶを　したいんじゃろう!?\pわっはははは!\p……ありゃ?　たたかえる　ポケモンを\n1ひきしか　もっておらん　ようだな\pすまんが　2ひき　いじょうの\nポケモンを　もって　きておくれ!{EOS}"
	.byte 0x00
.globl EventScript_JP_081FF3EC
EventScript_JP_081FF3EC: @ 0x081FF3EC
	lock
	faceplayer
	checkflag 0x005A
	goto_if 0x01, EventScript_JP_081FF4C4
	checkflag 0x0059
	goto_if 0x01, EventScript_JP_081FF427
	loadword 0x00, EventText_JP_081FF652
	callstd 0x04
	loadword 0x00, EventText_JP_081FF69F
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FF47A
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FF46D
	end
EventScript_JP_081FF427: @ 0x081FF427
	loadword 0x00, EventText_JP_081FF69F
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FF47A
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FF46D
	end
EventScript_JP_081FF446: @ 0x081FF446
	message EventText_JP_081FF6FB
	waitmessage
	multichoice 0x15, 0x08, 0x0C, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FF483
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FF49D
	end
EventScript_JP_081FF46D: @ 0x081FF46D
	setflag 0x0059
	loadword 0x00, EventText_JP_081FF6D5
	callstd 0x04
	release
	end
EventScript_JP_081FF47A: @ 0x081FF47A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setflag 0x005A
	goto EventScript_JP_081FF446
	.byte 0x02
EventScript_JP_081FF483: @ 0x081FF483
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081FF82C
	callstd 0x04
	setorcopyvar 0x8000, 0x0103
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	goto EventScript_JP_081FF4B7
	.byte 0x02
EventScript_JP_081FF49D: @ 0x081FF49D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081FF840
	callstd 0x04
	setorcopyvar 0x8000, 0x0110
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	goto EventScript_JP_081FF4B7
	.byte 0x02
EventScript_JP_081FF4B7: @ 0x081FF4B7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_081FF854
	callstd 0x04
	@ event command: special
	special SwapRegisteredBike
	release
	end
EventScript_JP_081FF4C4: @ 0x081FF4C4
	loadword 0x00, EventText_JP_081FF88B
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FF4E3
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FF515
	end
EventScript_JP_081FF4E3: @ 0x081FF4E3
	loadword 0x00, EventText_JP_081FF8B2
	callstd 0x04
	checkitem 0x0110, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FF51F
	checkitem 0x0103, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081FF540
	loadword 0x00, EventText_JP_081FF93A
	callstd 0x04
	release
	end
EventScript_JP_081FF515: @ 0x081FF515
	loadword 0x00, EventText_JP_081FF91D
	callstd 0x04
	release
	end
EventScript_JP_081FF51F: @ 0x081FF51F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	incrementgamestat 0x04
	loadword 0x00, EventText_JP_081FF8FC
	callstd 0x04
	takeitem 0x0110, 0x0001
	setorcopyvar 0x8000, 0x0103
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	goto EventScript_JP_081FF4B7
	.byte 0x02
EventScript_JP_081FF540: @ 0x081FF540
	incrementgamestat 0x04
	loadword 0x00, EventText_JP_081FF8DB
	callstd 0x04
	takeitem 0x0103, 0x0001
	setorcopyvar 0x8000, 0x0110
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	goto EventScript_JP_081FF4B7
	.byte 0x02
.globl EventScript_JP_081FF561
EventScript_JP_081FF561: @ 0x081FF561
	loadword 0x00, EventText_JP_081FF9AB
	callstd 0x02
	end
.globl EventScript_JP_081FF56A
EventScript_JP_081FF56A: @ 0x081FF56A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message EventText_JP_081FFA13
	waitmessage
	goto EventScript_JP_081FF576
	.byte 0x02
EventScript_JP_081FF576: @ 0x081FF576
	multichoice 0x00, 0x00, 0x2B, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FF5B8
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FF5C4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081FF5D0
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081FF5DC
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081FF5DC
	end
EventScript_JP_081FF5B8: @ 0x081FF5B8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message EventText_JP_081FFA3B
	waitmessage
	goto EventScript_JP_081FF576
	.byte 0x02
EventScript_JP_081FF5C4: @ 0x081FF5C4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message EventText_JP_081FFAD0
	waitmessage
	goto EventScript_JP_081FF576
	.byte 0x02
EventScript_JP_081FF5D0: @ 0x081FF5D0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message EventText_JP_081FFB65
	waitmessage
	goto EventScript_JP_081FF576
	.byte 0x02
EventScript_JP_081FF5DC: @ 0x081FF5DC
	release
	end
.globl EventScript_JP_081FF5DE
EventScript_JP_081FF5DE: @ 0x081FF5DE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message EventText_JP_081FFBE1
	waitmessage
	goto EventScript_JP_081FF5EA
	.byte 0x02
EventScript_JP_081FF5EA: @ 0x081FF5EA
	multichoice 0x00, 0x00, 0x2C, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FF62C
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FF638
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081FF644
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_081FF650
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_081FF650
	end
EventScript_JP_081FF62C: @ 0x081FF62C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message EventText_JP_081FFC09
	waitmessage
	goto EventScript_JP_081FF5EA
	.byte 0x02
EventScript_JP_081FF638: @ 0x081FF638
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message EventText_JP_081FFC8A
	waitmessage
	goto EventScript_JP_081FF5EA
	.byte 0x02
EventScript_JP_081FF644: @ 0x081FF644
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message EventText_JP_081FFCFB
	waitmessage
	goto EventScript_JP_081FF5EA
	.byte 0x02
EventScript_JP_081FF650: @ 0x081FF650
	release
	end
EventText_JP_081FF652: @ 0x081FF652
	.string "……おや?　こりゃまた　ずいぶん\nげんきそうな　おきゃくさんが　きたのう!\pわたしは　ひとよんで　ミスターカゼノ\nこの　サイクルショップの　オーナーさ!{EOS}"
EventText_JP_081FF69F: @ 0x081FF69F
	.string "カゼノ“きみの　ランニングシューズ\nものすごく　よごれて　いるけど\lどこか　とおくから　やってきたのかい?{EOS}"
EventText_JP_081FF6D5: @ 0x081FF6D5
	.string "カゼノ“そうかい?\nじゃあ　わたしの　じてんしゃは\lひつよう　なさそうだね{EOS}"
EventText_JP_081FF6FB: @ 0x081FF6FB
	.string "カゼノ“フムフム……\pなんと　ミシロタウンから　はるばると!?\nすごい　とおく　じゃないか?\pわたしの　じてんしゃが　あれば\nここちよい　かぜを　かんじながら\lらくに　いろんな　ところへ　いけるのに!\pよーし!\nきみに　じてんしゃを　あげよう!\pいや　ちょっと　まて!\pじてんしゃ　には　2しゅるいの\nタイプが　あるのを　わすれとった!\pそれはな……\nマッハじてんしゃと　ダートじてんしゃだ!\pマッハじてんしゃは\nぜんしんで　かぜを　かんじたい　ひとに!\pダートじてんしゃは\nテクニックを　たのしみたい　ひとに!\pおじさん　しんせつ　だから\nきみの　すきな　ほうを　あげちゃうよ!\pさあ!　どちらを　えらぶ?{EOS}"
EventText_JP_081FF82C: @ 0x081FF82C
	.string "{PLAYER}は\nマッハじてんしゃを　えらんだ!{EOS}"
EventText_JP_081FF840: @ 0x081FF840
	.string "{PLAYER}は\nダートじてんしゃを　えらんだ!{EOS}"
EventText_JP_081FF854: @ 0x081FF854
	.string "カゼノ“もしも　べつの　タイプと\nこうかん　したくなった　ときには\lいつでも　わたしに　こえを　かけてくれ!{EOS}"
EventText_JP_081FF88B: @ 0x081FF88B
	.string "カゼノ“おや?　ちがう　タイプの\nじてんしゃに　のりかえたく　なったのかな?{EOS}"
EventText_JP_081FF8B2: @ 0x081FF8B2
	.string "カゼノ“じゃあ　きみが　いま　もっている\nじてんしゃを　こうかん　してあげよう!{EOS}"
EventText_JP_081FF8DB: @ 0x081FF8DB
	.string "{PLAYER}は　マッハじてんしゃを\nダートじてんしゃに　かえてもらった!{EOS}"
EventText_JP_081FF8FC: @ 0x081FF8FC
	.string "{PLAYER}は　ダートじてんしゃを\nマッハじてんしゃに　かえてもらった!{EOS}"
EventText_JP_081FF91D: @ 0x081FF91D
	.string "カゼノ“そうか　そうか!\nきにいってくれて　うれしいぞ!{EOS}"
EventText_JP_081FF93A: @ 0x081FF93A
	.string "……おや?\nきみに　あげた　じてんしゃ　どうした?\pそうか　パソコンに　あずけてあるのか\pパソコンから　とりだして　もってきたら\nこうかんして　あげる　からな!\pきみの　ぼうけんに……\nおいかぜが　ふくことを　いのってるよ!{EOS}"
EventText_JP_081FF9AB: @ 0x081FF9AB
	.string "ぼくは　ここで　はたらき　ながら\nじてんしゃの　べんきょうを　してるんだ\pじてんしゃの　のりかたで\nなにか　わからないことが　あったら\pおくのへやに　かいせつしょが　あるから\nそれを　よんでみると　いいよ!{EOS}"
EventText_JP_081FFA13: @ 0x081FFA13
	.string "マッハじてんしゃの\nかいせつしょが　おいてある!\pどの　ページを　よもうかな?{EOS}"
EventText_JP_081FFA3B: @ 0x081FFA3B
	.string "じてんしゃに　のって　じゅうじボタンを\nおしたほうに　じてんしゃは　はしります!\pすこし　はしっていく　うちに\nスピードが　あがっていく　でしょう!\pとまりたいときは　じゅうじボタンから\nてを　はなせば　スピードが　おちて\lしぜんに　とまって　くれるはずです!\p……べつの　ページを　よみますか?{EOS}"
EventText_JP_081FFAD0: @ 0x081FFAD0
	.string "マッハじてんしゃは　スピードが　はやくて\nきゅうに　とまることは　できません\pだから　かどを　まがるときには\nちょっとした　コツが　ひつようです!\pまがりたい　かどの　すこし　てまえで\nじゅうじボタンから　てを　はなして\lスピードを　おとして　まがりましょう!\p……べつの　ページを　よみますか?{EOS}"
EventText_JP_081FFB65: @ 0x081FFB65
	.string "ホウエンちほうには　ところどころに\nちいさな　すなのさかが　あります!\pそこは　すなが　くずれやすい　ために\nふつうは　のぼることが　できませんが\pマッハじてんしゃに　のっていれば\nのぼることが　できるのです!\p……べつの　ページを　よみますか?{EOS}"
EventText_JP_081FFBE1: @ 0x081FFBE1
	.string "ダートじてんしゃの\nかいせつしょが　おいてある!\pどの　ページを　よもうかな?{EOS}"
EventText_JP_081FFC09: @ 0x081FFC09
	.string "じてんしゃに　のって　Bボタンを　おすと\nそのばで　ぜんりんが　もちあがります!\pそのままで　じゅうじボタンを　おせば\nぜんりんを　あげた　じょうたいで\lはしることが　できるのです!\pそれが　ウイリーという　テクニック!\p……べつの　ページを　よみますか?{EOS}"
EventText_JP_081FFC8A: @ 0x081FFC8A
	.string "Bボタンを　おしたままに　していると\nウイリーしながら　そのばで　ピョンピョン\lとびはねることが　できます!\pそれが　ダニエルという　テクニック!\pダニエルのまま　はしることも　できます!\p……べつの　ページを　よみますか?{EOS}"
EventText_JP_081FFCFB: @ 0x081FFCFB
	.string "ダートじてんしゃに　のっているとき\nじゅうじボタンと　Bボタンを\lどうじに　おすと　ジャンプします!\pよこへ　おせば　よこに　ジャンプ!\pうしろへ　おせば　ジャンプしながら\nほうこうを　かえることが　できます!\p……べつの　ページを　よみますか?{EOS}"
	.byte 0x00
.globl EventScript_JP_081FFD78
EventScript_JP_081FFD78: @ 0x081FFD78
	lock
	faceplayer
	checkflag 0x006B
	goto_if 0x01, EventScript_JP_081FFDA7
	loadword 0x00, EventText_JP_081FFDB1
	callstd 0x04
	setorcopyvar 0x8000, 0x0158
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x006B
	setflag 0x034B
	loadword 0x00, EventText_JP_081FFE53
	callstd 0x04
	release
	end
EventScript_JP_081FFDA7: @ 0x081FFDA7
	loadword 0x00, EventText_JP_081FFEB7
	callstd 0x04
	release
	end
EventText_JP_081FFDB1: @ 0x081FFDB1
	.string "ほっほう!\pぼくのことを　いわくだきオヤジ\nなんて　よぶひとが　いるらしいけど\lしつれい　しちゃうね!\pぼくは　まだ　オヤジ　じゃないよ\nせめて　いわくだきにいさん　と\lよんでほしい　ものだね!\pほっほう!\pそれはそれとして　きみの　ポケモン\nなかなか　つよそうだな!\pよし　きにいった!\nこの　ひでんマシンを　あげよう!{EOS}"
EventText_JP_081FFE53: @ 0x081FFE53
	.string "それは　ひでんマシン‘いわくだき’!\pきみの　いくてを　ふさぐ\nじゃまな　おおいわが　あっても\pその　ひでんを　つかうことで\nくだいて　しまえるのだ!\pがんばって　いわを　くだきたまえ!\nほっほう!{EOS}"
EventText_JP_081FFEB7: @ 0x081FFEB7
	.string "そうそう\nいわを　くだくと　かくれていた\lポケモンが　とびでることも　あるからね!\pほっほう!{EOS}"
	.byte 0x00
.globl EventScript_JP_081FFEE8
EventScript_JP_081FFEE8: @ 0x081FFEE8
	lock
	faceplayer
	loadword 0x00, EventText_JP_0820078F
	callstd 0x04
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FFFE6
	message EventText_JP_082007D5
	waitmessage
	showmoneybox 0x00, 0x00, 0x00
	showcoinsbox 0x01, 0x06
	goto EventScript_JP_081FFF14
EventScript_JP_081FFF14: @ 0x081FFF14
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	multichoicedefault 0x0F, 0x00, 0x31, 0x00, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_081FFF62
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_081FFFA4
	goto EventScript_JP_08200000
	.byte 0x02, 0x70, 0x0F, 0x00, 0x31, 0x01, 0x00, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00
	.byte 0x00, 0x06, 0x01, 0x62, 0xFF, 0x1F, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xA4, 0xFF
	.byte 0x1F, 0x08, 0x05, 0x00, 0x00, 0x20, 0x08, 0x02
EventScript_JP_081FFF62: @ 0x081FFF62
	checkcoins 0x4001
	compare_var_to_value 0x4001, 0x26DE
	goto_if 0x04, EventScript_JP_08200010
	checkmoney 0x000003E8, 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FFFF0
	givecoins 0x0032
	takemoney 0x000003E8, 0x00
	updatemoneybox 0x00, 0x00
	nop
	updatecoinsbox 0x01, 0x06
	playse 0x005F
	loadword 0x00, EventText_JP_08200803
	callstd 0x04
	hidemoneybox
	nop
	nop
	hidecoinsbox 0x00, 0x05
	release
	end
EventScript_JP_081FFFA4: @ 0x081FFFA4
	checkcoins 0x4001
	compare_var_to_value 0x4001, 0x251C
	goto_if 0x04, EventScript_JP_08200010
	checkmoney 0x00002710, 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081FFFF0
	givecoins 0x01F4
	takemoney 0x00002710, 0x00
	updatemoneybox 0x00, 0x00
	nop
	updatecoinsbox 0x01, 0x06
	playse 0x005F
	loadword 0x00, EventText_JP_08200803
	callstd 0x04
	hidemoneybox
	nop
	nop
	hidecoinsbox 0x00, 0x05
	release
	end
EventScript_JP_081FFFE6: @ 0x081FFFE6
	loadword 0x00, EventText_JP_082007AA
	callstd 0x04
	release
	end
EventScript_JP_081FFFF0: @ 0x081FFFF0
	loadword 0x00, EventText_JP_08200820
	callstd 0x04
	hidemoneybox
	nop
	nop
	hidecoinsbox 0x00, 0x05
	release
	end
EventScript_JP_08200000: @ 0x08200000
	loadword 0x00, EventText_JP_08200848
	callstd 0x04
	hidemoneybox
	nop
	nop
	hidecoinsbox 0x00, 0x05
	release
	end
EventScript_JP_08200010: @ 0x08200010
	loadword 0x00, EventText_JP_08200833
	callstd 0x04
	hidemoneybox
	nop
	nop
	hidecoinsbox 0x00, 0x05
	release
	end
.globl EventScript_JP_08200020
EventScript_JP_08200020: @ 0x08200020
	lock
	faceplayer
	loadword 0x00, EventText_JP_08200864
	callstd 0x04
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820003C
	release
	end
EventScript_JP_0820003C: @ 0x0820003C
	message EventText_JP_08200897
	waitmessage
	setvar 0x4001, 0x0000
	showcoinsbox 0x01, 0x01
	goto EventScript_JP_0820005A
EventScript_JP_0820004F: @ 0x0820004F
	message EventText_JP_08200897
	waitmessage
	goto EventScript_JP_0820005A
EventScript_JP_0820005A: @ 0x0820005A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	multichoice 0x0C, 0x00, 0x30, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08200096
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082000A4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082000B2
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_082001C1
	goto EventScript_JP_082001C1
	.byte 0x02
EventScript_JP_08200096: @ 0x08200096
	setvar 0x4001, 0x0001
	bufferdecorationname 0x00, 0x0058
	goto EventScript_JP_082000C0
EventScript_JP_082000A4: @ 0x082000A4
	setvar 0x4001, 0x0002
	bufferdecorationname 0x00, 0x0059
	goto EventScript_JP_082000C0
EventScript_JP_082000B2: @ 0x082000B2
	setvar 0x4001, 0x0003
	bufferdecorationname 0x00, 0x005A
	goto EventScript_JP_082000C0
EventScript_JP_082000C0: @ 0x082000C0
	loadword 0x00, EventText_JP_0820090F
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082001C1
	copyvar 0x8000, 0x4001
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082000FA
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08200134
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0820016E
	end
EventScript_JP_082000FA: @ 0x082000FA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkcoins 0x4002
	compare_var_to_value 0x4002, 0x03E8
	goto_if 0x00, EventScript_JP_082001A8
	bufferdecorationname 0x01, 0x0058
	checkdecorspace 0x0058
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082001B6
	takecoins 0x03E8
	givedecoration 0x0058
	updatecoinsbox 0x01, 0x01
	playse 0x005F
	loadword 0x00, EventText_JP_082008B1
	callstd 0x04
	goto EventScript_JP_0820004F
	.byte 0x02
EventScript_JP_08200134: @ 0x08200134
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkcoins 0x4002
	compare_var_to_value 0x4002, 0x03E8
	goto_if 0x00, EventScript_JP_082001A8
	bufferdecorationname 0x01, 0x0059
	checkdecorspace 0x0059
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082001B6
	takecoins 0x03E8
	givedecoration 0x0059
	updatecoinsbox 0x01, 0x01
	playse 0x005F
	loadword 0x00, EventText_JP_082008B1
	callstd 0x04
	goto EventScript_JP_0820004F
	.byte 0x02
EventScript_JP_0820016E: @ 0x0820016E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkcoins 0x4002
	compare_var_to_value 0x4002, 0x03E8
	goto_if 0x00, EventScript_JP_082001A8
	bufferdecorationname 0x01, 0x005A
	checkdecorspace 0x005A
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082001B6
	takecoins 0x03E8
	givedecoration 0x005A
	updatecoinsbox 0x01, 0x01
	playse 0x005F
	loadword 0x00, EventText_JP_082008B1
	callstd 0x04
	goto EventScript_JP_0820004F
	.byte 0x02
EventScript_JP_082001A8: @ 0x082001A8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_082008D3
	callstd 0x04
	goto EventScript_JP_0820004F
	.byte 0x02
EventScript_JP_082001B6: @ 0x082001B6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call 0x082430FD
	goto EventScript_JP_0820004F
	.byte 0x02
EventScript_JP_082001C1: @ 0x082001C1
	loadword 0x00, EventText_JP_082008F5
	callstd 0x04
	hidecoinsbox 0x00, 0x00
	release
	end
.globl EventScript_JP_082001CE
EventScript_JP_082001CE: @ 0x082001CE
	lock
	faceplayer
	loadword 0x00, EventText_JP_08200864
	callstd 0x04
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082001EA
	release
	end
EventScript_JP_082001EA: @ 0x082001EA
	message EventText_JP_08200897
	waitmessage
	setvar 0x4001, 0x0000
	showcoinsbox 0x01, 0x01
	goto EventScript_JP_08200208
EventScript_JP_082001FD: @ 0x082001FD
	message EventText_JP_08200897
	waitmessage
	goto EventScript_JP_08200208
EventScript_JP_08200208: @ 0x08200208
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	multichoice 0x0C, 0x00, 0x37, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0820025A
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0820026D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08200280
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08200293
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_082002A6
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_08200447
	goto EventScript_JP_08200447
	.byte 0x02
EventScript_JP_0820025A: @ 0x0820025A
	setvar 0x4001, 0x0001
	bufferitemname 0x00, 0x0140
	setvar 0x8004, 0x0140
	goto EventScript_JP_082002B9
EventScript_JP_0820026D: @ 0x0820026D
	setvar 0x4001, 0x0002
	bufferitemname 0x00, 0x013D
	setvar 0x8004, 0x013D
	goto EventScript_JP_082002B9
EventScript_JP_08200280: @ 0x08200280
	setvar 0x4001, 0x0003
	bufferitemname 0x00, 0x0143
	setvar 0x8004, 0x0143
	goto EventScript_JP_082002B9
EventScript_JP_08200293: @ 0x08200293
	setvar 0x4001, 0x0004
	bufferitemname 0x00, 0x0138
	setvar 0x8004, 0x0138
	goto EventScript_JP_082002B9
EventScript_JP_082002A6: @ 0x082002A6
	setvar 0x4001, 0x0005
	bufferitemname 0x00, 0x012D
	setvar 0x8004, 0x012D
	goto EventScript_JP_082002B9
EventScript_JP_082002B9: @ 0x082002B9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special BufferTMHMMoveName
	loadword 0x00, EventText_JP_082008A2
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200447
	copyvar 0x8000, 0x4001
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0820030C
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08200346
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08200380
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_082003BA
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_082003F4
	end
EventScript_JP_0820030C: @ 0x0820030C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkcoins 0x4002
	compare_var_to_value 0x4002, 0x05DC
	goto_if 0x00, EventScript_JP_0820042E
	checkitemspace 0x0140, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820043C
	takecoins 0x05DC
	giveitem 0x0140, 0x0001
	updatecoinsbox 0x01, 0x01
	playse 0x005F
	loadword 0x00, EventText_JP_0820091A
	callstd 0x04
	goto EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_08200346: @ 0x08200346
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkcoins 0x4002
	compare_var_to_value 0x4002, 0x0DAC
	goto_if 0x00, EventScript_JP_0820042E
	checkitemspace 0x013D, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820043C
	takecoins 0x0DAC
	giveitem 0x013D, 0x0001
	updatecoinsbox 0x01, 0x01
	playse 0x005F
	loadword 0x00, EventText_JP_0820091A
	callstd 0x04
	goto EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_08200380: @ 0x08200380
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkcoins 0x4002
	compare_var_to_value 0x4002, 0x0FA0
	goto_if 0x00, EventScript_JP_0820042E
	checkitemspace 0x0143, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820043C
	takecoins 0x0FA0
	giveitem 0x0143, 0x0001
	updatecoinsbox 0x01, 0x01
	playse 0x005F
	loadword 0x00, EventText_JP_0820091A
	callstd 0x04
	goto EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_082003BA: @ 0x082003BA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkcoins 0x4002
	compare_var_to_value 0x4002, 0x0FA0
	goto_if 0x00, EventScript_JP_0820042E
	checkitemspace 0x0138, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820043C
	takecoins 0x0FA0
	giveitem 0x0138, 0x0001
	updatecoinsbox 0x01, 0x01
	playse 0x005F
	loadword 0x00, EventText_JP_0820091A
	callstd 0x04
	goto EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_082003F4: @ 0x082003F4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkcoins 0x4002
	compare_var_to_value 0x4002, 0x0FA0
	goto_if 0x00, EventScript_JP_0820042E
	checkitemspace 0x012D, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820043C
	takecoins 0x0FA0
	giveitem 0x012D, 0x0001
	updatecoinsbox 0x01, 0x01
	playse 0x005F
	loadword 0x00, EventText_JP_0820091A
	callstd 0x04
	goto EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_0820042E: @ 0x0820042E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_082008D3
	callstd 0x04
	goto EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_0820043C: @ 0x0820043C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call 0x082430EA
	goto EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_08200447: @ 0x08200447
	loadword 0x00, EventText_JP_082008F5
	callstd 0x04
	hidecoinsbox 0x00, 0x00
	release
	end
.globl EventScript_JP_08200454
EventScript_JP_08200454: @ 0x08200454
	loadword 0x00, EventText_JP_08200AAF
	callstd 0x02
	end
.globl EventScript_JP_0820045D
EventScript_JP_0820045D: @ 0x0820045D
	loadword 0x00, EventText_JP_08200ACC
	callstd 0x02
	end
.globl EventScript_JP_08200466
EventScript_JP_08200466: @ 0x08200466
	lock
	faceplayer
	checkflag 0x00E2
	goto_if 0x01, EventScript_JP_08200542
	loadword 0x00, EventText_JP_08200932
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200538
	copyvar 0x8000, 0x4023
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082004AB
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082004D5
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082004FF
	end
EventScript_JP_082004AB: @ 0x082004AB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferdecorationname 0x01, 0x0058
	checkdecorspace 0x0058
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200529
	loadword 0x00, EventText_JP_0820095F
	callstd 0x04
	setorcopyvar 0x8000, 0x0058
	callstd 0x07
	setflag 0x00E2
	goto EventScript_JP_08200542
	.byte 0x02
EventScript_JP_082004D5: @ 0x082004D5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferdecorationname 0x01, 0x0059
	checkdecorspace 0x0059
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200529
	loadword 0x00, EventText_JP_0820095F
	callstd 0x04
	setorcopyvar 0x8000, 0x0059
	callstd 0x07
	setflag 0x00E2
	goto EventScript_JP_08200542
	.byte 0x02
EventScript_JP_082004FF: @ 0x082004FF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferdecorationname 0x01, 0x005A
	checkdecorspace 0x005A
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200529
	loadword 0x00, EventText_JP_0820095F
	callstd 0x04
	setorcopyvar 0x8000, 0x005A
	callstd 0x07
	setflag 0x00E2
	goto EventScript_JP_08200542
	.byte 0x02
EventScript_JP_08200529: @ 0x08200529
	call 0x082430FD
	loadword 0x00, EventText_JP_08200967
	callstd 0x04
	release
	end
EventScript_JP_08200538: @ 0x08200538
	loadword 0x00, EventText_JP_0820097B
	callstd 0x04
	release
	end
EventScript_JP_08200542: @ 0x08200542
	loadword 0x00, EventText_JP_0820098D
	callstd 0x04
	release
	end
.globl EventScript_JP_0820054C
EventScript_JP_0820054C: @ 0x0820054C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820056C
	loadword 0x00, EventText_JP_082009AB
	callstd 0x04
	goto EventScript_JP_082005D8
	.byte 0x02
EventScript_JP_0820056C: @ 0x0820056C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x00E1
	goto_if 0x01, EventScript_JP_0820059A
	checkcoins 0x4001
	compare_var_to_value 0x4001, 0x0001
	goto_if 0x04, EventScript_JP_0820059A
	setflag 0x00E1
	givecoins 0x0014
	loadword 0x00, EventText_JP_082009E9
	callstd 0x04
	playse 0x005F
	goto EventScript_JP_0820059A
	.byte 0x02
EventScript_JP_0820059A: @ 0x0820059A
	loadword 0x00, EventText_JP_08200A10
	callstd 0x04
	goto EventScript_JP_082005D8
	.byte 0x02
.globl EventScript_JP_082005A8
EventScript_JP_082005A8: @ 0x082005A8
	lock
	faceplayer
	loadword 0x00, EventText_JP_08200A52
	callstd 0x04
	goto EventScript_JP_082005D8
	.byte 0x02
.globl EventScript_JP_082005B8
EventScript_JP_082005B8: @ 0x082005B8
	lock
	faceplayer
	loadword 0x00, EventText_JP_08200A93
	callstd 0x04
	goto EventScript_JP_082005D8
	.byte 0x02
.globl EventScript_JP_082005C8
EventScript_JP_082005C8: @ 0x082005C8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	loadword 0x00, EventText_JP_08200B0F
	callstd 0x04
	goto EventScript_JP_082005D8
	.byte 0x02
EventScript_JP_082005D8: @ 0x082005D8
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_082005E5
EventScript_JP_082005E5: @ 0x082005E5
	lock
	faceplayer
	loadword 0x00, EventText_JP_08200B52
	callstd 0x04
	goto EventScript_JP_082005D8
	.byte 0x02
.globl EventScript_JP_082005F5
EventScript_JP_082005F5: @ 0x082005F5
	lock
	faceplayer
	loadword 0x00, EventText_JP_08200BA3
	callstd 0x04
	goto EventScript_JP_082005D8
	.byte 0x02
.globl EventScript_JP_08200605
EventScript_JP_08200605: @ 0x08200605
	lockall
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200785
	setvar 0x8004, 0x0000
	specialvar_ 0x800D, 0x011D
	playslotmachine 0x800D
	releaseall
	end
.globl EventScript_JP_08200625
EventScript_JP_08200625: @ 0x08200625
	lockall
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200785
	setvar 0x8004, 0x0001
	specialvar_ 0x800D, 0x011D
	playslotmachine 0x800D
	releaseall
	end
.globl EventScript_JP_08200645
EventScript_JP_08200645: @ 0x08200645
	lockall
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200785
	setvar 0x8004, 0x0002
	specialvar_ 0x800D, 0x011D
	playslotmachine 0x800D
	releaseall
	end
.globl EventScript_JP_08200665
EventScript_JP_08200665: @ 0x08200665
	lockall
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200785
	setvar 0x8004, 0x0003
	specialvar_ 0x800D, 0x011D
	playslotmachine 0x800D
	releaseall
	end
.globl EventScript_JP_08200685
EventScript_JP_08200685: @ 0x08200685
	lockall
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200785
	setvar 0x8004, 0x0004
	specialvar_ 0x800D, 0x011D
	playslotmachine 0x800D
	releaseall
	end
.globl EventScript_JP_082006A5
EventScript_JP_082006A5: @ 0x082006A5
	lockall
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200785
	setvar 0x8004, 0x0005
	specialvar_ 0x800D, 0x011D
	playslotmachine 0x800D
	releaseall
	end
.globl EventScript_JP_082006C5
EventScript_JP_082006C5: @ 0x082006C5
	lockall
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200785
	setvar 0x8004, 0x0006
	specialvar_ 0x800D, 0x011D
	playslotmachine 0x800D
	releaseall
	end
.globl EventScript_JP_082006E5
EventScript_JP_082006E5: @ 0x082006E5
	lockall
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200785
	setvar 0x8004, 0x0007
	specialvar_ 0x800D, 0x011D
	playslotmachine 0x800D
	releaseall
	end
.globl EventScript_JP_08200705
EventScript_JP_08200705: @ 0x08200705
	lockall
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200785
	setvar 0x8004, 0x0008
	specialvar_ 0x800D, 0x011D
	playslotmachine 0x800D
	releaseall
	end
.globl EventScript_JP_08200725
EventScript_JP_08200725: @ 0x08200725
	lockall
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200785
	setvar 0x8004, 0x0009
	specialvar_ 0x800D, 0x011D
	playslotmachine 0x800D
	releaseall
	end
.globl EventScript_JP_08200745
EventScript_JP_08200745: @ 0x08200745
	lockall
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200785
	setvar 0x8004, 0x000A
	specialvar_ 0x800D, 0x011D
	playslotmachine 0x800D
	releaseall
	end
.globl EventScript_JP_08200765
EventScript_JP_08200765: @ 0x08200765
	lockall
	checkitem 0x0104, 0x0001
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200785
	setvar 0x8004, 0x000B
	specialvar_ 0x800D, 0x011D
	playslotmachine 0x800D
	releaseall
	end
EventScript_JP_08200785: @ 0x08200785
	loadword 0x00, EventText_JP_08200C41
	callstd 0x04
	releaseall
	end
EventText_JP_0820078F: @ 0x0820078F
	.string "いらっしゃいませ!\nキンセツ　ゲームコーナー　です!{EOS}"
EventText_JP_082007AA: @ 0x082007AA
	.string "ゲームよう　コイン　ですね?\pあら?　コインを　いれる\nコインケースが　ありませんよ{EOS}"
EventText_JP_082007D5: @ 0x082007D5
	.string "ゲームよう　コイン　ですね?\p50まい　1000えんに　なります!\nコインを　かいますか?{EOS}"
EventText_JP_08200803: @ 0x08200803
	.string "はい　ありがとう　ございます!\nコイン　です!　どうぞ!{EOS}"
EventText_JP_08200820: @ 0x08200820
	.string "あの……\nおかねが　たりないようです{EOS}"
EventText_JP_08200833: @ 0x08200833
	.string "あら?\nコインケースが　まんたん　ですね{EOS}"
EventText_JP_08200848: @ 0x08200848
	.string "……　いりませんか!\nそれでは　また　きてくださいね!{EOS}"
EventText_JP_08200864: @ 0x08200864
	.string "いらっしゃいませ!\pこちらでは　ゲームで　ためた　コインを\nおすきな　けいひんと　こうかん　します!{EOS}"
EventText_JP_08200897: @ 0x08200897
	.string "どれが　いいですか?{EOS}"
EventText_JP_082008A2: @ 0x082008A2
	.string "{STR_VAR_1}‘{STR_VAR_2}’で\nいいですね?{EOS}"
EventText_JP_082008B1: @ 0x082008B1
	.string "どうも　ありがとう!\nじたくの　パソコンに　おくって　おきますね!{EOS}"
EventText_JP_082008D3: @ 0x082008D3
	.string "コインが　たりませんね{EOS}"
EventText_JP_082008DF: @ 0x082008DF
	.string "{STR_VAR_1}　を\nいれる　ばしょが　いっぱいですよ{EOS}"
EventText_JP_082008F5: @ 0x082008F5
	.string "あら　そうですか\nコイン　ためて　きてくださいね!{EOS}"
EventText_JP_0820090F: @ 0x0820090F
	.string "{STR_VAR_1}で\nいいですね?{EOS}"
EventText_JP_0820091A: @ 0x0820091A
	.string "はい　どうぞ!{EOS}"
EventText_JP_08200922: @ 0x08200922
	.string "それいじょう　もてない　ですよ{EOS}"
EventText_JP_08200932: @ 0x08200932
	.string "うっかり　おんなじ\nぬいぐるみを　もらっちゃった!\pひとつ　あなたに　わけてあげようか?{EOS}"
EventText_JP_0820095F: @ 0x0820095F
	.string "はい　どうぞ!{EOS}"
EventText_JP_08200967: @ 0x08200967
	.string "えー　ほしいけど\nいまは　ダメなのー?{EOS}"
EventText_JP_0820097B: @ 0x0820097B
	.string "そんなこと　いわずに　もらってよ!{EOS}"
EventText_JP_0820098D: @ 0x0820098D
	.string "ほしい　けいひんが　あるから\nおおあたり　ねらってるのよ!{EOS}"
EventText_JP_082009AB: @ 0x082009AB
	.string "ここで　あそぶには\nコインケースが　ひつよう　だぞ!\pほしかったら　となりの　いえの\nおねえさんに　いってみたら　どうだ?{EOS}"
EventText_JP_082009E9: @ 0x082009E9
	.string "きょうは　かちまくって　いるからな!\nきみにも　コインを　わけて　あげよう!{EOS}"
EventText_JP_08200A10: @ 0x08200A10
	.string "おじさんは　キンセツに　くると\nいつも　ゲームコーナーで　あそぶんだ\pなんだか　ほかに　くらべて\nでやすいような　きが　するんだな{EOS}"
EventText_JP_08200A52: @ 0x08200A52
	.string "ルーレットは　あそぶ　テーブルで\nレートが　ちがうんじゃよ\pもっている　コインの　かずで\nあそぶ　テーブルを　えらぶと　いいぞ!{EOS}"
EventText_JP_08200A93: @ 0x08200A93
	.string "ひー　スロットを　してると\nしごとを　わすれてしまうー{EOS}"
EventText_JP_08200AAF: @ 0x08200AAF
	.string "この　ゲームコーナーでは\nコインを　つかって　あそぶのよ{EOS}"
EventText_JP_08200ACC: @ 0x08200ACC
	.string "この　ルーレット　という　やつは\nおおきく　ねらおうと　すると\lなかなか　かてないくせに\lなかなか　やめられない　こまった　やつだよ{EOS}"
EventText_JP_08200B0F: @ 0x08200B0F
	.string "スロットは　コイン　1まいから　あそべるけど\n3まい　かけた　ほうが　いいんじゃない?\pおおあたりの　かくりつが　アップするからね!{EOS}"
EventText_JP_08200B52: @ 0x08200B52
	.string "キミは　‘7’を　ねらって　とめられる?\pBDタイム　っていう　チャンスゲームのとき\n‘7’を　ねらって　ばっちり　とめられれば\lコインを　たくさん　ふやせるよ{EOS}"
EventText_JP_08200BA3: @ 0x08200BA3
	.string "スロットの　おとくな　じょうほう\nあなたに　おしえて　あげるわね!\pイナズマが　たくさん　たまっているほど\nBDタイムの　かいすうが　ふえやすいの!\pさいこう　5かいの　BDタイムの　ゲームで\nレギュラーボーナスを　4かい　あててから\pビッグボーナスを　あてることが　できれば\nコインを　660まいも　かせげるわ!{EOS}"
EventText_JP_08200C41: @ 0x08200C41
	.string "コインケースを\nもっていないので　あそべません!{EOS}"
	.byte 0x00
.globl EventScript_JP_08200C5B
EventScript_JP_08200C5B: @ 0x08200C5B
	lock
	faceplayer
	checkflag 0x0102
	goto_if 0x01, EventScript_JP_08200CD8
	loadword 0x00, EventText_JP_08200CEC
	callstd 0x04
	checkitem 0x007A, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08200C80
	release
	end
EventScript_JP_08200C80: @ 0x08200C80
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	playse 0x0015
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_08200D35
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08200CB6
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08200CE2
	end
EventScript_JP_08200CB6: @ 0x08200CB6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_08200D5A
	callstd 0x04
	takeitem 0x007A, 0x0001
	setorcopyvar 0x8000, 0x0104
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x0102
	goto EventScript_JP_08200CD8
	.byte 0x02
EventScript_JP_08200CD8: @ 0x08200CD8
	loadword 0x00, EventText_JP_08200D72
	callstd 0x04
	release
	end
EventScript_JP_08200CE2: @ 0x08200CE2
	loadword 0x00, EventText_JP_08200D9C
	callstd 0x04
	release
	end
EventText_JP_08200CEC: @ 0x08200CEC
	.string "あたしが　じてんしゃに　のれたら\nカイナに　いくのも　すぐなのに……\pそして　カイナの　フレンドリィショップで\nハーバーメールを　かえるのに……{EOS}"
EventText_JP_08200D35: @ 0x08200D35
	.string "それ!　ハーバーメールでしょ!\nコインケースと　こうかん　してくれない?{EOS}"
EventText_JP_08200D5A: @ 0x08200D5A
	.string "うれしい!\nじゃ　コインケースと　こうかんね!{EOS}"
EventText_JP_08200D72: @ 0x08200D72
	.string "コインケースが　あれば　ゲームコーナーで\nルーレットや　スロットを　たのしめるわ!{EOS}"
EventText_JP_08200D9C: @ 0x08200D9C
	.string "そう……　ざんねん　ね\pコインケースが　あれば　ゲームコーナーで\nルーレットや　スロットを　たのしめるのに……{EOS}"
gMapScriptDispatch_MauvilleCity_PokemonCenter_1F_OnTransition_OnResume: @ 0x08200DD4
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08200DDF
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_08200DDF: @ 0x08200DDF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setrespawn 0x0005
	call 0x08242978
	goto EventScript_JP_08200DED
	.byte 0x02
EventScript_JP_08200DED: @ 0x08200DED
	@ event command: special
	special ScrSpecial_SetMauvilleOldManEventObjGfx
	end
.globl EventScript_JP_08200DF1
EventScript_JP_08200DF1: @ 0x08200DF1
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_08200DFF
EventScript_JP_08200DFF: @ 0x08200DFF
	loadword 0x00, EventText_JP_08200E1A
	callstd 0x02
	end
.globl EventScript_JP_08200E08
EventScript_JP_08200E08: @ 0x08200E08
	loadword 0x00, EventText_JP_08200E54
	callstd 0x02
	end
.globl EventScript_JP_08200E11
EventScript_JP_08200E11: @ 0x08200E11
	loadword 0x00, EventText_JP_08200E8A
	callstd 0x02
	end
EventText_JP_08200E1A: @ 0x08200E1A
	.string "あそこに　いる　オヤジ\nへんなこと　いったり　するの!\pなんだか　おもしろくって\nわすれられない　そんざい　だわ!{EOS}"
EventText_JP_08200E54: @ 0x08200E54
	.string "レコードコーナーを　つかったらね\nムロタウンで　はやっている　ものが\lともだちと　いっしょに　なったのよ!{EOS}"
EventText_JP_08200E8A: @ 0x08200E8A
	.string "ポケモンセンターの　2かいに\nレコードコーナーが　できたんだってさ!\pよく　わからないけど　おもしろそうだろ?\nとにかく　やってみるよ!{EOS}"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02
.globl EventScript_JP_08200EF6
EventScript_JP_08200EF6: @ 0x08200EF6
	loadword 0x00, EventText_JP_08200EFF
	callstd 0x02
	end
EventText_JP_08200EFF: @ 0x08200EFF
	.string "ここの　コロシアムで\nつうしんたいせん　できるの　しってる?\pじぶんの　せいせき　って\nかべを　みると　わかるから\lまけてばかりだと　はずかしくなっちゃう……{EOS}"
	.byte 0x00
.globl EventScript_JP_08200F50
EventScript_JP_08200F50: @ 0x08200F50
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x08200F68
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x04, 0x00, 0x03, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11, 0x00, 0x4D, 0x00, 0x4B
	.byte 0x00, 0x4C, 0x00, 0x49, 0x00, 0x4A, 0x00, 0x4E, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_08200F84
EventScript_JP_08200F84: @ 0x08200F84
	loadword 0x00, EventText_JP_08200F96
	callstd 0x02
	end
.globl EventScript_JP_08200F8D
EventScript_JP_08200F8D: @ 0x08200F8D
	loadword 0x00, EventText_JP_08200FF2
	callstd 0x02
	end
EventText_JP_08200F96: @ 0x08200F96
	.string "ポケモンが　たたかっているとき\nのうりょくを　いちじてきに\lたかめる　どうぐが　あるのじゃ\pわしが　しっているのは\nプラスパワー\lディフェンダー……\pたしか　ほかにも　あったのう……{EOS}"
EventText_JP_08200FF2: @ 0x08200FF2
	.string "わざを　くりだすのか\nそれとも　どうぐを　つかうのか……\pトレーナーの　はんだんで\nしょうぶが　きまるのかも　しれないな!{EOS}"
gMapScriptDispatch_RustboroCity_DevonCorp_1F_OnTransition: @ 0x08201030
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08201036
	.byte 0
EventScript_JP_08201036: @ 0x08201036
	checkflag 0x0090
	call_if 0x00, EventScript_JP_08201040
	end
EventScript_JP_08201040: @ 0x08201040
	setobjectxyperm 0x0002, 0x000E, 0x0002
	setobjectmovementtype 0x0002, 0x08
	return
.globl EventScript_JP_0820104C
EventScript_JP_0820104C: @ 0x0820104C
	lock
	faceplayer
	checkflag 0x0090
	goto_if 0x01, EventScript_JP_08201074
	checkflag 0x008E
	goto_if 0x01, EventScript_JP_0820106A
	loadword 0x00, EventText_JP_08201162
	callstd 0x04
	release
	end
EventScript_JP_0820106A: @ 0x0820106A
	loadword 0x00, EventText_JP_082011A8
	callstd 0x04
	release
	end
EventScript_JP_08201074: @ 0x08201074
	loadword 0x00, EventText_JP_08201208
	callstd 0x04
	release
	end
.globl EventScript_JP_0820107E
EventScript_JP_0820107E: @ 0x0820107E
	lock
	faceplayer
	checkflag 0x0090
	goto_if 0x01, EventScript_JP_082010A5
	checkflag 0x008F
	goto_if 0x01, EventScript_JP_082010AF
	checkflag 0x008E
	goto_if 0x01, EventScript_JP_082010AF
	loadword 0x00, EventText_JP_08201222
	callstd 0x04
	release
	end
EventScript_JP_082010A5: @ 0x082010A5
	loadword 0x00, EventText_JP_0820126B
	callstd 0x04
	release
	end
EventScript_JP_082010AF: @ 0x082010AF
	loadword 0x00, EventText_JP_08201249
	callstd 0x04
	release
	end
.globl EventScript_JP_082010B9
EventScript_JP_082010B9: @ 0x082010B9
	lock
	faceplayer
	checkflag 0x0090
	goto_if 0x01, EventScript_JP_082010E0
	checkflag 0x008F
	goto_if 0x01, EventScript_JP_082010EA
	checkflag 0x008E
	goto_if 0x01, EventScript_JP_082010EA
	loadword 0x00, EventText_JP_08201106
	callstd 0x04
	release
	end
EventScript_JP_082010E0: @ 0x082010E0
	loadword 0x00, EventText_JP_08201106
	callstd 0x04
	release
	end
EventScript_JP_082010EA: @ 0x082010EA
	loadword 0x00, EventText_JP_08201146
	callstd 0x04
	release
	end
.globl EventScript_JP_082010F4
EventScript_JP_082010F4: @ 0x082010F4
	loadword 0x00, EventText_JP_08201284
	callstd 0x03
	end
.globl EventScript_JP_082010FD
EventScript_JP_082010FD: @ 0x082010FD
	loadword 0x00, EventText_JP_08201357
	callstd 0x03
	end
EventText_JP_08201106: @ 0x08201106
	.string "いらっしゃいませ!\nデボン　コーポレーション　です!\pみなさまの　せいかつに　やくだつ\nどうぐや　くすりを　おつくりしてます!{EOS}"
EventText_JP_08201146: @ 0x08201146
	.string "ドジな　けんきゅういんが\nにもつを　とられちゃって……{EOS}"
EventText_JP_08201162: @ 0x08201162
	.string "おっ!　ランニングシューズ!\pじぶんたちの　かいしゃの　しょうひんを\nじっさいに　つかっている　ひとを　みると\lすごく　うれしくなるよね!{EOS}"
EventText_JP_082011A8: @ 0x082011A8
	.string "たしかに　あの　にもつは\nだいじな　もの　だけど\lほかの　ひとが　ぬすんでいっても\lつかえないと　おもうんだよね\pぼくの　すいりでは　あの　どろぼう……\nたんなる　マヌケ　なんじゃないかな?{EOS}"
EventText_JP_08201208: @ 0x08201208
	.string "どうやら　デボンのにもつは\nもどってきた　らしいね{EOS}"
EventText_JP_08201222: @ 0x08201222
	.string "おっと　かんけいしゃ　いがいの　かたは\nここから　さきには　はいれませんよ!{EOS}"
EventText_JP_08201249: @ 0x08201249
	.string "どろぼうに　にもつを　うばわれるなんて\nなんて　ドジなんだろう……{EOS}"
EventText_JP_0820126B: @ 0x0820126B
	.string "やあ!\nきみなら　いつでも　だいかんげい　だよ!{EOS}"
EventText_JP_08201284: @ 0x08201284
	.string "いしや　きんぞくの　サンプルが\nガラスケースの　なかに　ならんでいる!\pパネルに　せつめいが　かいてあるから\nよんでみよう……\p‘デボン　コーポレーションは　もともと\n　やまから　いしを　きりだしたり\p　さてつから　てつざいを　つくるために\n　せつりつ　された　かいしゃ　です’\p‘やがて　デボン　コーポレーションは\n　ざいりょう　だけに　とどまらず\p　さまざまな　こうぎょう　せいひんも\n　つくるように　なったのです’{EOS}"
EventText_JP_08201357: @ 0x08201357
	.string "いろんな　どうぐの　しさくひんが\nガラスケースの　なかに　ならんでいる!\pパネルに　せつめいが　かいてあるから\nよんでみよう……\p‘げんざい　デボン　コーポレーションでは\n　こうぎょう　せいひんの　ほかにも\l　にちようひんや　くすりなど\p　ひとびとの　くらしに　やくだつ　ものを\n　かいはつ　しています’\p‘また　げんざいでは　モンスターボールや\n　ポケナビなどの　トレーナーようひんも\l　てがけるように　なりました’{EOS}"
gMapScriptDispatch_RustboroCity_DevonCorp_2F_OnTransition: @ 0x08201429
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820142F
	.byte 0
EventScript_JP_0820142F: @ 0x0820142F
	compare_var_to_value 0x40C4, 0x0001
	call_if 0x01, EventScript_JP_0820143B
	end
EventScript_JP_0820143B: @ 0x0820143B
	setvar 0x40C4, 0x0002
	return
.globl EventScript_JP_08201441
EventScript_JP_08201441: @ 0x08201441
	lock
	faceplayer
	compare_var_to_value 0x40C4, 0x0001
	call_if 0x01, EventScript_JP_0820143B
	loadword 0x00, EventText_JP_082017CD
	callstd 0x04
	release
	end
.globl EventScript_JP_08201458
EventScript_JP_08201458: @ 0x08201458
	lock
	faceplayer
	compare_var_to_value 0x40C4, 0x0001
	call_if 0x01, EventScript_JP_0820143B
	checkflag 0x011F
	goto_if 0x01, EventScript_JP_08201478
	loadword 0x00, EventText_JP_082017FF
	callstd 0x04
	release
	end
EventScript_JP_08201478: @ 0x08201478
	loadword 0x00, EventText_JP_08201831
	callstd 0x04
	release
	end
.globl EventScript_JP_08201482
EventScript_JP_08201482: @ 0x08201482
	lock
	faceplayer
	compare_var_to_value 0x40C4, 0x0001
	call_if 0x01, EventScript_JP_0820143B
	checkflag 0x00BC
	goto_if 0x01, EventScript_JP_082014A2
	loadword 0x00, EventText_JP_082018CD
	callstd 0x04
	release
	end
EventScript_JP_082014A2: @ 0x082014A2
	loadword 0x00, EventText_JP_08201908
	callstd 0x04
	release
	end
.globl EventScript_JP_082014AC
EventScript_JP_082014AC: @ 0x082014AC
	lock
	faceplayer
	compare_var_to_value 0x40C4, 0x0001
	call_if 0x01, EventScript_JP_0820143B
	loadword 0x00, EventText_JP_08201983
	callstd 0x04
	release
	end
.globl EventScript_JP_082014C3
EventScript_JP_082014C3: @ 0x082014C3
	lock
	faceplayer
	compare_var_to_value 0x40C4, 0x0002
	goto_if 0x01, EventScript_JP_082015D5
	compare_var_to_value 0x40C4, 0x0001
	goto_if 0x01, EventScript_JP_082015CB
	loadword 0x00, EventText_JP_082019BF
	callstd 0x04
	checkitem 0x011E, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08201505
	checkitem 0x011F, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08201563
	release
	end
EventScript_JP_08201505: @ 0x08201505
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	closemessage
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0005, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0005, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_082019FB
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082015C1
	checkitem 0x011F, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08201756
	goto EventScript_JP_08201546
	.byte 0x02
EventScript_JP_08201546: @ 0x08201546
	bufferitemname 0x00, 0x011E
	loadword 0x00, EventText_JP_08201AB1
	callstd 0x04
	takeitem 0x011E, 0x0001
	setvar 0x40C4, 0x0001
	setvar 0x40C5, 0x0001
	release
	end
EventScript_JP_08201563: @ 0x08201563
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	closemessage
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0005, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0005, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_082019FB
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082015C1
	checkitem 0x011E, 0x0001
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08201756
	goto EventScript_JP_082015A4
	.byte 0x02
EventScript_JP_082015A4: @ 0x082015A4
	bufferitemname 0x00, 0x011F
	loadword 0x00, EventText_JP_08201AB1
	callstd 0x04
	takeitem 0x011F, 0x0001
	setvar 0x40C4, 0x0001
	setvar 0x40C5, 0x0002
	release
	end
EventScript_JP_082015C1: @ 0x082015C1
	loadword 0x00, EventText_JP_08201A42
	callstd 0x04
	release
	end
EventScript_JP_082015CB: @ 0x082015CB
	loadword 0x00, EventText_JP_08201ADF
	callstd 0x04
	release
	end
EventScript_JP_082015D5: @ 0x082015D5
	compare_var_to_value 0x40C5, 0x0001
	goto_if 0x01, EventScript_JP_082015EC
	compare_var_to_value 0x40C5, 0x0002
	goto_if 0x01, EventScript_JP_082015FE
	end
EventScript_JP_082015EC: @ 0x082015EC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferspeciesname 0x01, 0x0184
	loadword 0x00, EventText_JP_08201B2F
	callstd 0x04
	goto EventScript_JP_08201610
	.byte 0x02
EventScript_JP_082015FE: @ 0x082015FE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	bufferspeciesname 0x01, 0x0186
	loadword 0x00, EventText_JP_08201B2F
	callstd 0x04
	goto EventScript_JP_082016B3
	.byte 0x02
EventScript_JP_08201610: @ 0x08201610
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4001, 0x0184
	givemon 0x0184, 0x14, 0x0000, 0x00000000, 0x00000000, 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08201640
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08201668
	goto 0x0824423B
	.byte 0x02
EventScript_JP_08201640: @ 0x08201640
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_08201696
	loadword 0x00, gText_NicknameThisPokemon
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082016A9
	call 0x082441B5
	call 0x08243460
	goto EventScript_JP_082016A9
	.byte 0x02
EventScript_JP_08201668: @ 0x08201668
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_08201696
	loadword 0x00, gText_NicknameThisPokemon
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820168B
	call 0x082441C1
	goto EventScript_JP_0820168B
	.byte 0x02
EventScript_JP_0820168B: @ 0x0820168B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call 0x082441CA
	goto EventScript_JP_082016A9
	.byte 0x02
EventScript_JP_08201696: @ 0x08201696
	bufferspeciesname 0x01, 0x0184
	playfanfare 0x0172
	message EventText_JP_08201B65
	waitmessage
	waitfanfare
	bufferspeciesname 0x00, 0x0184
	return
EventScript_JP_082016A9: @ 0x082016A9
	setvar 0x40C4, 0x0000
	setflag 0x010B
	release
	end
EventScript_JP_082016B3: @ 0x082016B3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4001, 0x0186
	givemon 0x0186, 0x14, 0x0000, 0x00000000, 0x00000000, 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082016E3
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820170B
	goto 0x0824423B
	.byte 0x02
EventScript_JP_082016E3: @ 0x082016E3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_08201739
	loadword 0x00, gText_NicknameThisPokemon
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820174C
	call 0x082441B5
	call 0x08243460
	goto EventScript_JP_0820174C
	.byte 0x02
EventScript_JP_0820170B: @ 0x0820170B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call EventScript_JP_08201739
	loadword 0x00, gText_NicknameThisPokemon
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820172E
	call 0x082441C1
	goto EventScript_JP_0820172E
	.byte 0x02
EventScript_JP_0820172E: @ 0x0820172E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	call 0x082441CA
	goto EventScript_JP_0820174C
	.byte 0x02
EventScript_JP_08201739: @ 0x08201739
	bufferspeciesname 0x01, 0x0186
	playfanfare 0x0172
	message EventText_JP_08201B65
	waitmessage
	waitfanfare
	bufferspeciesname 0x00, 0x0186
	return
EventScript_JP_0820174C: @ 0x0820174C
	setvar 0x40C4, 0x0000
	setflag 0x010B
	release
	end
EventScript_JP_08201756: @ 0x08201756
	message EventText_JP_08201A5F
	waitmessage
	multichoice 0x11, 0x06, 0x5D, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08201793
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08201799
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0820179F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0820179F
	end
EventScript_JP_08201793: @ 0x08201793
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	goto EventScript_JP_082015A4
	.byte 0x02
EventScript_JP_08201799: @ 0x08201799
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	goto EventScript_JP_08201546
	.byte 0x02
EventScript_JP_0820179F: @ 0x0820179F
	release
	end
.globl EventScript_JP_082017A1
EventScript_JP_082017A1: @ 0x082017A1
	lock
	faceplayer
	compare_var_to_value 0x40C4, 0x0001
	call_if 0x01, EventScript_JP_0820143B
	compare_var_to_value 0x405A, 0x0006
	goto_if 0x04, EventScript_JP_082017C3
	loadword 0x00, EventText_JP_08201B99
	callstd 0x04
	release
	end
EventScript_JP_082017C3: @ 0x082017C3
	loadword 0x00, EventText_JP_08201BCC
	callstd 0x04
	release
	end
EventText_JP_082017CD: @ 0x082017CD
	.string "いま　ポケモンと　はなせる　どうぐを\nかいはつ　しているのですが……\pなかなか　うまく　いかないね{EOS}"
EventText_JP_082017FF: @ 0x082017FF
	.string "いま　しんがたの　モンスターボールを\nかいはつ　しているのですが……\pなかなか　うまく　いかないね{EOS}"
EventText_JP_08201831: @ 0x08201831
	.string "しんがたの　モンスターボールが\nついに　かんせい　したのです!\pリピートボールを　つかうと\nいちど　つかまえた　ポケモンが\lつかまえやすく　なります!\pタイマーボールは　ポケモンとの\nたたかいが　ながびけば　ながびくほど\lつかまえやすく　なります!\pどちらも　わがしゃの　じしんさく\nぜひ　つかって　ください!{EOS}"
EventText_JP_082018CD: @ 0x082018CD
	.string "ポケナビを　つくったのは　わたし!\pいやー　あんな　すごいモノを　つくれると\nかいはつしゃ　みょうりに　つきますね!{EOS}"
EventText_JP_08201908: @ 0x08201908
	.string "おお!　それは　ポケナビ!\pポケモンの　きもちを　しりたい\nという　しゃちょうの　アイデアを\lじつげん　したのです!\pくわしい　せつめいを　しましょうか?\p……　いやいや\nそのうちに　わかるでしょう!\lどんどん　ポケナビを　つかってくださいね!{EOS}"
EventText_JP_08201983: @ 0x08201983
	.string "いま　ポケモンが　みている\nゆめを　うつしだす　どうぐを\lかいはつ　しているのですが……\pなかなか　うまく　いかないね{EOS}"
EventText_JP_082019BF: @ 0x082019BF
	.string "いま　ポケモンの　かせきを\nさいせい　する　そうちを\lかいはつ　していたのですが……\pなかなか　うまく　いきましたよ!{EOS}"
EventText_JP_082019FB: @ 0x082019FB
	.string "きみの　もっている　それは\nポケモンの　かせき!?\pよければ　わたしが　つくった\nカセキ　さいせい　マシンで\lいきかえらせて　みましょうか?{EOS}"
EventText_JP_08201A42: @ 0x08201A42
	.string "あー　そうですか\pデボンの　ぎじゅつは　すごいのにな……{EOS}"
EventText_JP_08201A5F: @ 0x08201A5F
	.string "なんとまあ!\nかせきを　ふたつも　もってるんですか!\pでも　わたしの　マシンでは\nひとつづつ　しか　さいせい　できません\pどちらの　かせきを　かして　くれますか?{EOS}"
EventText_JP_08201AB1: @ 0x08201AB1
	.string "わかりました!\nでは　さっそく……\p{PLAYER}は　デボンの　けんきゅういんに\n{STR_VAR_1}を　あずけた!{EOS}"
EventText_JP_08201ADF: @ 0x08201ADF
	.string "わたしが　つくった\nカセキ　さいせい　マシンは　すごいのですが\lじかんが　かかるのが　けってん……\pすこし　そこらへんを\nけんがく　なされては　いかがですか?{EOS}"
EventText_JP_08201B2F: @ 0x08201B2F
	.string "おまたせ　しました!\nカセキが　いきかえり　ましたよ!\pカセキは　おおむかしの　ポケモン\n{STR_VAR_2}　でしたよ!{EOS}"
EventText_JP_08201B65: @ 0x08201B65
	.string "{PLAYER}は　デボンの　けんきゅういんから\n{STR_VAR_2}を　うけとった!{EOS}"
EventText_JP_08201B83: @ 0x08201B83
	.string "あー　ポケモン　いっぱいで\nもてないですね{EOS}"
EventText_JP_08201B99: @ 0x08201B99
	.string "いま　ポケナビに　ついかする　きのうを\nかいはつ　しているのですが……\pなかなか　うまく　いかないね{EOS}"
EventText_JP_08201BCC: @ 0x08201BCC
	.string "さーて　つぎは　どんな　そうちを\nかいはつ　しようかな……\pうちの　かいしゃは　ひらめいた　アイデアを\nどんどん　じつげん　させて　くれるから\lけんきゅうしゃ　みょうりに　つきますよ!{EOS}"
gMapScriptDispatch_RustboroCity_DevonCorp_3F_OnTransition_OnWarpIntoMap_OnFrame: @ 0x08201C29
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08201C39
	.byte 0x04
	.4byte gMapScriptConditionTable_RustboroCity_DevonCorp_3F_OnWarpIntoMap
	.byte 0x02
	.4byte gMapScriptConditionTable_RustboroCity_DevonCorp_3F_OnFrame
	.byte 0
EventScript_JP_08201C39: @ 0x08201C39
	compare_var_to_value 0x408F, 0x0000
	call_if 0x01, EventScript_JP_08201C45
	end
EventScript_JP_08201C45: @ 0x08201C45
	setobjectxyperm 0x0002, 0x0003, 0x0002
	setobjectmovementtype 0x0002, 0x09
	return
gMapScriptConditionTable_RustboroCity_DevonCorp_3F_OnWarpIntoMap: @ 0x08201C51
	@ conditional map script table
	.2byte 0x408F, 0x0000
	.4byte EventScript_JP_08201C5B
	.2byte 0
EventScript_JP_08201C5B: @ 0x08201C5B
	turnobject 0x00FF, 0x04
	end
gMapScriptConditionTable_RustboroCity_DevonCorp_3F_OnFrame: @ 0x08201C60
	@ conditional map script table
	.2byte 0x408F, 0x0000
	.4byte EventScript_JP_08201C6A
	.2byte 0
EventScript_JP_08201C6A: @ 0x08201C6A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, EventText_JP_0820213E
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_WalkRightX3_WalkDown_WalkRightX4
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x0050
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_WalkLeftX4_WalkUp_WalkLeftX3
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_08202212
	callstd 0x04
	closemessage
	playbgm 0x01A4, 0x00
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_WalkRightX3_WalkDown_WalkRightX9_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_WalkRightX4_WalkDown_WalkRightX8
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_08202239
	callstd 0x04
	closemessage
	fadedefaultbgm
	@ event command: applymovement
	applymovement 0x0002, LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkInPlaceFastestDown_2
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_MaysHouse_2F_Movement_Delay16X2_WalkDownX2_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, EventText_JP_08201E05
	callstd 0x04
	setorcopyvar 0x8000, 0x0112
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	loadword 0x00, EventText_JP_08201EE9
	callstd 0x04
	playfanfare 0x0172
	message EventText_JP_08201F3E
	waitfanfare
	setflag 0x0862
	setflag 0x00BC
	setflag 0x03E7
	loadword 0x00, EventText_JP_08201F4F
	callstd 0x04
	closemessage
	call 0x0824310F
	loadword 0x00, EventText_JP_08202015
	callstd 0x04
	setflag 0x037E
	clearflag 0x0327
	clearflag 0x03D7
	clearflag 0x02E3
	clearflag 0x0371
	setvar 0x4096, 0x0001
	clearflag 0x032E
	setvar 0x408F, 0x0001
	setvar 0x405A, 0x0006
	releaseall
	end
	.byte 0x09, 0x09, 0x09, 0x27, 0xFE
LittlerootTown_MaysHouse_2F_Movement_WalkRightX3_WalkDown_WalkRightX9_WalkInPlaceFastestLeft: @ 0x08201D30
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_left
	step_end
LittlerootTown_MaysHouse_2F_Movement_Delay16_WalkInPlaceFastestDown_2: @ 0x08201D3F
	@ object movement sequence
	delay_16
	walk_in_place_fastest_down
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkRightX3_WalkDown_WalkRightX4: @ 0x08201D42
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkLeftX4_WalkUp_WalkLeftX3: @ 0x08201D4B
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	step_end
LittlerootTown_MaysHouse_2F_Movement_WalkRightX4_WalkDown_WalkRightX8: @ 0x08201D54
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
LittlerootTown_MaysHouse_2F_Movement_Delay16X2_WalkDownX2_WalkInPlaceFastestRight: @ 0x08201D62
	@ object movement sequence
	delay_16
	delay_16
	walk_down
	walk_down
	walk_in_place_fastest_right
	step_end
.globl EventScript_JP_08201D68
EventScript_JP_08201D68: @ 0x08201D68
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0110
	goto_if 0x01, EventScript_JP_08201DC8
	checkflag 0x00BD
	goto_if 0x01, EventScript_JP_08201D91
	loadword 0x00, EventText_JP_08202037
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_08201D91: @ 0x08201D91
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, EventText_JP_08202047
	callstd 0x04
	setorcopyvar 0x8000, 0x00B6
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0110
	loadword 0x00, EventText_JP_0820208A
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
EventScript_JP_08201DC8: @ 0x08201DC8
	loadword 0x00, EventText_JP_082020E6
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08201DDD
EventScript_JP_08201DDD: @ 0x08201DDD
	lock
	faceplayer
	checkflag 0x0100
	goto_if 0x01, EventScript_JP_08201DF2
	loadword 0x00, EventText_JP_08202241
	callstd 0x04
	release
	end
EventScript_JP_08201DF2: @ 0x08201DF2
	loadword 0x00, EventText_JP_08202277
	callstd 0x04
	release
	end
.globl EventScript_JP_08201DFC
EventScript_JP_08201DFC: @ 0x08201DFC
	loadword 0x00, EventText_JP_082022A7
	callstd 0x03
	end
EventText_JP_08201E05: @ 0x08201E05
	.string "わしが　デボン　コーポレーション\nしゃちょうの　ツワブキ　だ!\pきみの　ことは　さっき　きいたよ!\pなんでも　うちの　けんきゅういんを\n2ども　たすけてくれた　とか\p……で　そんな　すごい　きみに\nたのみごとを　したいのだ!\pきみは　にもつを　とどけに\nカイナの　ぞうせんじょに　いくんだろう?\pその　とちゅうに\nムロタウンにも　よって　ほしいのだよ!\pいやー　ムロタウンに\nダイゴという　おとこが　いるはずでね\lちょいと　てがみを　とどけてほしいのだ!{EOS}"
EventText_JP_08201EE9: @ 0x08201EE9
	.string "ツワブキ“もちろん　わしは\nすごーい　しゃちょうで　あるからな!\pただで　おねがいすると　いうような\nケチな　まねは　しないのだ!\pきみに　こいつを　プレゼントしよう!{EOS}"
EventText_JP_08201F3E: @ 0x08201F3E
	.string "{PLAYER}は\nポケナビを　てにいれた!{EOS}"
EventText_JP_08201F4F: @ 0x08201F4F
	.string "ツワブキ“そいつは……\pポケモン　ナビゲーター!\nりゃくして　ポケナビ　といってな\pぼうけんを　する　トレーナーの\nひつじゅひん　なのだよ!\pそいつで　ホウエンマップを　みれば\nムロや　カイナの　ばしょ　だって\lばっちり　わかると　いうものだ!\p……さいきんは　アクアだの　マグマだの\nといった　あやしげな　れんちゅうが\lあちこちで　わるさを　してるらしい\pまずは　ひとやすみ　していきなさい!{EOS}"
EventText_JP_08202015: @ 0x08202015
	.string "ツワブキ“それでは　{PLAYER}{KUN}\nじゅうぶん　きをつけて　いくのだよ!{EOS}"
EventText_JP_08202037: @ 0x08202037
	.string "ツワブキ“よろしく　たのむよ!{EOS}"
EventText_JP_08202047: @ 0x08202047
	.string "ツワブキ“てがみを　とどけて　くれたんだね\nいやいや　ありがとう!\pこいつは　おれい　だよ\nトレーナーの　きみに　やくだつ　はずだ!{EOS}"
EventText_JP_0820208A: @ 0x0820208A
	.string "ツワブキ“がくしゅうそうちを　もたせた\nポケモンは　しょうぶを　しなくても\lけいけんちを　わけて　もらえる!\pよわい　ポケモンを　そだてるのに\nなかなか　べんりな　どうぐ　なのだよ!{EOS}"
EventText_JP_082020E6: @ 0x082020E6
	.string "ツワブキ“わたしは　わかいころ　から\nしごと　ばかり　だったから\lいまいち　わからんのだが……\pわかものは　やはり　トレーナーとして\nポケモンリーグを　めざす　もの　なのかね{EOS}"
EventText_JP_0820213E: @ 0x0820213E
	.string "ここが　デボン　コーポレーション　3かい\nしゃちょうの　おへや　なのよね!\pいやー!　きみには\nかんしゃ　かんげき　あめ　あられ　なのです\pところで……　きみが\nとりもどしてくれた　にもつ\pそいつを　カイナシティの　ぞうせんじょ\nつまり　ふねの　こうじょうへ\lとどけて　ほしいのです!\pまた　おかしな　やつらに\nうばわれては　たまりません　からね\pえへへ……\nよろしく　おねがい　しますよ\pちょっと　まっていて　くださいね{EOS}"
EventText_JP_08202212: @ 0x08202212
	.string "しゃちょうが　ぜひ\nおはなし　したいそうです\pわたしに　ついて　きてください{EOS}"
EventText_JP_08202239: @ 0x08202239
	.string "ささ　どうぞ!{EOS}"
EventText_JP_08202241: @ 0x08202241
	.string "カイナの　ぞうせんじょ　には\nクスノキさん　という　ひとが　いるから\lかれを　たずねていくと　いいですよ!{EOS}"
EventText_JP_08202277: @ 0x08202277
	.string "デボンの　しんせいひん\nリピートボールと　タイマーボール\lトレーナーに　だいにんき　なのよね!{EOS}"
EventText_JP_082022A7: @ 0x082022A7
	.string "しゃちょうの　あつめた\nめずらしい　いしが　かざってある!{EOS}"
	.byte 0x00
.globl EventScript_JP_082022C6
EventScript_JP_082022C6: @ 0x082022C6
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, 0x0109, 0x0000, gText_Rom_202722, gText_Rom_2027A3, EventScript_JP_082022FB
	specialvar_ 0x800D, 0x0039
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820235D
	checkflag 0x00A5
	goto_if 0x00, EventScript_JP_08202339
	loadword 0x00, gText_Rom_20295A
	callstd 0x04
	release
	end
EventScript_JP_082022FB: @ 0x082022FB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	message gText_Rom_202830
	waitmessage
	call 0x0824310A
	loadword 0x00, gText_Rom_202849
	callstd 0x04
	setflag 0x04F0
	setflag 0x0867
	setvar 0x405A, 0x0001
	addvar 0x4085, 0x0001
	setvar 0x8008, 0x0001
	call 0x08242FCF
	compare_var_to_value 0x4085, 0x0006
	call_if 0x01, 0x08242F10
	goto EventScript_JP_08202339
	.byte 0x02
EventScript_JP_08202339: @ 0x08202339
	setorcopyvar 0x8000, 0x0147
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00A5
	loadword 0x00, gText_Rom_2028BA
	callstd 0x04
	release
	end
EventScript_JP_0820235D: @ 0x0820235D
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, 0x0109, 0x0000, gText_Rom_202ACB, gText_Rom_202B2A, gText_Rom_202B8B
	loadword 0x00, gText_Rom_202B41
	callstd 0x06
	end
.globl EventScript_JP_08202378
EventScript_JP_08202378: @ 0x08202378
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0140, 0x0000, gText_Rom_202612, gText_Rom_202636
	loadword 0x00, gText_Rom_202647
	callstd 0x06
	end
.globl EventScript_JP_0820238F
EventScript_JP_0820238F: @ 0x0820238F
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0141, 0x0000, gText_Rom_202665, gText_Rom_20268E
	loadword 0x00, gText_Rom_20269A
	callstd 0x06
	end
.globl EventScript_JP_082023A6
EventScript_JP_082023A6: @ 0x082023A6
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x023B, 0x0000, gText_Rom_2026C0, gText_Rom_2026DB
	loadword 0x00, gText_Rom_2026F4
	callstd 0x06
	end
.globl EventScript_JP_082023BD
EventScript_JP_082023BD: @ 0x082023BD
	lock
	faceplayer
	checkflag 0x04F0
	goto_if 0x01, EventScript_JP_082023D2
	loadword 0x00, gText_Rom_202432
	callstd 0x04
	release
	end
EventScript_JP_082023D2: @ 0x082023D2
	loadword 0x00, gText_Rom_202581
	callstd 0x04
	release
	end
.globl EventScript_JP_082023DC
EventScript_JP_082023DC: @ 0x082023DC
	lockall
	checkflag 0x0867
	goto_if 0x01, EventScript_JP_082023FC
	goto EventScript_JP_08202406
	.byte 0x02
.globl EventScript_JP_082023EC
EventScript_JP_082023EC: @ 0x082023EC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x0867
	goto_if 0x01, EventScript_JP_082023FC
	goto EventScript_JP_08202406
	.byte 0x02
EventScript_JP_082023FC: @ 0x082023FC
	loadword 0x00, gText_Rom_2029BA
	callstd 0x04
	releaseall
	end
EventScript_JP_08202406: @ 0x08202406
	loadword 0x00, gText_Rom_2029AB
	callstd 0x04
	releaseall
	end
