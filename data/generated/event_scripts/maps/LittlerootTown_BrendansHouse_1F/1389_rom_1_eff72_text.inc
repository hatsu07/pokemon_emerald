	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:432 PlayersHouse_1F_Text_StillUnknownPokemon
	.globl gText_Rom_1EFF72
gText_Rom_1EFF72: @ 0x081EFF72
	.string "ママ『へえー まだまだ\nしられていない ポケモンは いるのねえ$"
	.if (. - gText_Rom_1EFF72) > 0x20
	.error "gText_Rom_1EFF72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFF72) < 0x20
	.space 0x20 - (. - gText_Rom_1EFF72)
	.endif
	@ analyzed canonical ROM range 0x081EFF92-0x081F0216
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_081EFF92: @ 0x081EFF92
MapScripts_JP_081EFF92: @ 0x081EFF92
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081EFF9D
	.byte 0x04
	.4byte MapScriptTable_JP_081F0019
	.byte 0
EventScript_JP_081EFF9D: @ 0x081EFF9D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x408D
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081F0006 @ EventScript_JP_081F0006
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x408D
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x04
	.4byte 0x081EFFC9 @ EventScript_JP_081EFFC9
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
EventScript_JP_081EFFC9: @ 0x081EFFC9
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0124
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081EFFE2 @ EventScript_JP_081EFFE2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4084
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081F0005 @ EventScript_JP_081F0005
	@ event command: goto
	.byte 0x05
	.4byte 0x081EFFE2 @ EventScript_JP_081EFFE2
EventScript_JP_081EFFE2: @ 0x081EFFE2
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0005 @ EventScript_JP_081F0005
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
	.2byte 0x0000
	.2byte 0x0002
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0001
	.byte 0x07
	@ event command: return
	.byte 0x03
EventScript_JP_081F0005: @ 0x081F0005
	@ event command: return
	.byte 0x03
EventScript_JP_081F0006: @ 0x081F0006
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0013 @ EventScript_JP_081F0013
	@ event command: return
	.byte 0x03
EventScript_JP_081F0013: @ 0x081F0013
	@ event command: setvar
	.byte 0x16
	.2byte 0x408D
	.2byte 0x0002
	@ event command: return
	.byte 0x03
MapScriptTable_JP_081F0019: @ 0x081F0019
	@ conditional map script table
	.2byte 0x4089, 0x0000
	.4byte EventScript_JP_081F0023
	.2byte 0
EventScript_JP_081F0023: @ 0x081F0023
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08245DBB
	@ event command: end
	.byte 0x02
EventScript_JP_081F0030: @ 0x081F0030
	@ event command: lockall
	.byte 0x69
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x408D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F0046 @ EventScript_JP_081F0046
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
EventScript_JP_081F0046: @ 0x081F0046
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: addobject
	.byte 0x55
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F016B @ Movement_JP_081F016B
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
	.2byte 0x01A5
	.byte 0x01
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F00B6 @ EventScript_JP_081F00B6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F00E5 @ EventScript_JP_081F00E5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F0114 @ EventScript_JP_081F0114
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F0143 @ EventScript_JP_081F0143
	@ event command: setvar
	.byte 0x16
	.2byte 0x408D
	.2byte 0x0003
	@ event command: setflag
	.byte 0x29
	.2byte 0x0331
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02F8
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
EventScript_JP_081F00B6: @ 0x081F00B6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F016F @ Movement_JP_081F016F
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
	.4byte 0x081F0F62 @ gText_Rom_1F0F62
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F017E @ Movement_JP_081F017E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F0175 @ Movement_JP_081F0175
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F00E5: @ 0x081F00E5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F0186 @ Movement_JP_081F0186
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
	.4byte 0x081F0F62 @ gText_Rom_1F0F62
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F0191 @ Movement_JP_081F0191
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F018A @ Movement_JP_081F018A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F0114: @ 0x081F0114
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F0197 @ Movement_JP_081F0197
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
	.4byte 0x081F0F62 @ gText_Rom_1F0F62
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F01A5 @ Movement_JP_081F01A5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F019C @ Movement_JP_081F019C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F0143: @ 0x081F0143
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F01AC @ Movement_JP_081F01AC
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
	.4byte 0x081F0F62 @ gText_Rom_1F0F62
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F01B3 @ Movement_JP_081F01B3
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_081F016B: @ 0x081F016B
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081F016F: @ 0x081F016F
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_081F0175: @ 0x081F0175
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081F017E: @ 0x081F017E
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081F0186: @ 0x081F0186
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_081F018A: @ 0x081F018A
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081F0191: @ 0x081F0191
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081F0197: @ 0x081F0197
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081F019C: @ 0x081F019C
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081F01A5: @ 0x081F01A5
	@ object movement sequence
	.byte 0x13 @ delay_8
	.byte 0x14 @ delay_16
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081F01AC: @ 0x081F01AC
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_081F01B3: @ 0x081F01B3
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
	.byte 0x14, 0x14, 0x27, 0xFE
EventScript_JP_081F01BC: @ 0x081F01BC
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
	.4byte 0x081F01D5 @ EventScript_JP_081F01D5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F01FB @ EventScript_JP_081F01FB
	@ event command: end
	.byte 0x02
EventScript_JP_081F01D5: @ 0x081F01D5
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
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
EventScript_JP_081F01EE: @ 0x081F01EE
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
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
EventScript_JP_081F01FB: @ 0x081F01FB
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
EventScript_JP_081F0205: @ 0x081F0205
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F02A6 @ gText_Rom_1F02A6
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081F020E: @ 0x081F020E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F0328 @ gText_Rom_1F0328
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
