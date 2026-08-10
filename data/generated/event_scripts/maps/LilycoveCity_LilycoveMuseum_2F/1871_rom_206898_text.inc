	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:275 LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon
	.globl gText_Rom_206898
gText_Rom_206898: @ 0x08206898
	.string "へえー! これって\nきみの ポケモンの えなんだ!\pそれって トレーナー として\nさいこうの しあわせ だよな!$"
	.if (. - gText_Rom_206898) > 0x39
	.error "gText_Rom_206898 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206898) < 0x39
	.space 0x39 - (. - gText_Rom_206898)
	.endif
	@ analyzed canonical ROM range 0x082068D1-0x082073CF
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_082068D1: @ 0x082068D1
MapScripts_JP_082068D1: @ 0x082068D1
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082068DC
	.byte 0x02
	.4byte MapScriptTable_JP_08206903
	.byte 0
EventScript_JP_082068DC: @ 0x082068DC
	@ event command: call
	.byte 0x04
	.4byte 0x08253F43 @ EventScript_JP_08253F43
	@ event command: call
	.byte 0x04
	.4byte 0x082068E7 @ EventScript_JP_082068E7
	@ event command: end
	.byte 0x02
EventScript_JP_082068E7: @ 0x082068E7
	@ event command: getpricereduction
	.byte 0x96
	.2byte 0x0004
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082068FC @ EventScript_JP_082068FC
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0369
	@ event command: setflag
	.byte 0x29
	.2byte 0x0340
	@ event command: return
	.byte 0x03
EventScript_JP_082068FC: @ 0x082068FC
	@ event command: setflag
	.byte 0x29
	.2byte 0x0369
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0340
	@ event command: return
	.byte 0x03
MapScriptTable_JP_08206903: @ 0x08206903
	@ conditional map script table
	.2byte 0x4099, 0x0001
	.4byte EventScript_JP_08206915
	.2byte 0x4099, 0x0002
	.4byte EventScript_JP_08206AE7
	.2byte 0
EventScript_JP_08206915: @ 0x08206915
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0307
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206924 @ EventScript_JP_08206924
	@ event command: setvar
	.byte 0x16
	.2byte 0x4099
	.2byte 0x0000
	@ event command: end
	.byte 0x02
EventScript_JP_08206924: @ 0x08206924
	@ event command: lockall
	.byte 0x69
	@ event command: addobject
	.byte 0x55
	.2byte 0x0004
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08206AC7 @ Movement_JP_08206AC7
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0004
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08206AD8 @ Movement_JP_08206AD8
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08207435 @ gText_Rom_207435
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: lockall
	.byte 0x69
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: drawcontestwinner
	.byte 0x77
	.byte 0x00
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082074A1 @ gText_Rom_2074A1
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820696A @ EventScript_JP_0820696A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082069A4 @ EventScript_JP_082069A4
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820696A: @ 0x0820696A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08207519 @ gText_Rom_207519
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: special
	.byte 0x25
	.2byte 0x0087
	@ event command: setvar
	.byte 0x16
	.2byte 0x4099
	.2byte 0x0000
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x005B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082069D4 @ EventScript_JP_082069D4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08206ACF @ Movement_JP_08206ACF
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	@ event command: call
	.byte 0x04
	.4byte 0x08206A20 @ EventScript_JP_08206A20
	@ event command: call
	.byte 0x04
	.4byte 0x08206A76 @ EventScript_JP_08206A76
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082069A4: @ 0x082069A4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082075D1 @ gText_Rom_2075D1
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820696A @ EventScript_JP_0820696A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820760A @ gText_Rom_20760A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08206ACF @ Movement_JP_08206ACF
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x4099
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082069D4: @ 0x082069D4
	@ event command: incrementgamestat
	.byte 0xC3
	.byte 0x2A
	@ event command: special
	.byte 0x25
	.2byte 0x0050
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08206ADA @ Movement_JP_08206ADA
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08206ADE @ Movement_JP_08206ADE
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820757C @ gText_Rom_20757C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082075A5 @ gText_Rom_2075A5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitfanfare
	.byte 0x32
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082075B4 @ gText_Rom_2075B4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082075CA @ gText_Rom_2075CA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: return
	.byte 0x03
