	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:153 SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory
	.globl gText_Rom_20FD23
gText_Rom_20FD23: @ 0x0820FD23
	.string "しじょう さいだいの ハスボー!\n{STR_VAR_2}の {STR_VAR_3}cmのやつ!\pタネボーより おおきい ハスボー\nいつでも ぼしゅうちゅう!$"
	.if (. - gText_Rom_20FD23) > 0x3d
	.error "gText_Rom_20FD23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FD23) < 0x3d
	.space 0x3d - (. - gText_Rom_20FD23)
	.endif
	@ analyzed canonical ROM range 0x0820FD60-0x0820FF52
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0820FD60: @ 0x0820FD60
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820FD6B
	.byte 0x02
	.4byte MapScriptTable_JP_0820FDAA
	.byte 0
EventScript_JP_0820FD6B: @ 0x0820FD6B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0010
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820FD8A @ EventScript_JP_0820FD8A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C0
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x05
	.4byte 0x0820FD9E @ EventScript_JP_0820FD9E
	@ event command: end
	.byte 0x02
EventScript_JP_0820FD8A: @ 0x0820FD8A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0003
	.2byte 0x0002
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0001
	.byte 0x08
	@ event command: setmaplayoutindex
	.byte 0xA7
	.2byte 0x01B9
	@ event command: return
	.byte 0x03
EventScript_JP_0820FD9E: @ 0x0820FD9E
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0002
	.2byte 0x0002
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0001
	.byte 0x0A
	@ event command: return
	.byte 0x03
MapScriptTable_JP_0820FDAA: @ 0x0820FDAA
	@ conditional map script table
	.2byte 0x40C0, 0x0001
	.4byte EventScript_JP_0820FDC4
	.2byte 0x40C0, 0x0002
	.4byte EventScript_JP_0820FDC4
	.2byte 0x40C0, 0x0003
	.4byte EventScript_JP_0820FDC4
	.2byte 0
EventScript_JP_0820FDC4: @ 0x0820FDC4
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0820FE2C @ Movement_JP_0820FE2C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0820FE2E @ Movement_JP_0820FE2E
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: moveobjectoffscreen
	.byte 0x64
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C0
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820FE11 @ EventScript_JP_0820FE11
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C0
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820FE1A @ EventScript_JP_0820FE1A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C0
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820FE23 @ EventScript_JP_0820FE23
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: setvar
	.byte 0x16
	.2byte 0x40C0
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820FE11: @ 0x0820FE11
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082100DA @ gText_Rom_2100DA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0820FE1A: @ 0x0820FE1A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210105 @ gText_Rom_210105
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0820FE23: @ 0x0820FE23
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082100AA @ gText_Rom_2100AA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
Movement_JP_0820FE2C: @ 0x0820FE2C
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_0820FE2E: @ 0x0820FE2E
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
EventScript_JP_0820FE31: @ 0x0820FE31
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0010
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820FE5B @ EventScript_JP_0820FE5B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820FE65 @ EventScript_JP_0820FE65
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FF53 @ gText_Rom_20FF53
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820FE5B: @ 0x0820FE5B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FF53 @ gText_Rom_20FF53
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820FE65: @ 0x0820FE65
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: special
	.byte 0x25
	.2byte 0x011C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FFC6 @ gText_Rom_20FFC6
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820FEEF @ EventScript_JP_0820FEEF
	@ event command: call
	.byte 0x04
	.4byte 0x0820FEFC @ EventScript_JP_0820FEFC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820FEEF @ EventScript_JP_0820FEEF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0821005E @ gText_Rom_21005E
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820FEEF @ EventScript_JP_0820FEEF
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: call
	.byte 0x04
	.4byte 0x082423E9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820FEEF @ EventScript_JP_0820FEEF
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: special
	.byte 0x25
	.2byte 0x00F8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210081 @ gText_Rom_210081
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820FF0B @ EventScript_JP_0820FF0B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820FF1D @ EventScript_JP_0820FF1D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820FF2F @ EventScript_JP_0820FF2F
	@ event command: warp
	.byte 0x39
	.byte 0x0F
	.byte 0x0E
	.byte 0xFF
	.2byte 0x0003
	.2byte 0x0001
	.byte 0x27, 0x6C, 0x02
EventScript_JP_0820FEEF: @ 0x0820FEEF
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820FFFA @ gText_Rom_20FFFA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820FEFC: @ 0x0820FEFC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0821001A @ gText_Rom_21001A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x0029
	@ event command: waitstate
	.byte 0x27
	@ event command: return
	.byte 0x03
EventScript_JP_0820FF0B: @ 0x0820FF0B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0820FF4D @ Movement_JP_0820FF4D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0820FF41 @ Movement_JP_0820FF41
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_0820FF1D: @ 0x0820FF1D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0820FF50 @ Movement_JP_0820FF50
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0820FF45 @ Movement_JP_0820FF45
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_0820FF2F: @ 0x0820FF2F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0820FF4D @ Movement_JP_0820FF4D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0820FF49 @ Movement_JP_0820FF49
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_0820FF41: @ 0x0820FF41
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0820FF45: @ 0x0820FF45
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0820FF49: @ 0x0820FF49
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0820FF4D: @ 0x0820FF4D
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_0820FF50: @ 0x0820FF50
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
