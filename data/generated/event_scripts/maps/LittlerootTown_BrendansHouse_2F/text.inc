	@ data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc:272 PlayersHouse_2F_Text_ClockIsStopped
	.globl PlayersHouse_2F_Text_ClockIsStopped
PlayersHouse_2F_Text_ClockIsStopped: @ 0x081F0217
	.string "かべの とけいが とまっている……\pじかんを あわせて おかなくちゃ!{EOS}"
	.if (. - PlayersHouse_2F_Text_ClockIsStopped) > 0x24
	.error "PlayersHouse_2F_Text_ClockIsStopped may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_2F_Text_ClockIsStopped) < 0x24
	.space 0x24 - (. - PlayersHouse_2F_Text_ClockIsStopped)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc:276 PlayersHouse_2F_Text_HowDoYouLikeYourRoom
	.globl PlayersHouse_2F_Text_HowDoYouLikeYourRoom
PlayersHouse_2F_Text_HowDoYouLikeYourRoom: @ 0x081F023B
	.string "ママ『{PLAYER}\nどう あたらしい へやは?\pうん! きれいに かたづいてるわね!\nしたも もう かたづいたわ\lポケモンが いると ほんとうに らくね!\pそうだ! つくえの うえの ものも\nだいじょうぶか みておいてね{EOS}"
	.if (. - PlayersHouse_2F_Text_HowDoYouLikeYourRoom) > 0x6b
	.error "PlayersHouse_2F_Text_HowDoYouLikeYourRoom may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_2F_Text_HowDoYouLikeYourRoom) < 0x6b
	.space 0x6b - (. - PlayersHouse_2F_Text_HowDoYouLikeYourRoom)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc:285 PlayersHouse_2F_Text_Notebook
	.globl PlayersHouse_2F_Text_Notebook
PlayersHouse_2F_Text_Notebook: @ 0x081F02A6
	.string "{PLAYER}は ノートを ひらいた!\pたんけんの こころえ その1\nスタートボタンで メニューが ひらく!\pたんけんの こころえ その2\nポケモン レポートで きろく できる!\pあとは まっしろ だ……{EOS}"
	.if (. - PlayersHouse_2F_Text_Notebook) > 0x62
	.error "PlayersHouse_2F_Text_Notebook may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_2F_Text_Notebook) < 0x62
	.space 0x62 - (. - PlayersHouse_2F_Text_Notebook)
	.endif
	@ field-script:0x24311E FieldScriptText_1F0308
	.globl FieldScriptText_1F0308
FieldScriptText_1F0308: @ 0x081F0308
	.string "{0xFD}{0x01}は　ホウエンちほうの\nタウンマップに　かおを　ちかづけた！{EOS}"
	.if (. - FieldScriptText_1F0308) > 0x20
	.error "FieldScriptText_1F0308 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_1F0308) < 0x20
	.space 0x20 - (. - FieldScriptText_1F0308)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc:297 PlayersHouse_2F_Text_ItsAGameCube
	.globl PlayersHouse_2F_Text_ItsAGameCube
PlayersHouse_2F_Text_ItsAGameCube: @ 0x081F0328
	.string "ゲームキューブが ある!\pコントローラの かわりに\nゲームボーイ アドバンスが つながってる!{EOS}"
	.if (. - PlayersHouse_2F_Text_ItsAGameCube) > 0x30
	.error "PlayersHouse_2F_Text_ItsAGameCube may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_2F_Text_ItsAGameCube) < 0x30
	.space 0x30 - (. - PlayersHouse_2F_Text_ItsAGameCube)
	.endif
	@ analyzed canonical ROM range 0x081F0358-0x081F0677
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_081F0358: @ 0x081F0358
gMapScriptDispatch_LittlerootTown_MaysHouse_1F_OnLoad_OnTransition_OnFrame: @ 0x081F0358
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_081F0368
	.byte 0x03
	.4byte EventScript_JP_081F03A7
	.byte 0x02
	.4byte gMapScriptConditionTable_LittlerootTown_MaysHouse_1F_OnFrame
	.byte 0
