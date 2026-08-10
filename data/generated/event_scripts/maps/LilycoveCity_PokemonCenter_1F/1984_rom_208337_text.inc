	@ data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc:57 LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels
	.globl gText_Rom_208337
gText_Rom_208337: @ 0x08208337
	.string "ひとの ポケモンを うばったり\nいんせきを よこどり していた\lろくでもない やつら……\pちかごろ すがたを みなくなったよ$"
	.if (. - gText_Rom_208337) > 0x3f
	.error "gText_Rom_208337 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208337) < 0x3f
	.space 0x3f - (. - gText_Rom_208337)
	.endif
	@ analyzed canonical ROM range 0x08208376-0x08208B16
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08208376: @ 0x08208376
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
MapScripts_JP_0820839E: @ 0x0820839E
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_082083A9
	.byte 0x03
	.4byte EventScript_JP_08208426
	.byte 0
MapScriptTable_JP_082083A9: @ 0x082083A9
	@ conditional map script table
	.2byte 0x4095, 0x0001
	.4byte EventScript_JP_082083B3
	.2byte 0
EventScript_JP_082083B3: @ 0x082083B3
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208B19
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08208416 @ Movement_JP_08208416
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0820840E @ Movement_JP_0820840E
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
	.4byte 0x08208B22 @ gText_Rom_208B22
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0820841D @ Movement_JP_0820841D
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
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08208420 @ Movement_JP_08208420
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x4095
	.2byte 0x0002
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_0820840E: @ 0x0820840E
	@ object movement sequence
	.byte 0x13 @ delay_8
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_08208416: @ 0x08208416
	@ object movement sequence
	.byte 0x17 @ walk_fast_left
	.byte 0x17 @ walk_fast_left
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x17 @ walk_fast_left
	.byte 0x15 @ walk_fast_down
	.byte 0xFE @ step_end
Movement_JP_0820841D: @ 0x0820841D
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_08208420: @ 0x08208420
	@ object movement sequence
	.byte 0x49 @ jump_in_place_right
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x18 @ walk_fast_right
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
EventScript_JP_08208426: @ 0x08208426
	@ event command: call
	.byte 0x04
	.4byte 0x082084F3 @ EventScript_JP_082084F3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4095
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208611 @ EventScript_JP_08208611
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4095
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208442 @ EventScript_JP_08208442
	@ event command: end
	.byte 0x02
EventScript_JP_08208442: @ 0x08208442
	@ event command: special
	.byte 0x25
	.2byte 0x00A7
	@ event command: call
	.byte 0x04
	.4byte 0x0820850E @ EventScript_JP_0820850E
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085D1 @ EventScript_JP_082085D1
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0009
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085D9 @ EventScript_JP_082085D9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000A
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085E1 @ EventScript_JP_082085E1
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085E9 @ EventScript_JP_082085E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085F1 @ EventScript_JP_082085F1
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085F9 @ EventScript_JP_082085F9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000E
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08208601 @ EventScript_JP_08208601
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000F
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08208609 @ EventScript_JP_08208609
	@ event command: end
	.byte 0x02
EventScript_JP_082084F3: @ 0x082084F3
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0158
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820850A @ EventScript_JP_0820850A
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02DA
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x00D2
	@ event command: return
	.byte 0x03
EventScript_JP_0820850A: @ 0x0820850A
	@ event command: setflag
	.byte 0x29
	.2byte 0x02DA
	@ event command: return
	.byte 0x03
EventScript_JP_0820850E: @ 0x0820850E
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085C7 @ EventScript_JP_082085C7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0009
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085C7 @ EventScript_JP_082085C7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000A
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085C7 @ EventScript_JP_082085C7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085C7 @ EventScript_JP_082085C7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085C7 @ EventScript_JP_082085C7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085C7 @ EventScript_JP_082085C7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000E
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085C7 @ EventScript_JP_082085C7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000F
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082085C7 @ EventScript_JP_082085C7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x082085CD @ EventScript_JP_082085CD
	@ event command: return
	.byte 0x03
EventScript_JP_082085C7: @ 0x082085C7
	@ event command: subvar
	.byte 0x18
	.2byte 0x8005
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_082085CD: @ 0x082085CD
	@ event command: special
	.byte 0x25
	.2byte 0x0157
	@ event command: return
	.byte 0x03
EventScript_JP_082085D1: @ 0x082085D1
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0007
	.2byte 0x0005
	@ event command: return
	.byte 0x03
