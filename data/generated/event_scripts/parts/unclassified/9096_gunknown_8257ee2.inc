	.globl gUnknown_8257EE2
gUnknown_8257EE2: @ 0x08257EE2
	@ analyzed canonical ROM range 0x08257EE2-0x082585CE
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08257EE2: @ 0x08257EE2
EventScript_JP_08257EE2: @ 0x08257EE2
	@ event command: animateflash
	.byte 0x9A
	.byte 0x01
	@ event command: setflashradius
	.byte 0x99
	.2byte 0x0001
	@ event command: end
	.byte 0x02
EventScript_JP_08257EE8: @ 0x08257EE8
	@ event command: setvar
	.byte 0x16
	.2byte 0x4092
	.2byte 0x0005
	@ event command: return
	.byte 0x03
EventScript_JP_08257EEE: @ 0x08257EEE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFA4C @ gText_Rom_1EFA4C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8004
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08257F37 @ EventScript_JP_08257F37
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08257F42 @ EventScript_JP_08257F42
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFA68 @ gText_Rom_1EFA68
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4092
	.2byte 0x0004
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
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08257F37: @ 0x08257F37
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08257F42: @ 0x08257F42
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_08257F4D: @ 0x08257F4D
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_08257F4F: @ 0x08257F4F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFAE5 @ gText_Rom_1EFAE5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
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
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08257F6B: @ 0x08257F6B
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x08257F83 @ EventScript_JP_08257F83
	.byte 0x02
EventScript_JP_08257F77: @ 0x08257F77
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x08257F83 @ EventScript_JP_08257F83
	.byte 0x02
EventScript_JP_08257F83: @ 0x08257F83
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0051
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258029 @ EventScript_JP_08258029
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F0217 @ gText_Rom_1F0217
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x08258033 @ EventScript_JP_08258033
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setvar
	.byte 0x16
	.2byte 0x4092
	.2byte 0x0006
	@ event command: setflag
	.byte 0x29
	.2byte 0x0051
	@ event command: setflag
	.byte 0x29
	.2byte 0x02F2
	@ event command: setflag
	.byte 0x29
	.2byte 0x02F3
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08257FC9 @ EventScript_JP_08257FC9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08257FF9 @ EventScript_JP_08257FF9
	@ event command: playse
	.byte 0x2F
	.2byte 0x0009
	@ event command: removeobject
	.byte 0x53
	.2byte 0x8008
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08257FC9: @ 0x08257FC9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x000E
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
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F023B @ gText_Rom_1F023B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8008
	.4byte 0x08258041 @ Movement_JP_08258041
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08257FF9: @ 0x08257FF9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x000E
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
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F023B @ gText_Rom_1F023B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8008
	.4byte 0x0825804C @ Movement_JP_0825804C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08258029: @ 0x08258029
	@ event command: incrementgamestat
	.byte 0xC3
	.byte 0x2D
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x009B
	@ event command: waitstate
	.byte 0x27
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08258033: @ 0x08258033
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x009A
	@ event command: waitstate
	.byte 0x27
	@ event command: return
	.byte 0x03
Movement_JP_0825803A: @ 0x0825803A
	@ object movement sequence
	.byte 0x13 @ delay_8
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_08258041: @ 0x08258041
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
Movement_JP_08258045: @ 0x08258045
	@ object movement sequence
	.byte 0x13 @ delay_8
	.byte 0x08 @ walk_down
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_0825804C: @ 0x0825804C
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
EventScript_JP_08258050: @ 0x08258050
	@ event command: setvar
	.byte 0x16
	.2byte 0x4092
	.2byte 0x0007
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
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
	@ event command: call
	.byte 0x04
	.4byte 0x08258135 @ EventScript_JP_08258135
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082582D2 @ Movement_JP_082582D2
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01C5
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFB33 @ gText_Rom_1EFB33
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
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
	@ event command: call
	.byte 0x04
	.4byte 0x08258156 @ EventScript_JP_08258156
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFB52 @ gText_Rom_1EFB52
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFB7A @ gText_Rom_1EFB7A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8005
	.4byte 0x082581AB @ Movement_JP_082581AB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x08258050 @ EventScript_JP_08258050
	.byte 0x02
