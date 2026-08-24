	@ field-script:0x2579C2 FieldScriptText_257DF6
	.globl gText_Rom_257DF6
gText_Rom_257DF6: @ 0x08257DF6
	.string "はいよ　たしかに！\nじゃあ　ポケモンを　つれていきなさい！"
	.byte EOS
	.if (. - gText_Rom_257DF6) > 0x1e
	.error "gText_Rom_257DF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257DF6) < 0x1e
	.space 0x1e - (. - gText_Rom_257DF6)
	.endif
	@ field-script:0x2579D0 FieldScriptText_257E14
	.globl gText_Rom_257E14
gText_Rom_257E14: @ 0x08257E14
	.string "{0xFD}{0x01}は　そだてや　ばあさんから\n{0xFD}{0x02}を　ひきとった！"
	.byte EOS
	.if (. - gText_Rom_257E14) > 0x1b
	.error "gText_Rom_257E14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257E14) < 0x1b
	.space 0x1b - (. - gText_Rom_257E14)
	.endif
	@ field-script:0x2578B8 FieldScriptText_257E2F
	.globl gText_Rom_257E2F
gText_Rom_257E2F: @ 0x08257E2F
	.string "おや？　ポケモンが\n1ぴき　しか　いないようだな\pまた　きなさいよ"
	.byte EOS
	.if (. - gText_Rom_257E2F) > 0x22
	.error "gText_Rom_257E2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257E2F) < 0x22
	.space 0x22 - (. - gText_Rom_257E2F)
	.endif
	@ field-script:0x25791F FieldScriptText_257E51
	.globl gText_Rom_257E51
gText_Rom_257E51: @ 0x08257E51
	.string "ポケモンを　ひきとるかい？"
	.byte EOS
	.if (. - gText_Rom_257E51) > 0xe
	.error "gText_Rom_257E51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257E51) < 0xe
	.space 0xe - (. - gText_Rom_257E51)
	.endif
	@ field-script:0x2578C2 FieldScriptText_257E5F
	.globl gText_Rom_257E5F
gText_Rom_257E5F: @ 0x08257E5F
	.string "その　ポケモンを　あずけると\nたたかえなく　なるぞ\pまた　きなさいよ"
	.byte EOS
	.if (. - gText_Rom_257E5F) > 0x23
	.error "gText_Rom_257E5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257E5F) < 0x23
	.space 0x23 - (. - gText_Rom_257E5F)
	.endif
	@ field-script:0x257A8C FieldScriptText_257E82
	.globl gText_Rom_257E82
gText_Rom_257E82: @ 0x08257E82
	.string "おや…？"
	.byte EOS
	.if (. - gText_Rom_257E82) > 0x5
	.error "gText_Rom_257E82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257E82) < 0x5
	.space 0x5 - (. - gText_Rom_257E82)
	.endif
	@ field-script:0x2578CC FieldScriptText_257E87
	.globl gText_Rom_257E87
gText_Rom_257E87: @ 0x08257E87
	.string "おや？　おまえさん\nその　ポケモンを　あずけると\lぜんぶで　ポケモンが　1ぴき　だけに\lなって　しまう　みたいじゃな\pもうちょっと　たくさん　つかまえてから\nきてみては　どうじゃ？"
	.byte EOS
	.if (. - gText_Rom_257E87) > 0x5b
	.error "gText_Rom_257E87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257E87) < 0x5b
	.space 0x5b - (. - gText_Rom_257E87)
	.endif
	@ analyzed canonical ROM range 0x08257EE2-0x082585CE
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08257EE2: @ 0x08257EE2
.globl EventScript_JP_08257EE2
EventScript_JP_08257EE2: @ 0x08257EE2
	animateflash 0x01
	setflashradius 0x0001
	end
EventScript_JP_08257EE8: @ 0x08257EE8
	setvar 0x4092, 0x0005
	return
EventScript_JP_08257EEE: @ 0x08257EEE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_1EFA4C
	callstd 0x04
	@ event command: applymovement
	applymovement 0x8004, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x8005, 0x0000
	call_if 0x01, EventScript_JP_08257F37
	compare_var_to_value 0x8005, 0x0001
	call_if 0x01, EventScript_JP_08257F42
	loadword 0x00, gText_Rom_1EFA68
	callstd 0x04
	closemessage
	setvar 0x4092, 0x0004
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_BrendansHouse_2F_Movement_WalkUp_1
	@ event command: applymovement
	applymovement 0x8004, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