EventScript_JP_08206A20: @ 0x08206A20
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x8004
	.2byte 0x0089
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x8004
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206A62 @ EventScript_JP_08206A62
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206A66 @ EventScript_JP_08206A66
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206A6A @ EventScript_JP_08206A6A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206A6E @ EventScript_JP_08206A6E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206A72 @ EventScript_JP_08206A72
	@ event command: return
	.byte 0x03
EventScript_JP_08206A62: @ 0x08206A62
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0308
	@ event command: return
	.byte 0x03
EventScript_JP_08206A66: @ 0x08206A66
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0309
	@ event command: return
	.byte 0x03
EventScript_JP_08206A6A: @ 0x08206A6A
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x030A
	@ event command: return
	.byte 0x03
EventScript_JP_08206A6E: @ 0x08206A6E
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x030B
	@ event command: return
	.byte 0x03
EventScript_JP_08206A72: @ 0x08206A72
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x030C
	@ event command: return
	.byte 0x03
EventScript_JP_08206A76: @ 0x08206A76
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x8011
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206AB3 @ EventScript_JP_08206AB3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206AB7 @ EventScript_JP_08206AB7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206ABB @ EventScript_JP_08206ABB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206ABF @ EventScript_JP_08206ABF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206AC3 @ EventScript_JP_08206AC3
	@ event command: return
	.byte 0x03
EventScript_JP_08206AB3: @ 0x08206AB3
	@ event command: setflag
	.byte 0x29
	.2byte 0x00A0
	@ event command: return
	.byte 0x03
EventScript_JP_08206AB7: @ 0x08206AB7
	@ event command: setflag
	.byte 0x29
	.2byte 0x00A1
	@ event command: return
	.byte 0x03
EventScript_JP_08206ABB: @ 0x08206ABB
	@ event command: setflag
	.byte 0x29
	.2byte 0x00A2
	@ event command: return
	.byte 0x03
EventScript_JP_08206ABF: @ 0x08206ABF
	@ event command: setflag
	.byte 0x29
	.2byte 0x00A3
	@ event command: return
	.byte 0x03
EventScript_JP_08206AC3: @ 0x08206AC3
	@ event command: setflag
	.byte 0x29
	.2byte 0x00A4
	@ event command: return
	.byte 0x03
Movement_JP_08206AC7: @ 0x08206AC7
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_08206ACF: @ 0x08206ACF
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_08206AD8: @ 0x08206AD8
	@ object movement sequence
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_08206ADA: @ 0x08206ADA
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_08206ADE: @ 0x08206ADE
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
EventScript_JP_08206AE7: @ 0x08206AE7
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0307
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206AF6 @ EventScript_JP_08206AF6
	@ event command: setvar
	.byte 0x16
	.2byte 0x4099
	.2byte 0x0000
	@ event command: end
	.byte 0x02
EventScript_JP_08206AF6: @ 0x08206AF6
	@ event command: lockall
	.byte 0x69
	@ event command: addobject
	.byte 0x55
	.2byte 0x000B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08206BF3 @ Movement_JP_08206BF3
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x000B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08206C05 @ Movement_JP_08206C05
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08207435 @ gText_Rom_207435
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: lockall
	.byte 0x69
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: drawcontestwinner
	.byte 0x77
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082074A1 @ gText_Rom_2074A1
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206B3A @ EventScript_JP_08206B3A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206B74 @ EventScript_JP_08206B74
	@ event command: end
	.byte 0x02
EventScript_JP_08206B3A: @ 0x08206B3A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08207519 @ gText_Rom_207519
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: special
	.byte 0x25
	.2byte 0x0087
	@ event command: setvar
	.byte 0x16
	.2byte 0x4099
	.2byte 0x0000
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x005B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08206BA4 @ EventScript_JP_08206BA4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08206BFC @ Movement_JP_08206BFC
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000B
	@ event command: call
	.byte 0x04
	.4byte 0x08206A20 @ EventScript_JP_08206A20
	@ event command: call
	.byte 0x04
	.4byte 0x08206A76 @ EventScript_JP_08206A76
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08206B74: @ 0x08206B74
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082075D1 @ gText_Rom_2075D1
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206B3A @ EventScript_JP_08206B3A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820760A @ gText_Rom_20760A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08206BFC @ Movement_JP_08206BFC
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x4099
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000B
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08206BA4: @ 0x08206BA4
	@ event command: incrementgamestat
	.byte 0xC3
	.byte 0x2A
	@ event command: setflag
	.byte 0x29
	.2byte 0x089B
	@ event command: special
	.byte 0x25
	.2byte 0x0050
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08206C07 @ Movement_JP_08206C07
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08206C0B @ Movement_JP_08206C0B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820757C @ gText_Rom_20757C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082075A5 @ gText_Rom_2075A5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitfanfare
	.byte 0x32
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082075B4 @ gText_Rom_2075B4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082075CA @ gText_Rom_2075CA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: return
	.byte 0x03