EventScript_JP_08258135: @ 0x08258135
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
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
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFB12 @ gText_Rom_1EFB12
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: return
	.byte 0x03
EventScript_JP_08258156: @ 0x08258156
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFCF7 @ gText_Rom_1EFCF7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: fadedefaultbgm
	.byte 0x35
	@ event command: special
	.byte 0x25
	.2byte 0x003E
	@ event command: setflag
	.byte 0x29
	.2byte 0x0890
	@ event command: delay
	.byte 0x28
	.2byte 0x0023
	@ event command: return
	.byte 0x03
Movement_JP_08258173: @ 0x08258173
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_0825817B: @ 0x0825817B
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_08258183: @ 0x08258183
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_08258185: @ 0x08258185
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_08258187: @ 0x08258187
	@ object movement sequence
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0xFE @ step_end
Movement_JP_08258190: @ 0x08258190
	@ object movement sequence
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0xFE @ step_end
Movement_JP_08258199: @ 0x08258199
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_0825819D: @ 0x0825819D
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
	.byte 0x0A, 0x28, 0xFE
Movement_JP_082581A4: @ 0x082581A4
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
	.byte 0x0A, 0x08, 0x28, 0xFE
Movement_JP_082581AB: @ 0x082581AB
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
EventScript_JP_082581AF: @ 0x082581AF
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4082
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082581F9 @ EventScript_JP_082581F9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x408C
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082581F9 @ EventScript_JP_082581F9
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x012F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258203 @ EventScript_JP_08258203
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0052
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258270 @ EventScript_JP_08258270
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825827E @ EventScript_JP_0825827E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4092
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825829A @ EventScript_JP_0825829A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFA4C @ gText_Rom_1EFA4C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082581F9: @ 0x082581F9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFC59 @ gText_Rom_1EFC59
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08258203: @ 0x08258203
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00D8
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825822D @ EventScript_JP_0825822D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFC89 @ gText_Rom_1EFC89
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x01CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFCD3 @ gText_Rom_1EFCD3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitfanfare
	.byte 0x32
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setflag
	.byte 0x29
	.2byte 0x00D8
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825822D: @ 0x0825822D
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086B
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0825823B @ EventScript_JP_0825823B
	@ event command: goto
	.byte 0x05
	.4byte 0x08258270 @ EventScript_JP_08258270
EventScript_JP_0825823B: @ 0x0825823B
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0085
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08258270 @ EventScript_JP_08258270
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFC2D @ gText_Rom_1EFC2D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00BD
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082430E0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFC59 @ gText_Rom_1EFC59
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0085
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08258270: @ 0x08258270
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFBF0 @ gText_Rom_1EFBF0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08258288 @ EventScript_JP_08258288
	.byte 0x02