EventScript_JP_08257F37: @ 0x08257F37
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08257F42: @ 0x08257F42
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
LittlerootTown_BrendansHouse_2F_Movement_WalkUp_1: @ 0x08257F4D
	@ object movement sequence
	walk_up
	step_end
EventScript_JP_08257F4F: @ 0x08257F4F
	loadword 0x00, gText_Rom_1EFAE5
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x8004, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_BrendansHouse_2F_Movement_WalkUp_2
	@ event command: waitmovement
	waitmovement 0x0000
	releaseall
	end
.globl EventScript_JP_08257F6B
EventScript_JP_08257F6B: @ 0x08257F6B
	lockall
	setvar 0x8004, 0x0000
	goto EventScript_JP_08257F83
	.byte 0x02
.globl EventScript_JP_08257F77
EventScript_JP_08257F77: @ 0x08257F77
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x8004, 0x0001
	goto EventScript_JP_08257F83
	.byte 0x02
EventScript_JP_08257F83: @ 0x08257F83
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x0051
	goto_if 0x01, EventScript_JP_08258029
	loadword 0x00, gText_Rom_1F0217
	callstd 0x04
	call EventScript_JP_08258033
	delay 0x001E
	setvar 0x4092, 0x0006
	setflag 0x0051
	setflag 0x02F2
	setflag 0x02F3
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_08257FC9
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_08257FF9
	playse 0x0009
	@ event command: removeobject
	removeobject 0x8008
	releaseall
	end
EventScript_JP_08257FC9: @ 0x08257FC9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8008, 0x000E
	@ event command: addobject
	addobject 0x8008
	@ event command: applymovement
	applymovement 0x8008, LittlerootHomeEventScripts_Movement_Delay8_WalkDown_WalkInPlaceFastestLeft_Delay16_Delay8_WalkLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F023B
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x8008, LittlerootHomeEventScripts_Movement_WalkRight_WalkUp_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08257FF9: @ 0x08257FF9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8008, 0x000E
	@ event command: addobject
	addobject 0x8008
	@ event command: applymovement
	applymovement 0x8008, LittlerootHomeEventScripts_Movement_Delay8_WalkDown_WalkInPlaceFastestRight_Delay16_Delay8_WalkRight
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F023B
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x8008, LittlerootHomeEventScripts_Movement_WalkLeft_WalkUp_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08258029: @ 0x08258029
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	incrementgamestat 0x2D
	fadescreen 0x01
	@ event command: special
	special Special_ViewWallClock
	waitstate
	releaseall
	end
EventScript_JP_08258033: @ 0x08258033
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	fadescreen 0x01
	@ event command: special
	special StartWallClock
	waitstate
	return
LittlerootHomeEventScripts_Movement_Delay8_WalkDown_WalkInPlaceFastestLeft_Delay16_Delay8_WalkLeft: @ 0x0825803A
	@ object movement sequence
	delay_8
	walk_down
	walk_in_place_fastest_left
	delay_16
	delay_8
	walk_left
	step_end
LittlerootHomeEventScripts_Movement_WalkRight_WalkUp_Delay8: @ 0x08258041
	@ object movement sequence
	walk_right
	walk_up
	delay_8
	step_end
LittlerootHomeEventScripts_Movement_Delay8_WalkDown_WalkInPlaceFastestRight_Delay16_Delay8_WalkRight: @ 0x08258045
	@ object movement sequence
	delay_8
	walk_down
	walk_in_place_fastest_right
	delay_16
	delay_8
	walk_right
	step_end
LittlerootHomeEventScripts_Movement_WalkLeft_WalkUp_Delay8: @ 0x0825804C
	@ object movement sequence
	walk_left
	walk_up
	delay_8
	step_end