Movement_JP_08206BF3: @ 0x08206BF3
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_08206BFC: @ 0x08206BFC
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_08206C05: @ 0x08206C05
	@ object movement sequence
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_08206C07: @ 0x08206C07
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_08206C0B: @ 0x08206C0B
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
EventScript_JP_08206C14: @ 0x08206C14
	@ event command: special
	.byte 0x25
	.2byte 0x01B9
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x005A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206C8F @ EventScript_JP_08206C8F
	@ event command: call
	.byte 0x04
	.4byte 0x08248AF4 @ EventScript_JP_08248AF4
	@ event command: call
	.byte 0x04
	.4byte 0x08206D30 @ EventScript_JP_08206D30
	@ event command: special
	.byte 0x25
	.2byte 0x0053
	@ event command: call
	.byte 0x04
	.4byte 0x0821DD5F
	@ event command: call
	.byte 0x04
	.4byte 0x08206C45 @ EventScript_JP_08206C45
	@ event command: call
	.byte 0x04
	.4byte 0x08206CAF @ EventScript_JP_08206CAF
	@ event command: waitstate
	.byte 0x27
	@ event command: end
	.byte 0x02
EventScript_JP_08206C45: @ 0x08206C45
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x8010
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206C77 @ EventScript_JP_08206C77
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206C7D @ EventScript_JP_08206C7D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206C83 @ EventScript_JP_08206C83
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206C89 @ EventScript_JP_08206C89
	@ event command: return
	.byte 0x03
EventScript_JP_08206C77: @ 0x08206C77
	@ event command: setvar
	.byte 0x16
	.2byte 0x4088
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_08206C7D: @ 0x08206C7D
	@ event command: setvar
	.byte 0x16
	.2byte 0x4088
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_08206C83: @ 0x08206C83
	@ event command: setvar
	.byte 0x16
	.2byte 0x4088
	.2byte 0x0003
	@ event command: return
	.byte 0x03
EventScript_JP_08206C89: @ 0x08206C89
	@ event command: setvar
	.byte 0x16
	.2byte 0x4088
	.2byte 0x0004
	@ event command: return
	.byte 0x03
EventScript_JP_08206C8F: @ 0x08206C8F
	@ event command: setflag
	.byte 0x29
	.2byte 0x0307
	@ event command: copyvar
	.byte 0x19
	.2byte 0x4094
	.2byte 0x0001
	@ event command: giveitem
	.byte 0x44
	.2byte 0x010A
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8010
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x4099
	.2byte 0x0001
	@ event command: setflag
	.byte 0x29
	.2byte 0x089B
	@ event command: end
	.byte 0x02
EventScript_JP_08206CAF: @ 0x08206CAF
	@ event command: setflag
	.byte 0x29
	.2byte 0x0155
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x8011
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206CEF @ EventScript_JP_08206CEF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206CFC @ EventScript_JP_08206CFC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206D09 @ EventScript_JP_08206D09
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206D16 @ EventScript_JP_08206D16
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206D23 @ EventScript_JP_08206D23
	@ event command: return
	.byte 0x03
EventScript_JP_08206CEF: @ 0x08206CEF
	@ event command: setwarp
	.byte 0x3E
	.byte 0x19
	.byte 0x25
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206CFC: @ 0x08206CFC
	@ event command: setwarp
	.byte 0x3E
	.byte 0x19
	.byte 0x23
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206D09: @ 0x08206D09
	@ event command: setwarp
	.byte 0x3E
	.byte 0x19
	.byte 0x27
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206D16: @ 0x08206D16
	@ event command: setwarp
	.byte 0x3E
	.byte 0x19
	.byte 0x26
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206D23: @ 0x08206D23
	@ event command: setwarp
	.byte 0x3E
	.byte 0x19
	.byte 0x24
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0005
	.byte 0x25, 0x2B, 0x01, 0x27, 0x03
