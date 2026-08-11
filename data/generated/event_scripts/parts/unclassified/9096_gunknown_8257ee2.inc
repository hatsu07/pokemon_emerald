	.globl gUnknown_8257EE2
gUnknown_8257EE2: @ 0x08257EE2
	@ analyzed canonical ROM range 0x08257EE2-0x082585CE
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08257EE2: @ 0x08257EE2
EventScript_JP_08257EE2: @ 0x08257EE2
	animateflash 0x01
	setflashradius 0x0001
	end
EventScript_JP_08257EE8: @ 0x08257EE8
	setvar 0x4092, 0x0005
	return
EventScript_JP_08257EEE: @ 0x08257EEE
	loadword 0x00, gText_Rom_1EFA4C
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8004
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	compare_var_to_value 0x8005, 0x0000
	call_if 0x01, EventScript_JP_08257F37
	compare_var_to_value 0x8005, 0x0001
	call_if 0x01, EventScript_JP_08257F42
	loadword 0x00, gText_Rom_1EFA68
	callstd 0x04
	closemessage
	setvar 0x4092, 0x0004
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08257F4D @ Movement_JP_08257F4D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8004
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	releaseall
	end
EventScript_JP_08257F37: @ 0x08257F37
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08257F42: @ 0x08257F42
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
Movement_JP_08257F4D: @ 0x08257F4D
	@ object movement sequence
	walk_up
	step_end
EventScript_JP_08257F4F: @ 0x08257F4F
	loadword 0x00, gText_Rom_1EFAE5
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8004
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082582DA @ Movement_JP_082582DA
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	releaseall
	end
EventScript_JP_08257F6B: @ 0x08257F6B
	lockall
	setvar 0x8004, 0x0000
	goto EventScript_JP_08257F83
	.byte 0x02
EventScript_JP_08257F77: @ 0x08257F77
	lockall
	setvar 0x8004, 0x0001
	goto EventScript_JP_08257F83
	.byte 0x02
EventScript_JP_08257F83: @ 0x08257F83
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
	.byte 0x53
	.2byte 0x8008
	releaseall
	end
EventScript_JP_08257FC9: @ 0x08257FC9
	setvar 0x8008, 0x000E
	@ event command: addobject
	.byte 0x55
	.2byte 0x8008
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8008
	.4byte 0x0825803A @ Movement_JP_0825803A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1F023B
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8008
	.4byte 0x08258041 @ Movement_JP_08258041
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08257FF9: @ 0x08257FF9
	setvar 0x8008, 0x000E
	@ event command: addobject
	.byte 0x55
	.2byte 0x8008
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8008
	.4byte 0x08258045 @ Movement_JP_08258045
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1F023B
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8008
	.4byte 0x0825804C @ Movement_JP_0825804C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08258029: @ 0x08258029
	incrementgamestat 0x2D
	fadescreen 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x009B
	waitstate
	releaseall
	end
EventScript_JP_08258033: @ 0x08258033
	fadescreen 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x009A
	waitstate
	return
Movement_JP_0825803A: @ 0x0825803A
	@ object movement sequence
	delay_8
	walk_down
	walk_in_place_fastest_left
	delay_16
	delay_8
	walk_left
	step_end
Movement_JP_08258041: @ 0x08258041
	@ object movement sequence
	walk_right
	walk_up
	delay_8
	step_end
Movement_JP_08258045: @ 0x08258045
	@ object movement sequence
	delay_8
	walk_down
	walk_in_place_fastest_right
	delay_16
	delay_8
	walk_right
	step_end
Movement_JP_0825804C: @ 0x0825804C
	@ object movement sequence
	walk_left
	walk_up
	delay_8
	step_end
EventScript_JP_08258050: @ 0x08258050
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
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8005
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	call EventScript_JP_08258135
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082582D2 @ Movement_JP_082582D2
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playbgm 0x01C5, 0x00
	loadword 0x00, gText_Rom_1EFB33
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8005
	.4byte 0x082581A4 @ Movement_JP_082581A4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082582D8 @ Movement_JP_082582D8
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	call EventScript_JP_08258156
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1EFB52
	callstd 0x04
	loadword 0x00, gText_Rom_1EFB7A
	callstd 0x04
	closemessage
	setvar 0x4001, 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8005
	.4byte 0x082581AB @ Movement_JP_082581AB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	goto EventScript_JP_08258050
	.byte 0x02
EventScript_JP_08258135: @ 0x08258135
	playse 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8005
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8005
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1EFB12
	callstd 0x04
	closemessage
	return
EventScript_JP_08258156: @ 0x08258156
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1EFCF7
	callstd 0x04
	fadedefaultbgm
	@ event command: special
	.byte 0x25
	.2byte 0x003E
	setflag 0x0890
	delay 0x0023
	return
Movement_JP_08258173: @ 0x08258173
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_in_place_fastest_right
	step_end
Movement_JP_0825817B: @ 0x0825817B
	@ object movement sequence
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_in_place_fastest_left
	step_end
Movement_JP_08258183: @ 0x08258183
	@ object movement sequence
	walk_right
	step_end
Movement_JP_08258185: @ 0x08258185
	@ object movement sequence
	walk_left
	step_end