EventScript_JP_08258050: @ 0x08258050
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x4092, 0x0007
	releaseall
	end
	.byte 0x4F, 0x05, 0x80, 0x2B, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x04, 0x35, 0x81, 0x25, 0x08, 0x4F
	.byte 0xFF, 0x00, 0xCA, 0x82, 0x25, 0x08, 0x51, 0x00, 0x00, 0x33, 0xC5, 0x01, 0x00, 0x0F, 0x00, 0x33
	.byte 0xFB, 0x1E, 0x08, 0x09, 0x04, 0x68, 0x4F, 0x05, 0x80, 0xA1, 0x81, 0x25, 0x08, 0x51, 0x00, 0x00
	.byte 0x4F, 0xFF, 0x00, 0xD0, 0x82, 0x25, 0x08, 0x51, 0x00, 0x00, 0x04, 0x56, 0x81, 0x25, 0x08, 0x4F
	.byte 0xFF, 0x00, 0x27, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00, 0x52, 0xFB, 0x1E, 0x08, 0x09
	.byte 0x04, 0x0F, 0x00, 0x7A, 0xFB, 0x1E, 0x08, 0x09, 0x04, 0x68, 0x16, 0x01, 0x40, 0x01, 0x00, 0x4F
	.byte 0x05, 0x80, 0xA7, 0x81, 0x25, 0x08, 0x51, 0x00, 0x00, 0x05, 0x50, 0x80, 0x25, 0x08, 0x02
EventScript_JP_082580C6: @ 0x082580C6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x8005, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	call EventScript_JP_08258135
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_BrendansHouse_2F_Movement_WalkDownX2_WalkRightX3
	@ event command: waitmovement
	waitmovement 0x0000
	playbgm 0x01C5, 0x00
	loadword 0x00, gText_Rom_1EFB33
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x8005, LittlerootHomeEventScripts_Movement_WalkRight_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_BrendansHouse_2F_Movement_WalkRight
	@ event command: waitmovement
	waitmovement 0x0000
	call EventScript_JP_08258156
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1EFB52
	callstd 0x04
	loadword 0x00, gText_Rom_1EFB7A
	callstd 0x04
	closemessage
	setvar 0x4001, 0x0001
	@ event command: applymovement
	applymovement 0x8005, LittlerootTown_BrendansHouse_2F_Movement_WalkRight_WalkDown_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	goto EventScript_JP_08258050
	.byte 0x02
EventScript_JP_08258135: @ 0x08258135
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	playse 0x0015
	@ event command: applymovement
	applymovement 0x8005, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x8005, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1EFB12
	callstd 0x04
	closemessage
	return
EventScript_JP_08258156: @ 0x08258156
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1EFCF7
	callstd 0x04
	fadedefaultbgm
	@ event command: special
	special TurnOffTVScreen
	setflag 0x0890
	delay 0x0023
	return
LittlerootHomeEventScripts_Movement_WalkUp_WalkRightX4_WalkDown_WalkInPlaceFastestRight: @ 0x08258173
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_in_place_fastest_right
	step_end
LittlerootHomeEventScripts_Movement_WalkUp_WalkLeftX4_WalkDown_WalkInPlaceFastestLeft: @ 0x0825817B
	@ object movement sequence
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_in_place_fastest_left
	step_end
LittlerootHomeEventScripts_Movement_WalkRight: @ 0x08258183
	@ object movement sequence
	walk_right
	step_end
LittlerootHomeEventScripts_Movement_WalkLeft: @ 0x08258185
	@ object movement sequence
	walk_left
	step_end
LittlerootHomeEventScripts_Movement_WalkInPlaceFastestLeft_Delay16X4_WalkInPlaceFastestRight_Delay16X2: @ 0x08258187
	@ object movement sequence
	walk_in_place_fastest_left
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_right
	delay_16
	delay_16
	step_end
LittlerootHomeEventScripts_Movement_WalkInPlaceFastestRight_Delay16X4_WalkInPlaceFastestLeft_Delay16X2: @ 0x08258190
	@ object movement sequence
	walk_in_place_fastest_right
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_left
	delay_16
	delay_16
	step_end
LittlerootHomeEventScripts_Movement_WalkUp_WalkLeftX2: @ 0x08258199
	@ object movement sequence
	walk_up
	walk_left
	walk_left
	step_end