EventScript_JP_08206D30: @ 0x08206D30
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08206DB5 @ Movement_JP_08206DB5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0047
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x000C
	.2byte 0x0002
	.2byte 0x0221
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x000C
	.2byte 0x0003
	.2byte 0x0261
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08206DB9 @ Movement_JP_08206DB9
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0047
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x000C
	.2byte 0x0002
	.2byte 0x02D1
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x000C
	.2byte 0x0003
	.2byte 0x02D9
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08206DC6 @ Movement_JP_08206DC6
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08206DB2 @ Movement_JP_08206DB2
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824A10A @ gText_Rom_24A10A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08206DBD @ Movement_JP_08206DBD
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08206DA8 @ Movement_JP_08206DA8
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: return
	.byte 0x03
Movement_JP_08206DA8: @ 0x08206DA8
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x13 @ delay_8
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08206DB2: @ 0x08206DB2
	@ object movement sequence
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_08206DB5: @ 0x08206DB5
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_08206DB9: @ 0x08206DB9
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_08206DBD: @ 0x08206DBD
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x13 @ delay_8
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08206DC6: @ 0x08206DC6
	@ object movement sequence
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
EventScript_JP_08206DC8: @ 0x08206DC8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08207640 @ gText_Rom_207640
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08206DD1: @ 0x08206DD1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08207692 @ gText_Rom_207692
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08206DDA: @ 0x08206DDA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082076BA @ gText_Rom_2076BA
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08206DE3: @ 0x08206DE3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082076E6 @ gText_Rom_2076E6
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08206DEC: @ 0x08206DEC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820771C @ gText_Rom_20771C
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08206DF5: @ 0x08206DF5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820775B @ gText_Rom_20775B
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08206DFE: @ 0x08206DFE
	@ event command: lockall
	.byte 0x69
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: drawcontestwinner
	.byte 0x77
	.byte 0x01
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08206E05: @ 0x08206E05
	@ event command: lockall
	.byte 0x69
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: drawcontestwinner
	.byte 0x77
	.byte 0x02
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08206E0C: @ 0x08206E0C
	@ event command: lockall
	.byte 0x69
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: drawcontestwinner
	.byte 0x77
	.byte 0x03
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08206E13: @ 0x08206E13
	@ event command: lockall
	.byte 0x69
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: drawcontestwinner
	.byte 0x77
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08206E1A: @ 0x08206E1A
	@ event command: lockall
	.byte 0x69
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: drawcontestwinner
	.byte 0x77
	.byte 0x05
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08206E21: @ 0x08206E21
	@ event command: lockall
	.byte 0x69
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: drawcontestwinner
	.byte 0x77
	.byte 0x06
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08206E28: @ 0x08206E28
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082587AE @ gText_Rom_2587AE
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08206E31: @ 0x08206E31
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082587BA @ gText_Rom_2587BA
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08206E3A: @ 0x08206E3A
	@ event command: lockall
	.byte 0x69
	@ event command: special
	.byte 0x25
	.2byte 0x0103
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: special
	.byte 0x25
	.2byte 0x0209
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08206E44: @ 0x08206E44
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: special
	.byte 0x25
	.2byte 0x0209
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08206E58: @ 0x08206E58
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274705 @ gText_Rom_274705
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08206EB9 @ EventScript_JP_08206EB9
	.byte 0x02
EventScript_JP_08206E68: @ 0x08206E68
	@ event command: lock
	.byte 0x6A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827495B @ gText_Rom_27495B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08206E73: @ 0x08206E73
	@ event command: lock
	.byte 0x6A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274961 @ gText_Rom_274961
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08206E7E: @ 0x08206E7E
	@ event command: lock
	.byte 0x6A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274966 @ gText_Rom_274966
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08206E89: @ 0x08206E89
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827496C @ gText_Rom_27496C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08206EB9 @ EventScript_JP_08206EB9
	.byte 0x02
EventScript_JP_08206E99: @ 0x08206E99
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274990 @ gText_Rom_274990
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08206EB9 @ EventScript_JP_08206EB9
	.byte 0x02
EventScript_JP_08206EA9: @ 0x08206EA9
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082749E1 @ gText_Rom_2749E1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08206EB9 @ EventScript_JP_08206EB9
	.byte 0x02
EventScript_JP_08206EB9: @ 0x08206EB9
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08206EC6: @ 0x08206EC6
	@ event command: special
	.byte 0x25
	.2byte 0x01B9
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824A6FB @ gText_Rom_24A6FB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08206ED9 @ EventScript_JP_08206ED9
	.byte 0x02
