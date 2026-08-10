	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:207 SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou
	.globl gText_Rom_20E1F4
gText_Rom_20E1F4: @ 0x0820E1F4
	.string "ざんねん じゃったのう\nじゃが よい しょうぶ じゃったぞ!\lつぎこそは かてると よいのう$"
	.if (. - gText_Rom_20E1F4) > 0x2f
	.error "gText_Rom_20E1F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E1F4) < 0x2f
	.space 0x2f - (. - gText_Rom_20E1F4)
	.endif
	@ analyzed canonical ROM range 0x0820E223-0x0820E46A
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0820E223: @ 0x0820E223
EventScript_0820E223: @ 0x0820E223
	.byte 0x00
MapScripts_JP_0820E224: @ 0x0820E224
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_0820E2A3
	.byte 0x05
	.4byte EventScript_JP_0820E23F
	.byte 0x01
	.4byte EventScript_JP_0820E242
	.byte 0x03
	.4byte EventScript_JP_0820E239
	.byte 0
EventScript_JP_0820E239: @ 0x0820E239
	@ event command: setvar
	.byte 0x16
	.2byte 0x4022
	.2byte 0x0001
	@ event command: end
	.byte 0x02
EventScript_JP_0820E23F: @ 0x0820E23F
	@ event command: setstepcallback
	.byte 0xA6
	.byte 0x04
	@ event command: end
	.byte 0x02
EventScript_JP_0820E242: @ 0x0820E242
	@ event command: call
	.byte 0x04
	.4byte 0x0820E24B @ EventScript_JP_0820E24B
	@ event command: special
	.byte 0x25
	.2byte 0x0134
	@ event command: end
	.byte 0x02
EventScript_JP_0820E24B: @ 0x0820E24B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4022
	.2byte 0x0008
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820E2A2 @ EventScript_JP_0820E2A2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4022
	.2byte 0x001C
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820E290 @ EventScript_JP_0820E290
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4022
	.2byte 0x0043
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820E27E @ EventScript_JP_0820E27E
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0008
	.2byte 0x0004
	.2byte 0x0207
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0008
	.2byte 0x0005
	.2byte 0x0207
	.2byte 0x0000
EventScript_JP_0820E27E: @ 0x0820E27E
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0008
	.2byte 0x000A
	.2byte 0x0207
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0008
	.2byte 0x000B
	.2byte 0x0207
	.2byte 0x0000
EventScript_JP_0820E290: @ 0x0820E290
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0008
	.2byte 0x000F
	.2byte 0x0207
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0008
	.2byte 0x0010
	.2byte 0x0207
	.2byte 0x0000
EventScript_JP_0820E2A2: @ 0x0820E2A2
	@ event command: return
	.byte 0x03
MapScriptTable_JP_0820E2A3: @ 0x0820E2A3
	@ conditional map script table
	.2byte 0x4022, 0x0008
	.4byte EventScript_JP_0820E2C5
	.2byte 0x4022, 0x001C
	.4byte EventScript_JP_0820E2D9
	.2byte 0x4022, 0x0043
	.4byte EventScript_JP_0820E2ED
	.2byte 0x4022, 0x0000
	.4byte EventScript_JP_0820E301
	.2byte 0
EventScript_JP_0820E2C5: @ 0x0820E2C5
	@ event command: addvar
	.byte 0x17
	.2byte 0x4022
	.2byte 0x0001
	@ event command: delay
	.byte 0x28
	.2byte 0x0028
	@ event command: playse
	.byte 0x2F
	.2byte 0x0028
	@ event command: call
	.byte 0x04
	.4byte 0x0820E24B @ EventScript_JP_0820E24B
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: end
	.byte 0x02
EventScript_JP_0820E2D9: @ 0x0820E2D9
	@ event command: addvar
	.byte 0x17
	.2byte 0x4022
	.2byte 0x0001
	@ event command: delay
	.byte 0x28
	.2byte 0x0028
	@ event command: playse
	.byte 0x2F
	.2byte 0x0028
	@ event command: call
	.byte 0x04
	.4byte 0x0820E24B @ EventScript_JP_0820E24B
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: end
	.byte 0x02