LittlerootHomeEventScripts_Movement_WalkUp_WalkRightX2: @ 0x0825819D
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	step_end
	.globl LittlerootHomeEventScripts_Movement_WalkLeft_WalkInPlaceFastestRight
LittlerootHomeEventScripts_Movement_WalkLeft_WalkInPlaceFastestRight: @ 0x082581A1
	.byte 0x0A, 0x28, 0xFE
LittlerootHomeEventScripts_Movement_WalkRight_WalkInPlaceFastestLeft: @ 0x082581A4
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_right
	walk_in_place_fastest_left
	step_end
	.globl LittlerootHomeEventScripts_Movement_WalkLeft_WalkDown_WalkInPlaceFastestRight
LittlerootHomeEventScripts_Movement_WalkLeft_WalkDown_WalkInPlaceFastestRight: @ 0x082581A7
	.byte 0x0A, 0x08, 0x28, 0xFE
LittlerootTown_BrendansHouse_2F_Movement_WalkRight_WalkDown_WalkInPlaceFastestLeft: @ 0x082581AB
	@ object movement sequence
	walk_right
	walk_down
	walk_in_place_fastest_left
	step_end
.globl EventScript_JP_082581AF
EventScript_JP_082581AF: @ 0x082581AF
	lock
	faceplayer
	compare_var_to_value 0x4082, 0x0004
	goto_if 0x01, EventScript_JP_082581F9
	compare_var_to_value 0x408C, 0x0004
	goto_if 0x01, EventScript_JP_082581F9
	checkflag 0x012F
	goto_if 0x01, EventScript_JP_08258203
	checkflag 0x0052
	goto_if 0x01, EventScript_JP_08258270
	compare_var_to_value 0x4001, 0x0001
	goto_if 0x01, EventScript_JP_0825827E
	compare_var_to_value 0x4092, 0x0007
	goto_if 0x01, EventScript_JP_0825829A
	loadword 0x00, gText_Rom_1EFA4C
	callstd 0x04
	release
	end
EventScript_JP_082581F9: @ 0x082581F9
	loadword 0x00, gText_Rom_1EFC59
	callstd 0x04
	release
	end
EventScript_JP_08258203: @ 0x08258203
	checkflag 0x00D8
	goto_if 0x01, EventScript_JP_0825822D
	loadword 0x00, gText_Rom_1EFC89
	callstd 0x04
	closemessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, gText_Rom_1EFCD3
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x00D8
	release
	end
EventScript_JP_0825822D: @ 0x0825822D
	checkflag 0x086B
	goto_if 0x01, EventScript_JP_0825823B
	goto EventScript_JP_08258270
EventScript_JP_0825823B: @ 0x0825823B
	checkflag 0x0085
	goto_if 0x01, EventScript_JP_08258270
	loadword 0x00, gText_Rom_1EFC2D
	callstd 0x04
	setorcopyvar 0x8000, 0x00BD
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	loadword 0x00, gText_Rom_1EFC59
	callstd 0x04
	setflag 0x0085
	release
	end
EventScript_JP_08258270: @ 0x08258270
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_1EFBF0
	callstd 0x04
	goto EventScript_JP_08258288
	.byte 0x02
EventScript_JP_0825827E: @ 0x0825827E
	loadword 0x00, gText_Rom_1EFBCF
	callstd 0x04
	release
	end
EventScript_JP_08258288: @ 0x08258288
	closemessage
	call 0x0824310F
	incrementgamestat 0x10
	loadword 0x00, gText_Rom_1EFC1E
	callstd 0x04
	release
	end
EventScript_JP_0825829A: @ 0x0825829A
	loadword 0x00, gText_Rom_1EFBDC
	callstd 0x04
	release
	end
.globl EventScript_JP_082582A4
EventScript_JP_082582A4: @ 0x082582A4
	lock
	faceplayer
	waitse
	playmoncry 0x0043, 0x0000
	loadword 0x00, gText_Rom_1EFCE6
	callstd 0x04
	waitmoncry
	release
	end