EventScript_JP_081F0368: @ 0x081F0368
	compare_var_to_value 0x4092, 0x0006
	call_if 0x00, EventScript_JP_081F037D
	checkflag 0x0112
	call_if 0x01, EventScript_JP_081F0390
	end
EventScript_JP_081F037D: @ 0x081F037D
	setmetatile 0x0005, 0x0004, 0x0270, 0x0001
	setmetatile 0x0005, 0x0002, 0x0268, 0x0001
	return
EventScript_JP_081F0390: @ 0x081F0390
	checkplayergender
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F039D
	return
EventScript_JP_081F039D: @ 0x081F039D
	setmetatile 0x0006, 0x0007, 0x0293, 0x0001
	return
EventScript_JP_081F03A7: @ 0x081F03A7
	compare_var_to_value 0x4092, 0x0003
	call_if 0x01, EventScript_JP_081F03E1
	compare_var_to_value 0x4092, 0x0005
	call_if 0x01, EventScript_JP_081F03C9
	compare_var_to_value 0x4092, 0x0006
	call_if 0x01, EventScript_JP_081F03D5
	end
EventScript_JP_081F03C9: @ 0x081F03C9
	setobjectxyperm 0x0001, 0x0002, 0x0004
	setobjectmovementtype 0x0001, 0x07
	return
EventScript_JP_081F03D5: @ 0x081F03D5
	setobjectxyperm 0x0001, 0x0006, 0x0005
	setobjectmovementtype 0x0001, 0x07
	return
EventScript_JP_081F03E1: @ 0x081F03E1
	setobjectxyperm 0x0001, 0x0001, 0x0008
	setobjectmovementtype 0x0001, 0x07
	return
gMapScriptConditionTable_LittlerootTown_MaysHouse_1F_OnFrame: @ 0x081F03ED
	@ conditional map script table
	.2byte 0x4092, 0x0003
	.4byte EventScript_JP_081F043F
	.2byte 0x4092, 0x0005
	.4byte EventScript_JP_081F0417
	.2byte 0x4092, 0x0006
	.4byte EventScript_JP_081F0450
	.2byte 0x408C, 0x0001
	.4byte EventScript_JP_081F0461
	.2byte 0x4082, 0x0003
	.4byte EventScript_JP_082582DC
	.2byte 0
EventScript_JP_081F0417: @ 0x081F0417
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	loadword 0x00, PlayersHouse_1F_Text_GoSetTheClock
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_BrendansHouse_2F_Movement_WalkUp
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_BrendansHouse_2F_Movement_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: warp
	warp MAP_ID_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 0xFF, 0x0001, 0x0001
	.byte 0x27, 0x6B, 0x02
LittlerootTown_BrendansHouse_2F_Movement_WalkUp: @ 0x081F043D
	@ object movement sequence
	walk_up
	step_end
EventScript_JP_081F043F: @ 0x081F043F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	goto EventScript_JP_08257EEE
	.byte 0x02
EventScript_JP_081F0450: @ 0x081F0450
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	goto EventScript_JP_082580C6
	.byte 0x02
EventScript_JP_081F0461: @ 0x081F0461
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0004, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	applymovement 0x0004, LittlerootTown_BrendansHouse_2F_Movement_WalkDown_WalkLeftX5
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: special
	special GetRivalSonDaughterString
	loadword 0x00, RivalsHouse_1F_Text_OhYoureTheNewNeighbor
	callstd 0x04
	setflag 0x0057
	setvar 0x408C, 0x0002
	releaseall
	end