EventScript_JP_0820E2ED: @ 0x0820E2ED
	@ event command: addvar
	.byte 0x17
	.2byte 0x4022
	.2byte 0x0001
	@ event command: delay
	.byte 0x28
	.2byte 0x0028
	@ event command: playse
	.byte 0x2F
	.2byte 0x0028
	@ event command: call
	.byte 0x04
	.4byte 0x0820E24B @ EventScript_JP_0820E24B
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: end
	.byte 0x02
EventScript_JP_0820E301: @ 0x0820E301
	@ event command: lockall
	.byte 0x69
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0820E31A @ Movement_JP_0820E31A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x002B
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: warphole
	.byte 0x3C
	.byte 0x0F
	.byte 0x01
	.byte 0x27, 0x02
Movement_JP_0820E31A: @ 0x0820E31A
	@ object movement sequence
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
EventScript_JP_0820E31C: @ 0x0820E31C
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x01
	.2byte 0x0110
	.2byte 0x0000
	.4byte 0x0820E56E @ gText_Rom_20E56E
	.4byte 0x0820E65F @ gText_Rom_20E65F
	.4byte 0x0820E35A @ EventScript_JP_0820E35A
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0039
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820E3FD @ EventScript_JP_0820E3FD
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00AC
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820E3CF @ EventScript_JP_0820E3CF
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086C
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820E3F3 @ EventScript_JP_0820E3F3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820E827 @ gText_Rom_20E827
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820E35A: @ 0x0820E35A
	@ event command: message
	.byte 0x67
	.4byte 0x0820E729 @ gText_Rom_20E729
	@ event command: waitmessage
	.byte 0x66
	@ event command: call
	.byte 0x04
	.4byte 0x0824310A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820E741 @ gText_Rom_20E741
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x04F7
	@ event command: setflag
	.byte 0x29
	.2byte 0x086E
	@ event command: setflag
	.byte 0x29
	.2byte 0x0356
	@ event command: setflag
	.byte 0x29
	.2byte 0x03CD
	@ event command: setflag
	.byte 0x29
	.2byte 0x0330
	@ event command: setvar
	.byte 0x16
	.2byte 0x405E
	.2byte 0x0006
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0347
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0008
	@ event command: call
	.byte 0x04
	.4byte 0x08242FCF
	@ event command: call
	.byte 0x04
	.4byte 0x0820E3AC @ EventScript_JP_0820E3AC
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
	.4byte 0x0820E80C @ gText_Rom_20E80C
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
	.2byte 0x01D9
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820E3AC: @ 0x0820E3AC
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0123
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
	.4byte 0x082430EA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820E7C1 @ gText_Rom_20E7C1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00AC
	@ event command: return
	.byte 0x03
EventScript_JP_0820E3CF: @ 0x0820E3CF
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0123
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
	.4byte 0x0820E7C1 @ gText_Rom_20E7C1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00AC
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820E3F3: @ 0x0820E3F3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820E892 @ gText_Rom_20E892
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820E3FD: @ 0x0820E3FD
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x07
	.2byte 0x0110
	.2byte 0x0000
	.4byte 0x0820E912 @ gText_Rom_20E912
	.4byte 0x0820E97B @ gText_Rom_20E97B
	.4byte 0x0820EA1D @ gText_Rom_20EA1D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820E99E @ gText_Rom_20E99E
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820E418: @ 0x0820E418
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F7
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820E42D @ EventScript_JP_0820E42D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820E46B @ gText_Rom_20E46B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820E42D: @ 0x0820E42D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820E50B @ gText_Rom_20E50B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820E437: @ 0x0820E437
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086E
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820E457 @ EventScript_JP_0820E457
	@ event command: goto
	.byte 0x05
	.4byte 0x0820E461 @ EventScript_JP_0820E461
	.byte 0x02
EventScript_JP_0820E447: @ 0x0820E447
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086E
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820E457 @ EventScript_JP_0820E457
	@ event command: goto
	.byte 0x05
	.4byte 0x0820E461 @ EventScript_JP_0820E461
	.byte 0x02
EventScript_JP_0820E457: @ 0x0820E457
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820E8F2 @ gText_Rom_20E8F2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820E461: @ 0x0820E461
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820E8E5 @ gText_Rom_20E8E5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