EventScript_JP_082085D9: @ 0x082085D9
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0003
	.2byte 0x0003
	.2byte 0x0004
	@ event command: return
	.byte 0x03
EventScript_JP_082085E1: @ 0x082085E1
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0004
	.2byte 0x0007
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_082085E9: @ 0x082085E9
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0005
	.2byte 0x0005
	.2byte 0x0005
	@ event command: return
	.byte 0x03
EventScript_JP_082085F1: @ 0x082085F1
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0006
	.2byte 0x0005
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_082085F9: @ 0x082085F9
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0002
	.2byte 0x0008
	.2byte 0x0004
	@ event command: return
	.byte 0x03
EventScript_JP_08208601: @ 0x08208601
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0007
	.2byte 0x0003
	.2byte 0x0003
	@ event command: return
	.byte 0x03
EventScript_JP_08208609: @ 0x08208609
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0008
	.2byte 0x0008
	.2byte 0x0003
	@ event command: return
	.byte 0x03
EventScript_JP_08208611: @ 0x08208611
	@ event command: call
	.byte 0x04
	.4byte 0x0820850E @ EventScript_JP_0820850E
	@ event command: call
	.byte 0x04
	.4byte 0x082085D9 @ EventScript_JP_082085D9
	@ event command: call
	.byte 0x04
	.4byte 0x082085E9 @ EventScript_JP_082085E9
	@ event command: call
	.byte 0x04
	.4byte 0x082085F1 @ EventScript_JP_082085F1
	@ event command: call
	.byte 0x04
	.4byte 0x08208601 @ EventScript_JP_08208601
	@ event command: call
	.byte 0x04
	.4byte 0x08208609 @ EventScript_JP_08208609
	@ event command: end
	.byte 0x02
EventScript_JP_08208630: @ 0x08208630
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4095
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820869D @ EventScript_JP_0820869D
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820866F @ EventScript_JP_0820866F
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208693 @ EventScript_JP_08208693
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208C38 @ gText_Rom_208C38
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820866F: @ 0x0820866F
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208689 @ EventScript_JP_08208689
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208BEC @ gText_Rom_208BEC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208689: @ 0x08208689
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208C00 @ gText_Rom_208C00
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208693: @ 0x08208693
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208C7A @ gText_Rom_208C7A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820869D: @ 0x0820869D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208CA7 @ gText_Rom_208CA7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082086A7: @ 0x082086A7
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4095
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208714 @ EventScript_JP_08208714
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082086E6 @ EventScript_JP_082086E6
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820870A @ EventScript_JP_0820870A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208D47 @ gText_Rom_208D47
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082086E6: @ 0x082086E6
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208700 @ EventScript_JP_08208700
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208CE8 @ gText_Rom_208CE8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208700: @ 0x08208700
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208D03 @ gText_Rom_208D03
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820870A: @ 0x0820870A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208D67 @ gText_Rom_208D67
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208714: @ 0x08208714
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208DAD @ gText_Rom_208DAD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820871E: @ 0x0820871E
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4095
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820878B @ EventScript_JP_0820878B
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820875D @ EventScript_JP_0820875D
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208781 @ EventScript_JP_08208781
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208E7C @ gText_Rom_208E7C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820875D: @ 0x0820875D
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208777 @ EventScript_JP_08208777
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208DDE @ gText_Rom_208DDE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208777: @ 0x08208777
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208E1A @ gText_Rom_208E1A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208781: @ 0x08208781
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208EE0 @ gText_Rom_208EE0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820878B: @ 0x0820878B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208F49 @ gText_Rom_208F49
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208795: @ 0x08208795
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000A
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4095
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208802 @ EventScript_JP_08208802
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082087D4 @ EventScript_JP_082087D4
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082087F8 @ EventScript_JP_082087F8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209015 @ gText_Rom_209015
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082087D4: @ 0x082087D4
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082087EE @ EventScript_JP_082087EE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208FA5 @ gText_Rom_208FA5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082087EE: @ 0x082087EE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208FC6 @ gText_Rom_208FC6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082087F8: @ 0x082087F8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209039 @ gText_Rom_209039
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208802: @ 0x08208802
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209072 @ gText_Rom_209072
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820880C: @ 0x0820880C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208840 @ EventScript_JP_08208840
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208864 @ EventScript_JP_08208864
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209116 @ gText_Rom_209116
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208840: @ 0x08208840
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820885A @ EventScript_JP_0820885A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082090AC @ gText_Rom_2090AC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820885A: @ 0x0820885A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082090DB @ gText_Rom_2090DB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208864: @ 0x08208864
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209134 @ gText_Rom_209134
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820886E: @ 0x0820886E
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082088A2 @ EventScript_JP_082088A2
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082088C6 @ EventScript_JP_082088C6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209216 @ gText_Rom_209216
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082088A2: @ 0x082088A2
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082088BC @ EventScript_JP_082088BC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820917D @ gText_Rom_20917D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082088BC: @ 0x082088BC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082091CB @ gText_Rom_2091CB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082088C6: @ 0x082088C6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820926D @ gText_Rom_20926D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082088D0: @ 0x082088D0
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000E
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208904 @ EventScript_JP_08208904
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208928 @ EventScript_JP_08208928
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209340 @ gText_Rom_209340
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208904: @ 0x08208904
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820891E @ EventScript_JP_0820891E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082092CA @ gText_Rom_2092CA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820891E: @ 0x0820891E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209306 @ gText_Rom_209306
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208928: @ 0x08208928
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820938D @ gText_Rom_20938D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208932: @ 0x08208932
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000F
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208966 @ EventScript_JP_08208966
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820898A @ EventScript_JP_0820898A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820943E @ gText_Rom_20943E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208966: @ 0x08208966
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208980 @ EventScript_JP_08208980
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082093F5 @ gText_Rom_2093F5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208980: @ 0x08208980
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08209400 @ gText_Rom_209400
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820898A: @ 0x0820898A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820946B @ gText_Rom_20946B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208994: @ 0x08208994
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00D2
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208B06 @ EventScript_JP_08208B06
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00D2
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x082089A9 @ EventScript_JP_082089A9
	@ event command: end
	.byte 0x02