LittlerootTown_BrendansHouse_2F_Movement_WalkDown_WalkLeftX5: @ 0x081F049F
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
.globl EventScript_JP_081F04A6
EventScript_JP_081F04A6: @ 0x081F04A6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	checkflag 0x0082
	goto_if 0x01, EventScript_JP_081F04E6
	checkflag 0x0860
	goto_if 0x01, EventScript_JP_081F04DC
	compare_var_to_value 0x408D, 0x0003
	goto_if 0x01, EventScript_JP_081F04D2
	@ event command: special
	special GetRivalSonDaughterString
	loadword 0x00, RivalsHouse_1F_Text_LikeChildLikeFather
	callstd 0x04
	release
	end
EventScript_JP_081F04D2: @ 0x081F04D2
	loadword 0x00, RivalsHouse_1F_Text_TooBusyToNoticeVisit
	callstd 0x04
	release
	end
EventScript_JP_081F04DC: @ 0x081F04DC
	loadword 0x00, RivalsHouse_1F_Text_WentOutToRoute103
	callstd 0x04
	release
	end
EventScript_JP_081F04E6: @ 0x081F04E6
	loadword 0x00, RivalsHouse_1F_Text_ShouldGoHomeEverySoOften
	callstd 0x04
	release
	end
.globl EventScript_JP_081F04F0
EventScript_JP_081F04F0: @ 0x081F04F0
	lock
	faceplayer
	@ event command: special
	special GetPlayerBigGuyGirlString
	loadword 0x00, RivalsHouse_1F_Text_DoYouHavePokemon
	callstd 0x04
	release
	end
.globl EventScript_JP_081F04FF
EventScript_JP_081F04FF: @ 0x081F04FF
	lockall
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: applymovement
	applymovement 0x8004, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_08257F4F
	.byte 0x02
.globl EventScript_JP_081F051A
EventScript_JP_081F051A: @ 0x081F051A
	lockall
	setvar 0x8008, 0x0000
	goto EventScript_JP_081F053E
	.byte 0x02
.globl EventScript_JP_081F0526
EventScript_JP_081F0526: @ 0x081F0526
	lockall
	setvar 0x8008, 0x0001
	goto EventScript_JP_081F053E
	.byte 0x02
.globl EventScript_JP_081F0532
EventScript_JP_081F0532: @ 0x081F0532
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x8008, 0x0002
	goto EventScript_JP_081F053E
	.byte 0x02
EventScript_JP_081F053E: @ 0x081F053E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	playse 0x0009
	delay 0x000A
	@ event command: addobject
	addobject 0x0007
	delay 0x001E
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0007, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0007, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x8008, 0x0001
	call_if 0x05, EventScript_JP_081F05DD
	playbgm 0x019F, 0x01
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081F05E8
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081F05F3
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081F05FE
	loadword 0x00, RivalsHouse_1F_Text_MayWhoAreYou
	callstd 0x04
	closemessage
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_081F061D
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_081F062F
	compare_var_to_value 0x8008, 0x0002
	call_if 0x01, EventScript_JP_081F0641
	playse 0x0009
	@ event command: removeobject
	removeobject 0x0007
	setflag 0x02EA
	setflag 0x0332
	clearflag 0x02D2
	delay 0x001E
	setvar 0x408D, 0x0003
	setvar 0x4050, 0x0001
	savebgm 0x0000
	fadedefaultbgm
	releaseall
	end
EventScript_JP_081F05DD: @ 0x081F05DD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F05E8: @ 0x081F05E8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0007, LittlerootTown_BrendansHouse_2F_Movement_WalkInPlaceFastestLeft_WalkLeft_WalkInPlaceFastestUp_WalkUpX4
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F05F3: @ 0x081F05F3
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0007, LittlerootTown_BrendansHouse_2F_Movement_WalkUpX3
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F05FE: @ 0x081F05FE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0007, LittlerootTown_BrendansHouse_2F_Movement_WalkInPlaceFastestRight_WalkRight_WalkInPlaceFastestUp_WalkUpX4
	@ event command: waitmovement
	waitmovement 0x0000
	return
