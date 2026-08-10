	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:412 RivalsHouse_1F_Text_DoYouHavePokemon
	.globl gText_Rom_1F0ABD
gText_Rom_1F0ABD: @ 0x081F0ABD
	.string "わーい おとなりさんだ!\p{STR_VAR_1}は もう\nじぶんの ポケモン もってるの?$"
	.if (. - gText_Rom_1F0ABD) > 0x25
	.error "gText_Rom_1F0ABD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0ABD) < 0x25
	.space 0x25 - (. - gText_Rom_1F0ABD)
	.endif
	@ analyzed canonical ROM range 0x081F0AE2-0x081F0DE7
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_081F0AE2: @ 0x081F0AE2
MapScripts_JP_081F0AE2: @ 0x081F0AE2
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F0AED
	.byte 0x04
	.4byte MapScriptTable_JP_081F0B69
	.byte 0
EventScript_JP_081F0AED: @ 0x081F0AED
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x408D
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081F0B56 @ EventScript_JP_081F0B56
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x408D
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x04
	.4byte 0x081F0B19 @ EventScript_JP_081F0B19
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4092
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08257EE8 @ EventScript_JP_08257EE8
	@ event command: call
	.byte 0x04
	.4byte 0x08245D90
	@ event command: setvar
	.byte 0x16
	.2byte 0x4089
	.2byte 0x0000
	@ event command: end
	.byte 0x02
EventScript_JP_081F0B19: @ 0x081F0B19
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0124
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0B32 @ EventScript_JP_081F0B32
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4084
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081F0B55 @ EventScript_JP_081F0B55
	@ event command: goto
	.byte 0x05
	.4byte 0x081F0B32 @ EventScript_JP_081F0B32
EventScript_JP_081F0B32: @ 0x081F0B32
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0B55 @ EventScript_JP_081F0B55
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081F0B55 @ EventScript_JP_081F0B55
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0008
	.2byte 0x0002
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0001
	.byte 0x07
	@ event command: return
	.byte 0x03
EventScript_JP_081F0B55: @ 0x081F0B55
	@ event command: return
	.byte 0x03
EventScript_JP_081F0B56: @ 0x081F0B56
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0B63 @ EventScript_JP_081F0B63
	@ event command: return
	.byte 0x03
EventScript_JP_081F0B63: @ 0x081F0B63
	@ event command: setvar
	.byte 0x16
	.2byte 0x408D
	.2byte 0x0002
	@ event command: return
	.byte 0x03
MapScriptTable_JP_081F0B69: @ 0x081F0B69
	@ conditional map script table
	.2byte 0x4089, 0x0000
	.4byte EventScript_JP_081F0B73
	.2byte 0
EventScript_JP_081F0B73: @ 0x081F0B73
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08245DBB
	@ event command: end
	.byte 0x02
EventScript_JP_081F0B80: @ 0x081F0B80
	@ event command: lockall
	.byte 0x69
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x408D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0B96 @ EventScript_JP_081F0B96
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F10B0 @ gText_Rom_1F10B0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F0B96: @ 0x081F0B96
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: addobject
	.byte 0x55
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F0CBB @ Movement_JP_081F0CBB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: playbgm
	.byte 0x33
	.2byte 0x019F
	.byte 0x01
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F0C06 @ EventScript_JP_081F0C06
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F0C35 @ EventScript_JP_081F0C35
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F0C64 @ EventScript_JP_081F0C64
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F0C8C @ EventScript_JP_081F0C8C
	@ event command: setvar
	.byte 0x16
	.2byte 0x408D
	.2byte 0x0003
	@ event command: setflag
	.byte 0x29
	.2byte 0x0332
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02D2
	@ event command: setvar
	.byte 0x16
	.2byte 0x4050
	.2byte 0x0001
	@ event command: savebgm
	.byte 0x34
	.2byte 0x0000
	@ event command: fadedefaultbgm
	.byte 0x35
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F0C06: @ 0x081F0C06
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F0CBF @ Movement_JP_081F0CBF
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
	.4byte 0x081F0DE8 @ gText_Rom_1F0DE8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F0CCF @ Movement_JP_081F0CCF
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F0CC5 @ Movement_JP_081F0CC5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F0C35: @ 0x081F0C35
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F0CD7 @ Movement_JP_081F0CD7
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
	.4byte 0x081F0DE8 @ gText_Rom_1F0DE8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F0CE3 @ Movement_JP_081F0CE3
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F0CDB @ Movement_JP_081F0CDB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F0C64: @ 0x081F0C64
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F0CE9 @ Movement_JP_081F0CE9
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
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
	.4byte 0x081F0DE8 @ gText_Rom_1F0DE8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F0CF0 @ Movement_JP_081F0CF0
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F0C8C: @ 0x081F0C8C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F0CF9 @ Movement_JP_081F0CF9
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
	.4byte 0x081F0DE8 @ gText_Rom_1F0DE8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F0D07 @ Movement_JP_081F0D07
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F0CFE @ Movement_JP_081F0CFE
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_081F0CBB: @ 0x081F0CBB
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_081F0CBF: @ 0x081F0CBF
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_081F0CC5: @ 0x081F0CC5
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081F0CCF: @ 0x081F0CCF
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_081F0CD7: @ 0x081F0CD7
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_081F0CDB: @ 0x081F0CDB
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081F0CE3: @ 0x081F0CE3
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_081F0CE9: @ 0x081F0CE9
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_081F0CF0: @ 0x081F0CF0
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
	.byte 0x14, 0x14, 0x28, 0xFE
Movement_JP_081F0CF9: @ 0x081F0CF9
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_081F0CFE: @ 0x081F0CFE
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081F0D07: @ 0x081F0D07
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
EventScript_JP_081F0D0D: @ 0x081F0D0D
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0124
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0D43 @ EventScript_JP_081F0D43
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0D2F @ EventScript_JP_081F0D2F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0D39 @ EventScript_JP_081F0D39
	@ event command: end
	.byte 0x02
EventScript_JP_081F0D2F: @ 0x081F0D2F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F0F40 @ gText_Rom_1F0F40
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F0D39: @ 0x081F0D39
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F108B @ gText_Rom_1F108B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F0D43: @ 0x081F0D43
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F0D69 @ EventScript_JP_081F0D69
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F0D7B @ EventScript_JP_081F0D7B
	@ event command: setflag
	.byte 0x29
	.2byte 0x0125
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F0D69: @ 0x081F0D69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0125
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0D8D @ EventScript_JP_081F0D8D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F10CD @ gText_Rom_1F10CD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F0D7B: @ 0x081F0D7B
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0125
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0D96 @ EventScript_JP_081F0D96
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F117C @ gText_Rom_1F117C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F0D8D: @ 0x081F0D8D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1142 @ gText_Rom_1F1142
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F0D96: @ 0x081F0D96
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F11E3 @ gText_Rom_1F11E3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F0D9F: @ 0x081F0D9F
	@ event command: lockall
	.byte 0x69
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0DB8 @ EventScript_JP_081F0DB8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0DC2 @ EventScript_JP_081F0DC2
	@ event command: end
	.byte 0x02
EventScript_JP_081F0DB8: @ 0x081F0DB8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243AA2 @ gText_Rom_243AA2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F0DC2: @ 0x081F0DC2
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00D6
	@ event command: playse
	.byte 0x2F
	.2byte 0x0004
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243B10 @ gText_Rom_243B10
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x00F9
	@ event command: waitstate
	.byte 0x27
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F0DDB: @ 0x081F0DDB
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: playse
	.byte 0x2F
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00D7
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