.globl EventScript_JP_082582B7
EventScript_JP_082582B7: @ 0x082582B7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	waitse
	playmoncry 0x0043, 0x0000
	loadword 0x00, gText_Rom_1EFCEB
	callstd 0x04
	waitmoncry
	release
	end
	.byte 0x08, 0x08, 0x0A, 0x0A, 0x0A, 0xFE, 0x0A, 0xFE
LittlerootTown_BrendansHouse_2F_Movement_WalkDownX2_WalkRightX3: @ 0x082582D2
	@ object movement sequence
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end
LittlerootTown_BrendansHouse_2F_Movement_WalkRight: @ 0x082582D8
	@ object movement sequence
	walk_right
	step_end
LittlerootTown_BrendansHouse_2F_Movement_WalkUp_2: @ 0x082582DA
	@ object movement sequence
	walk_up
	step_end
EventScript_JP_082582DC: @ 0x082582DC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_08258460
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_08258470
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_082584F2
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_082584FD
	@ event command: applymovement
	applymovement 0x8009, PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x8009, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x8009, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x0014
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_08258480
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_0825848B
	loadword 0x00, gText_Rom_1EFDC8
	callstd 0x04
	setorcopyvar 0x8000, 0x0109
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	loadword 0x00, gText_Rom_1EFE2F
	callstd 0x04
	closemessage
	delay 0x0014
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_08258496
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_082584AB
	loadword 0x00, gText_Rom_1EFE5D
	callstd 0x04
	closemessage
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_082584C0
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_082584D9
	playse 0x0008
	@ event command: removeobject
	removeobject 0x8009
	setflag 0x0123
	delay 0x001E
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_08258532
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_08258547
	delay 0x0014
	loadword 0x00, gText_Rom_1EFE82
	callstd 0x04
	closemessage
	setflag 0x08BD
	@ event command: special
	special TurnOnTVScreen
	delay 0x003C
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_0825855C
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_08258567
	loadword 0x00, gText_Rom_1EFEC0
	callstd 0x04
	closemessage
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_08258508
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_0825851D
	loadword 0x00, gText_Rom_1EFED2
	callstd 0x04
	closemessage
	clearflag 0x08BD
	setflag 0x00FF
	@ event command: special
	special TurnOffTVScreen
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_08258572
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_08258587
	loadword 0x00, gText_Rom_1EFF49
	callstd 0x04
	multichoice 0x16, 0x08, 0x6C, 0x01
	copyvar 0x8004, 0x800D
	@ event command: special
	special InitRoamer
	copyvar 0x40D5, 0x800D
	loadword 0x00, gText_Rom_1EFF72
	callstd 0x04
	closemessage
	setvar 0x4082, 0x0004
	setvar 0x408C, 0x0004
	releaseall
	end
	.byte 0x29, 0xBD, 0x08, 0x03
EventScript_JP_08258460: @ 0x08258460
	setvar 0x8008, 0x0000
	setvar 0x8009, 0x0005
	setvar 0x800A, 0x0001
	return
EventScript_JP_08258470: @ 0x08258470
	setvar 0x8008, 0x0001
	setvar 0x8009, 0x0005
	setvar 0x800A, 0x0001
	return