EventScript_JP_08206ED9: @ 0x08206ED9
	@ event command: message
	.byte 0x67
	.4byte 0x0824A744 @ gText_Rom_24A744
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x00
	.byte 0x00
	.byte 0x02
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206F16 @ EventScript_JP_08206F16
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206FCD @ EventScript_JP_08206FCD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820703F @ EventScript_JP_0820703F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820703F @ EventScript_JP_0820703F
	@ event command: end
	.byte 0x02
EventScript_JP_08206F16: @ 0x08206F16
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824A50F @ gText_Rom_24A50F
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
	.4byte 0x0820703F @ EventScript_JP_0820703F
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
	.4byte 0x0820703F @ EventScript_JP_0820703F
	@ event command: message
	.byte 0x67
	.4byte 0x0824AB68 @ gText_Rom_24AB68
	@ event command: waitmessage
	.byte 0x66
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x400D
	.2byte 0x019C
	@ event command: multichoice
	.byte 0x6F
	.byte 0x00
	.byte 0x00
	.byte 0x55
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206F7B @ EventScript_JP_08206F7B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206F86 @ EventScript_JP_08206F86
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820703F @ EventScript_JP_0820703F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820703F @ EventScript_JP_0820703F
	@ event command: end
	.byte 0x02
EventScript_JP_08206F7B: @ 0x08206F7B
	@ event command: setvar
	.byte 0x16
	.2byte 0x400C
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x08206F9C @ EventScript_JP_08206F9C
	.byte 0x02
EventScript_JP_08206F86: @ 0x08206F86
	@ event command: setvar
	.byte 0x16
	.2byte 0x400C
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082071BC @ EventScript_JP_082071BC
	@ event command: goto
	.byte 0x05
	.4byte 0x08206F9C @ EventScript_JP_08206F9C
	.byte 0x02
EventScript_JP_08206F9C: @ 0x08206F9C
	@ event command: message
	.byte 0x67
	.4byte 0x0824A755 @ gText_Rom_24A755
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x00
	.byte 0x00
	.byte 0x04
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820703F @ EventScript_JP_0820703F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820703F @ EventScript_JP_0820703F
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8011
	.2byte 0x800D
	@ event command: goto
	.byte 0x05
	.4byte 0x0820704C @ EventScript_JP_0820704C
	.byte 0x02
EventScript_JP_08206FCD: @ 0x08206FCD
	@ event command: message
	.byte 0x67
	.4byte 0x0824A734 @ gText_Rom_24A734
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x00
	.byte 0x00
	.byte 0x54
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08207015 @ EventScript_JP_08207015
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08207023 @ EventScript_JP_08207023
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08207031 @ EventScript_JP_08207031
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206ED9 @ EventScript_JP_08206ED9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206ED9 @ EventScript_JP_08206ED9
	@ event command: end
	.byte 0x02
EventScript_JP_08207015: @ 0x08207015
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824A86C @ gText_Rom_24A86C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08206FCD @ EventScript_JP_08206FCD
	.byte 0x02
EventScript_JP_08207023: @ 0x08207023
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824A9B5 @ gText_Rom_24A9B5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08206FCD @ EventScript_JP_08206FCD
	.byte 0x02
EventScript_JP_08207031: @ 0x08207031
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824AA8A @ gText_Rom_24AA8A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08206FCD @ EventScript_JP_08206FCD
	.byte 0x02
EventScript_JP_0820703F: @ 0x0820703F
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824A52D @ gText_Rom_24A52D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820704C: @ 0x0820704C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824A7AE @ gText_Rom_24A7AE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8010
	.2byte 0x0000
	@ event command: choosecontestmon
	.byte 0x8B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x00FF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820703F @ EventScript_JP_0820703F
	@ event command: special
	.byte 0x25
	.2byte 0x0054
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082070A0 @ EventScript_JP_082070A0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082070CA @ EventScript_JP_082070CA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082070CA @ EventScript_JP_082070CA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082070AE @ EventScript_JP_082070AE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082070BC @ EventScript_JP_082070BC
	@ event command: end
	.byte 0x02
EventScript_JP_082070A0: @ 0x082070A0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08249FDD @ gText_Rom_249FDD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820704C @ EventScript_JP_0820704C
	.byte 0x02