LittlerootTown_BrendansHouse_2F_Movement_WalkInPlaceFastestLeft_WalkLeft_WalkInPlaceFastestUp_WalkUpX4: @ 0x081F0609
	@ object movement sequence
	walk_in_place_fastest_left
	walk_left
	walk_in_place_fastest_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
LittlerootTown_BrendansHouse_2F_Movement_WalkUpX3: @ 0x081F0611
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	step_end
LittlerootTown_BrendansHouse_2F_Movement_WalkInPlaceFastestRight_WalkRight_WalkInPlaceFastestUp_WalkUpX4: @ 0x081F0615
	@ object movement sequence
	walk_in_place_fastest_right
	walk_right
	walk_in_place_fastest_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
EventScript_JP_081F061D: @ 0x081F061D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_BrendansHouse_2F_Movement_Delay16_Delay8_WalkInPlaceFastestRight
	@ event command: applymovement
	applymovement 0x0007, LittlerootTown_BrendansHouse_2F_Movement_WalkInPlaceFastestRight_WalkRight_WalkInPlaceFastestUp_WalkUpX2
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F062F: @ 0x081F062F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_BrendansHouse_2F_Movement_Delay16_Delay8_WalkInPlaceFastestRight_Delay16X2_WalkInPlaceFastestUp
	@ event command: applymovement
	applymovement 0x0007, LittlerootTown_BrendansHouse_2F_Movement_WalkInPlaceFastestRight_WalkRight_WalkInPlaceFastestUp_WalkUpX2_Then9Actions_WalkLeft_WalkInPlaceFastestUp_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F0641: @ 0x081F0641
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_BrendansHouse_2F_Movement_Delay16_Delay8_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x0007, LittlerootTown_BrendansHouse_2F_Movement_WalkInPlaceFastestLeft_WalkLeft_WalkInPlaceFastestUp_WalkUpX2
	@ event command: waitmovement
	waitmovement 0x0000
	return
LittlerootTown_BrendansHouse_2F_Movement_Delay16_Delay8_WalkInPlaceFastestRight: @ 0x081F0653
	@ object movement sequence
	delay_16
	delay_8
	walk_in_place_fastest_right
	step_end
LittlerootTown_BrendansHouse_2F_Movement_Delay16_Delay8_WalkInPlaceFastestRight_Delay16X2_WalkInPlaceFastestUp: @ 0x081F0657
	@ object movement sequence
	delay_16
	delay_8
	walk_in_place_fastest_right
	delay_16
	delay_16
	walk_in_place_fastest_up
	step_end
LittlerootTown_BrendansHouse_2F_Movement_Delay16_Delay8_WalkInPlaceFastestLeft: @ 0x081F065E
	@ object movement sequence
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end
LittlerootTown_BrendansHouse_2F_Movement_WalkInPlaceFastestRight_WalkRight_WalkInPlaceFastestUp_WalkUpX2: @ 0x081F0662
	@ object movement sequence
	walk_in_place_fastest_right
	walk_right
	walk_in_place_fastest_up
	walk_up
	walk_up
	step_end
LittlerootTown_BrendansHouse_2F_Movement_WalkInPlaceFastestRight_WalkRight_WalkInPlaceFastestUp_WalkUpX2_Then9Actions_WalkLeft_WalkInPlaceFastestUp_WalkUp: @ 0x081F0668
	@ object movement sequence
	walk_in_place_fastest_right
	walk_right
	walk_in_place_fastest_up
	walk_up
	walk_up
	walk_in_place_fastest_left
	walk_left
	walk_in_place_fastest_up
	walk_up
	step_end
LittlerootTown_BrendansHouse_2F_Movement_WalkInPlaceFastestLeft_WalkLeft_WalkInPlaceFastestUp_WalkUpX2: @ 0x081F0672
	@ object movement sequence
	walk_in_place_fastest_left
	walk_left
	walk_in_place_fastest_up
	walk_up
	walk_up
	step_end