EventScript_JP_08258480: @ 0x08258480
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x8009, LittlerootHomeEventScripts_Movement_WalkRightX2
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_0825848B: @ 0x0825848B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x8009, LittlerootHomeEventScripts_Movement_WalkLeftX2
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08258496: @ 0x08258496
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800A, LittlerootHomeEventScripts_Movement_WalkUp_WalkRightX4_WalkDown_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x8009, LittlerootHomeEventScripts_Movement_FaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_082584AB: @ 0x082584AB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800A, LittlerootHomeEventScripts_Movement_WalkUp_WalkLeftX4_WalkDown_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x8009, LittlerootHomeEventScripts_Movement_FaceRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_082584C0: @ 0x082584C0
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootHomeEventScripts_Movement_Delay8_Delay16X2_WalkInPlaceFastestDown
	@ event command: applymovement
	applymovement 0x800A, LittlerootHomeEventScripts_Movement_Delay8_Delay16X2_WalkInPlaceFastestDown
	@ event command: applymovement
	applymovement 0x8009, LittlerootHomeEventScripts_Movement_WalkDown_WalkRight_WalkDown_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_082584D9: @ 0x082584D9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootHomeEventScripts_Movement_Delay8_Delay16X2_WalkInPlaceFastestDown
	@ event command: applymovement
	applymovement 0x800A, LittlerootHomeEventScripts_Movement_Delay8_Delay16X2_WalkInPlaceFastestDown
	@ event command: applymovement
	applymovement 0x8009, LittlerootHomeEventScripts_Movement_WalkDown_WalkLeft_WalkDown_Delay8
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_082584F2: @ 0x082584F2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootHomeEventScripts_Movement_Delay16_WalkDownX3_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_082584FD: @ 0x082584FD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootHomeEventScripts_Movement_Delay16_WalkDownX3_WalkInPlaceFastestRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08258508: @ 0x08258508
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootHomeEventScripts_Movement_WalkUp_WalkLeftX4_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x800A, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_0825851D: @ 0x0825851D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, LittlerootHomeEventScripts_Movement_WalkUp_WalkRightX4_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x800A, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08258532: @ 0x08258532
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800A, LittlerootHomeEventScripts_Movement_WalkRight
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08258547: @ 0x08258547
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800A, LittlerootHomeEventScripts_Movement_WalkLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_0825855C: @ 0x0825855C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800A, LittlerootHomeEventScripts_Movement_WalkInPlaceFastestLeft_Delay16X4_WalkInPlaceFastestRight_Delay16X2
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08258567: @ 0x08258567
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800A, LittlerootHomeEventScripts_Movement_WalkInPlaceFastestRight_Delay16X4_WalkInPlaceFastestLeft_Delay16X2
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08258572: @ 0x08258572
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800A, LittlerootHomeEventScripts_Movement_WalkUp_WalkLeftX2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_08258587: @ 0x08258587
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800A, LittlerootHomeEventScripts_Movement_WalkUp_WalkRightX2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	waitmovement 0x0000
	return
LittlerootHomeEventScripts_Movement_WalkRightX2: @ 0x0825859C
	@ object movement sequence
	walk_right
	walk_right
	step_end
LittlerootHomeEventScripts_Movement_WalkLeftX2: @ 0x0825859F
	@ object movement sequence
	walk_left
	walk_left
	step_end
LittlerootHomeEventScripts_Movement_FaceLeft: @ 0x082585A2
	@ object movement sequence
	face_left
	step_end
LittlerootHomeEventScripts_Movement_FaceRight: @ 0x082585A4
	@ object movement sequence
	face_right
	step_end
LittlerootHomeEventScripts_Movement_WalkDown_WalkRight_WalkDown_Delay8: @ 0x082585A6
	@ object movement sequence
	walk_down
	walk_right
	walk_down
	delay_8
	step_end
LittlerootHomeEventScripts_Movement_WalkDown_WalkLeft_WalkDown_Delay8: @ 0x082585AB
	@ object movement sequence
	walk_down
	walk_left
	walk_down
	delay_8
	step_end
LittlerootHomeEventScripts_Movement_Delay16_WalkDownX3_WalkInPlaceFastestLeft: @ 0x082585B0
	@ object movement sequence
	delay_16
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_left
	step_end
LittlerootHomeEventScripts_Movement_Delay8_Delay16X2_WalkInPlaceFastestDown: @ 0x082585B6
	@ object movement sequence
	delay_8
	delay_16
	delay_16
	walk_in_place_fastest_down
	step_end
LittlerootHomeEventScripts_Movement_Delay16_WalkDownX3_WalkInPlaceFastestRight: @ 0x082585BB
	@ object movement sequence
	delay_16
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_right
	step_end
LittlerootHomeEventScripts_Movement_WalkUp_WalkLeftX4_WalkInPlaceFastestUp: @ 0x082585C1
	@ object movement sequence
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
LittlerootHomeEventScripts_Movement_WalkUp_WalkRightX4_WalkInPlaceFastestUp: @ 0x082585C8
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
	@ analyzed canonical ROM range 0x082585CF-0x082585D7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082585CF: @ 0x082585CF
.globl EventScript_JP_082585CF
EventScript_JP_082585CF: @ 0x082585CF
	loadword 0x00, gText_Rom_1EFD5A
	callstd 0x03
	end