Movement_JP_08258187: @ 0x08258187
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
Movement_JP_08258190: @ 0x08258190
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
Movement_JP_08258199: @ 0x08258199
	@ object movement sequence
	walk_up
	walk_left
	walk_left
	step_end
Movement_JP_0825819D: @ 0x0825819D
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	step_end
	.byte 0x0A, 0x28, 0xFE
Movement_JP_082581A4: @ 0x082581A4
	@ object movement sequence
	walk_right
	walk_in_place_fastest_left
	step_end
	.byte 0x0A, 0x08, 0x28, 0xFE
Movement_JP_082581AB: @ 0x082581AB
	@ object movement sequence
	walk_right
	walk_down
	walk_in_place_fastest_left
	step_end
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
EventScript_JP_082582B7: @ 0x082582B7
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
Movement_JP_082582D2: @ 0x082582D2
	@ object movement sequence
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end
Movement_JP_082582D8: @ 0x082582D8
	@ object movement sequence
	walk_right
	step_end
Movement_JP_082582DA: @ 0x082582DA
	@ object movement sequence
	walk_up
	step_end
EventScript_JP_082582DC: @ 0x082582DC
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
	.byte 0x4F
	.2byte 0x8009
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playse 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8009
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8009
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
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
	.byte 0x53
	.2byte 0x8009
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
	.byte 0x25
	.2byte 0x01F3
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
	.byte 0x25
	.2byte 0x003E
	compare_var_to_value 0x8008, 0x0000
	call_if 0x01, EventScript_JP_08258572
	compare_var_to_value 0x8008, 0x0001
	call_if 0x01, EventScript_JP_08258587
	loadword 0x00, gText_Rom_1EFF49
	callstd 0x04
	multichoice 0x16, 0x08, 0x6C, 0x01
	copyvar 0x8004, 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x0128
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
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8009
	.4byte 0x0825859C @ Movement_JP_0825859C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_0825848B: @ 0x0825848B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8009
	.4byte 0x0825859F @ Movement_JP_0825859F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08258496: @ 0x08258496
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x08258173 @ Movement_JP_08258173
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8009
	.4byte 0x082585A2 @ Movement_JP_082585A2
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_082584AB: @ 0x082584AB
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x0825817B @ Movement_JP_0825817B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8009
	.4byte 0x082585A4 @ Movement_JP_082585A4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_082584C0: @ 0x082584C0
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082585B6 @ Movement_JP_082585B6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x082585B6 @ Movement_JP_082585B6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8009
	.4byte 0x082585A6 @ Movement_JP_082585A6
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_082584D9: @ 0x082584D9
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082585B6 @ Movement_JP_082585B6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x082585B6 @ Movement_JP_082585B6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8009
	.4byte 0x082585AB @ Movement_JP_082585AB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_082584F2: @ 0x082584F2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082585B0 @ Movement_JP_082585B0
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_082584FD: @ 0x082584FD
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082585BB @ Movement_JP_082585BB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08258508: @ 0x08258508
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082585C1 @ Movement_JP_082585C1
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_0825851D: @ 0x0825851D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082585C8 @ Movement_JP_082585C8
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08258532: @ 0x08258532
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x08258183 @ Movement_JP_08258183
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08258547: @ 0x08258547
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x08258185 @ Movement_JP_08258185
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_0825855C: @ 0x0825855C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x08258187 @ Movement_JP_08258187
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08258567: @ 0x08258567
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x08258190 @ Movement_JP_08258190
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08258572: @ 0x08258572
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x08258199 @ Movement_JP_08258199
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08258587: @ 0x08258587
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x0825819D @ Movement_JP_0825819D
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
Movement_JP_0825859C: @ 0x0825859C
	@ object movement sequence
	walk_right
	walk_right
	step_end
Movement_JP_0825859F: @ 0x0825859F
	@ object movement sequence
	walk_left
	walk_left
	step_end
Movement_JP_082585A2: @ 0x082585A2
	@ object movement sequence
	face_left
	step_end
Movement_JP_082585A4: @ 0x082585A4
	@ object movement sequence
	face_right
	step_end
Movement_JP_082585A6: @ 0x082585A6
	@ object movement sequence
	walk_down
	walk_right
	walk_down
	delay_8
	step_end
Movement_JP_082585AB: @ 0x082585AB
	@ object movement sequence
	walk_down
	walk_left
	walk_down
	delay_8
	step_end
Movement_JP_082585B0: @ 0x082585B0
	@ object movement sequence
	delay_16
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_left
	step_end
Movement_JP_082585B6: @ 0x082585B6
	@ object movement sequence
	delay_8
	delay_16
	delay_16
	walk_in_place_fastest_down
	step_end
Movement_JP_082585BB: @ 0x082585BB
	@ object movement sequence
	delay_16
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_right
	step_end
Movement_JP_082585C1: @ 0x082585C1
	@ object movement sequence
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
Movement_JP_082585C8: @ 0x082585C8
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
	.globl gUnknown_82585CF
gUnknown_82585CF: @ 0x082585CF
	@ analyzed canonical ROM range 0x082585CF-0x082585D7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082585CF: @ 0x082585CF
EventScript_JP_082585CF: @ 0x082585CF
	loadword 0x00, gText_Rom_1EFD5A
	callstd 0x03
	end