EventScript_JP_0825827E: @ 0x0825827E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFBCF @ gText_Rom_1EFBCF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08258288: @ 0x08258288
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x0824310F
	@ event command: incrementgamestat
	.byte 0xC3
	.byte 0x10
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFC1E @ gText_Rom_1EFC1E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0825829A: @ 0x0825829A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFBDC @ gText_Rom_1EFBDC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082582A4: @ 0x082582A4
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0043
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFCE6 @ gText_Rom_1EFCE6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082582B7: @ 0x082582B7
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0043
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFCEB @ gText_Rom_1EFCEB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x08, 0x08, 0x0A, 0x0A, 0x0A, 0xFE, 0x0A, 0xFE
Movement_JP_082582D2: @ 0x082582D2
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_082582D8: @ 0x082582D8
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_082582DA: @ 0x082582DA
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_082582DC: @ 0x082582DC
	@ event command: lockall
	.byte 0x69
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08258460 @ EventScript_JP_08258460
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08258470 @ EventScript_JP_08258470
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082584F2 @ EventScript_JP_082584F2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082584FD @ EventScript_JP_082584FD
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8009
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
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
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08258480 @ EventScript_JP_08258480
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0825848B @ EventScript_JP_0825848B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFDC8 @ gText_Rom_1EFDC8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0109
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFE2F @ gText_Rom_1EFE2F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08258496 @ EventScript_JP_08258496
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082584AB @ EventScript_JP_082584AB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFE5D @ gText_Rom_1EFE5D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082584C0 @ EventScript_JP_082584C0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082584D9 @ EventScript_JP_082584D9
	@ event command: playse
	.byte 0x2F
	.2byte 0x0008
	@ event command: removeobject
	.byte 0x53
	.2byte 0x8009
	@ event command: setflag
	.byte 0x29
	.2byte 0x0123
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08258532 @ EventScript_JP_08258532
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08258547 @ EventScript_JP_08258547
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFE82 @ gText_Rom_1EFE82
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setflag
	.byte 0x29
	.2byte 0x08BD
	@ event command: special
	.byte 0x25
	.2byte 0x01F3
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0825855C @ EventScript_JP_0825855C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08258567 @ EventScript_JP_08258567
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFEC0 @ gText_Rom_1EFEC0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08258508 @ EventScript_JP_08258508
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0825851D @ EventScript_JP_0825851D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFED2 @ gText_Rom_1EFED2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x08BD
	@ event command: setflag
	.byte 0x29
	.2byte 0x00FF
	@ event command: special
	.byte 0x25
	.2byte 0x003E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08258572 @ EventScript_JP_08258572
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08258587 @ EventScript_JP_08258587
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFF49 @ gText_Rom_1EFF49
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: multichoice
	.byte 0x6F
	.byte 0x16
	.byte 0x08
	.byte 0x6C
	.byte 0x01
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x0128
	@ event command: copyvar
	.byte 0x19
	.2byte 0x40D5
	.2byte 0x800D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFF72 @ gText_Rom_1EFF72
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4082
	.2byte 0x0004
	@ event command: setvar
	.byte 0x16
	.2byte 0x408C
	.2byte 0x0004
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
	.byte 0x29, 0xBD, 0x08, 0x03
EventScript_JP_08258460: @ 0x08258460
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0005
	@ event command: setvar
	.byte 0x16
	.2byte 0x800A
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_08258470: @ 0x08258470
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0005
	@ event command: setvar
	.byte 0x16
	.2byte 0x800A
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_08258480: @ 0x08258480
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8009
	.4byte 0x0825859C @ Movement_JP_0825859C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_0825848B: @ 0x0825848B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8009
	.4byte 0x0825859F @ Movement_JP_0825859F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
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
	@ event command: return
	.byte 0x03
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
	@ event command: return
	.byte 0x03
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
	@ event command: return
	.byte 0x03
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
	@ event command: return
	.byte 0x03
EventScript_JP_082584F2: @ 0x082584F2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082585B0 @ Movement_JP_082585B0
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_082584FD: @ 0x082584FD
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082585BB @ Movement_JP_082585BB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
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
	@ event command: return
	.byte 0x03
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
	@ event command: return
	.byte 0x03
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
	@ event command: return
	.byte 0x03
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
	@ event command: return
	.byte 0x03
EventScript_JP_0825855C: @ 0x0825855C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x08258187 @ Movement_JP_08258187
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08258567: @ 0x08258567
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800A
	.4byte 0x08258190 @ Movement_JP_08258190
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
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
	@ event command: return
	.byte 0x03
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
	@ event command: return
	.byte 0x03
Movement_JP_0825859C: @ 0x0825859C
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_0825859F: @ 0x0825859F
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_082585A2: @ 0x082585A2
	@ object movement sequence
	.byte 0x02 @ face_left
	.byte 0xFE @ step_end
Movement_JP_082585A4: @ 0x082585A4
	@ object movement sequence
	.byte 0x03 @ face_right
	.byte 0xFE @ step_end
Movement_JP_082585A6: @ 0x082585A6
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
Movement_JP_082585AB: @ 0x082585AB
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
Movement_JP_082585B0: @ 0x082585B0
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_082585B6: @ 0x082585B6
	@ object movement sequence
	.byte 0x13 @ delay_8
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_082585BB: @ 0x082585BB
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_082585C1: @ 0x082585C1
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_082585C8: @ 0x082585C8
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
	.globl gUnknown_82585CF
gUnknown_82585CF: @ 0x082585CF
	@ analyzed canonical ROM range 0x082585CF-0x082585D7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082585CF: @ 0x082585CF
EventScript_JP_082585CF: @ 0x082585CF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFD5A @ gText_Rom_1EFD5A
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