EventScript_JP_082089A9: @ 0x082089A9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x000B
	@ event command: special
	.byte 0x25
	.2byte 0x0043
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208B18
	@ event command: copyvar
	.byte 0x19
	.2byte 0x800A
	.2byte 0x8006
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824DE14 @ gText_Rom_24DE14
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000E
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x800A
	@ event command: call
	.byte 0x04
	.4byte 0x08242F08
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082089F9 @ EventScript_JP_082089F9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208A07 @ EventScript_JP_08208A07
	@ event command: end
	.byte 0x02
EventScript_JP_082089F9: @ 0x082089F9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824DE37 @ gText_Rom_24DE37
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08208A66 @ EventScript_JP_08208A66
	.byte 0x02
EventScript_JP_08208A07: @ 0x08208A07
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824DE51 @ gText_Rom_24DE51
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
	.4byte 0x08208ADF @ EventScript_JP_08208ADF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208A2E @ EventScript_JP_08208A2E
	@ event command: end
	.byte 0x02
EventScript_JP_08208A2E: @ 0x08208A2E
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824DE64 @ gText_Rom_24DE64
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000E
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x800A
	@ event command: call
	.byte 0x04
	.4byte 0x08242F08
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082089F9 @ EventScript_JP_082089F9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208A07 @ EventScript_JP_08208A07
	@ event command: end
	.byte 0x02
EventScript_JP_08208A66: @ 0x08208A66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: message
	.byte 0x67
	.4byte 0x0824DE82 @ gText_Rom_24DE82
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x01BB
	@ event command: waitstate
	.byte 0x27
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x000B
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208AB8 @ EventScript_JP_08208AB8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208AB8 @ EventScript_JP_08208AB8
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8006
	.2byte 0x800A
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x015A
	@ event command: goto
	.byte 0x05
	.4byte 0x08208AF1 @ EventScript_JP_08208AF1
	.byte 0x02
EventScript_JP_08208AB8: @ 0x08208AB8
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824DEA3 @ gText_Rom_24DEA3
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
	.4byte 0x08208ADF @ EventScript_JP_08208ADF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208A66 @ EventScript_JP_08208A66
	@ event command: end
	.byte 0x02
EventScript_JP_08208ADF: @ 0x08208ADF
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824DEB6 @ gText_Rom_24DEB6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208AF1: @ 0x08208AF1
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824DEE0 @ gText_Rom_24DEE0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00D2
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08208B06: @ 0x08208B06
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00A5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0824DF29 @ gText_Rom_24DF29
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