EventScript_JP_082070AE: @ 0x082070AE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824A790 @ gText_Rom_24A790
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820704C @ EventScript_JP_0820704C
	.byte 0x02
EventScript_JP_082070BC: @ 0x082070BC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824A769 @ gText_Rom_24A769
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820704C @ EventScript_JP_0820704C
	.byte 0x02
EventScript_JP_082070CA: @ 0x082070CA
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8008
	.2byte 0x8004
	@ event command: goto
	.byte 0x05
	.4byte 0x082070D5 @ EventScript_JP_082070D5
	.byte 0x02
EventScript_JP_082070D5: @ 0x082070D5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820720B @ EventScript_JP_0820720B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x0820703F @ EventScript_JP_0820703F
	@ event command: message
	.byte 0x67
	.4byte 0x0824A65D @ gText_Rom_24A65D
	@ event command: waitmessage
	.byte 0x66
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400C
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820717B @ EventScript_JP_0820717B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400C
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08207180 @ EventScript_JP_08207180
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x400C
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x0820703F @ EventScript_JP_0820703F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08207193 @ EventScript_JP_08207193
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08207193 @ EventScript_JP_08207193
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820703F @ EventScript_JP_0820703F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082071AF @ EventScript_JP_082071AF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x000A
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082071A1 @ EventScript_JP_082071A1
	@ event command: message3
	.byte 0xDB
	.4byte 0x0824A60C @ gText_Rom_24A60C
	@ event command: contestlinktransfer
	.byte 0x8E
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x8004
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082071D7 @ EventScript_JP_082071D7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08207185 @ EventScript_JP_08207185
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082071C9 @ EventScript_JP_082071C9
	@ event command: end
	.byte 0x02
EventScript_JP_0820717B: @ 0x0820717B
	@ event command: special
	.byte 0x25
	.2byte 0x01BA
	@ event command: waitstate
	.byte 0x27
	@ event command: return
	.byte 0x03
EventScript_JP_08207180: @ 0x08207180
	@ event command: special
	.byte 0x25
	.2byte 0x005C
	@ event command: waitstate
	.byte 0x27
	@ event command: return
	.byte 0x03
EventScript_JP_08207185: @ 0x08207185
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824A629 @ gText_Rom_24A629
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820703F @ EventScript_JP_0820703F
	.byte 0x02
EventScript_JP_08207193: @ 0x08207193
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824A646 @ gText_Rom_24A646
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820703F @ EventScript_JP_0820703F
	.byte 0x02
EventScript_JP_082071A1: @ 0x082071A1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824A801 @ gText_Rom_24A801
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820703F @ EventScript_JP_0820703F
	.byte 0x02
EventScript_JP_082071AF: @ 0x082071AF
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08247D67 @ gText_Rom_247D67
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082071BC: @ 0x082071BC
	@ event command: special
	.byte 0x25
	.2byte 0x001F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824AB11 @ gText_Rom_24AB11
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082071C9: @ 0x082071C9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824A619 @ gText_Rom_24A619
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820703F @ EventScript_JP_0820703F
	.byte 0x02
EventScript_JP_082071D7: @ 0x082071D7
	@ event command: special
	.byte 0x25
	.2byte 0x004D
	@ event command: addvar
	.byte 0x17
	.2byte 0x8004
	.2byte 0x0001
	@ event command: buffernumberstring
	.byte 0x83
	.byte 0x01
	.2byte 0x8004
	@ event command: messageautoscroll
	.byte 0x9B
	.4byte 0x0824A6AA @ gText_Rom_24A6AA
	@ event command: waitmessage
	.byte 0x66
	@ event command: subvar
	.byte 0x18
	.2byte 0x8004
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x08207309 @ EventScript_JP_08207309
	@ event command: setvar
	.byte 0x16
	.2byte 0x4086
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x0056
	@ event command: setvar
	.byte 0x16
	.2byte 0x4088
	.2byte 0x0005
	@ event command: setvar
	.byte 0x16
	.2byte 0x8010
	.2byte 0x0003
	@ event command: call
	.byte 0x04
	.4byte 0x08206CAF @ EventScript_JP_08206CAF
	@ event command: end
	.byte 0x02
EventScript_JP_0820720B: @ 0x0820720B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8011
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08207248 @ EventScript_JP_08207248
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8011
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820724E @ EventScript_JP_0820724E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8011
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08207254 @ EventScript_JP_08207254
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8011
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820725A @ EventScript_JP_0820725A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8011
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08207260 @ EventScript_JP_08207260
	@ event command: goto
	.byte 0x05
	.4byte 0x08207266 @ EventScript_JP_08207266
	.byte 0x02
EventScript_JP_08207248: @ 0x08207248
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000F
	@ event command: return
	.byte 0x03
EventScript_JP_0820724E: @ 0x0820724E
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0010
	@ event command: return
	.byte 0x03
EventScript_JP_08207254: @ 0x08207254
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0011
	@ event command: return
	.byte 0x03
EventScript_JP_0820725A: @ 0x0820725A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0012
	@ event command: return
	.byte 0x03
EventScript_JP_08207260: @ 0x08207260
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0013
	@ event command: return
	.byte 0x03
EventScript_JP_08207266: @ 0x08207266
	@ event command: message
	.byte 0x67
	.4byte 0x0824A7C2 @ gText_Rom_24A7C2
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x10
	.byte 0x06
	.byte 0x51
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082072CB @ EventScript_JP_082072CB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082072A3 @ EventScript_JP_082072A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820703F @ EventScript_JP_0820703F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820703F @ EventScript_JP_0820703F
	@ event command: end
	.byte 0x02
EventScript_JP_082072A3: @ 0x082072A3
	@ event command: call
	.byte 0x04
	.4byte 0x082072F3 @ EventScript_JP_082072F3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082072FD @ EventScript_JP_082072FD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08207266 @ EventScript_JP_08207266
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0008
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082072A3 @ EventScript_JP_082072A3
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082072CB: @ 0x082072CB
	@ event command: call
	.byte 0x04
	.4byte 0x082072F8 @ EventScript_JP_082072F8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082072FD @ EventScript_JP_082072FD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08207266 @ EventScript_JP_08207266
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0008
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082072CB @ EventScript_JP_082072CB
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082072F3: @ 0x082072F3
	@ event command: special
	.byte 0x25
	.2byte 0x019D
	@ event command: waitstate
	.byte 0x27
	@ event command: return
	.byte 0x03
EventScript_JP_082072F8: @ 0x082072F8
	@ event command: special
	.byte 0x25
	.2byte 0x019E
	@ event command: waitstate
	.byte 0x27
	@ event command: return
	.byte 0x03
EventScript_JP_082072FD: @ 0x082072FD
	@ event command: message3
	.byte 0xDB
	.4byte 0x0824A60C @ gText_Rom_24A60C
	@ event command: contestlinktransfer
	.byte 0x8E
	@ event command: goto
	.byte 0x05
	.4byte 0x082071D7 @ EventScript_JP_082071D7
	.byte 0x02
EventScript_JP_08207309: @ 0x08207309
	@ event command: messageautoscroll
	.byte 0x9B
	.4byte 0x0824A6E8 @ gText_Rom_24A6E8
	@ event command: waitmessage
	.byte 0x66
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0820739D @ Movement_JP_0820739D
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0047
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0011
	.2byte 0x0002
	.2byte 0x0221
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0011
	.2byte 0x0003
	.2byte 0x0261
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x082073A1 @ Movement_JP_082073A1
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0047
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0011
	.2byte 0x0002
	.2byte 0x02D1
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0011
	.2byte 0x0003
	.2byte 0x02D9
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x082073AF @ Movement_JP_082073AF
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0820739B @ Movement_JP_0820739B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: messageautoscroll
	.byte 0x9B
	.4byte 0x0824A10A @ gText_Rom_24A10A
	@ event command: waitmessage
	.byte 0x66
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x08249BC1 @ EventScript_JP_08249BC1
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x082073A5 @ Movement_JP_082073A5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08207390 @ Movement_JP_08207390
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: return
	.byte 0x03
Movement_JP_08207390: @ 0x08207390
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x13 @ delay_8
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_0820739B: @ 0x0820739B
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_0820739D: @ 0x0820739D
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_082073A1: @ 0x082073A1
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_082073A5: @ 0x082073A5
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x13 @ delay_8
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_082073AF: @ 0x082073AF
	@ object movement sequence
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
EventScript_JP_082073B1: @ 0x082073B1
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x005F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082073C6 @ EventScript_JP_082073C6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082073D0 @ gText_Rom_2073D0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082073C6: @ 0x082073C6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082073F8 @ gText_Rom_2073F8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
