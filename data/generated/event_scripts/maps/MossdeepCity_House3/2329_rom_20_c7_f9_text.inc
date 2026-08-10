	@ data/maps/MossdeepCity_House3/scripts.inc:40 MossdeepCity_House3_Text_GoAfterSeafloorPokemon
	.globl gText_Rom_20C7F9
gText_Rom_20C7F9: @ 0x0820C7F9
	.string "すごいつりざおで\nかいていの ポケモンも つりあげろお!$"
	.if (. - gText_Rom_20C7F9) > 0x1d
	.error "gText_Rom_20C7F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C7F9) < 0x1d
	.space 0x1d - (. - gText_Rom_20C7F9)
	.endif
	@ analyzed canonical ROM range 0x0820C816-0x0820C9C7
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0820C816: @ 0x0820C816
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_0820C826
	.byte 0x03
	.4byte EventScript_JP_0820C83A
	.byte 0x02
	.4byte MapScriptTable_JP_0820C852
	.byte 0
EventScript_JP_0820C826: @ 0x0820C826
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x0820C830 @ EventScript_JP_0820C830
	@ event command: end
	.byte 0x02
EventScript_JP_0820C830: @ 0x0820C830
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x0004
	.2byte 0x02F1
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_0820C83A: @ 0x0820C83A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C6
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820C846 @ EventScript_JP_0820C846
	@ event command: end
	.byte 0x02
EventScript_JP_0820C846: @ 0x0820C846
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0006
	.2byte 0x0005
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0001
	.byte 0x07
	@ event command: return
	.byte 0x03
MapScriptTable_JP_0820C852: @ 0x0820C852
	@ conditional map script table
	.2byte 0x40C6, 0x0001
	.4byte EventScript_JP_0820C85C
	.2byte 0
EventScript_JP_0820C85C: @ 0x0820C85C
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
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
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0820C8C5 @ Movement_JP_0820C8C5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C9C8 @ gText_Rom_20C9C8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x015A
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: setflag
	.byte 0x29
	.2byte 0x007B
	@ event command: setflag
	.byte 0x29
	.2byte 0x012E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820CA36 @ gText_Rom_20CA36
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0820C8CD @ Movement_JP_0820C8CD
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setflag
	.byte 0x29
	.2byte 0x0314
	@ event command: setflag
	.byte 0x29
	.2byte 0x03AD
	@ event command: setvar
	.byte 0x16
	.2byte 0x40C6
	.2byte 0x0002
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_0820C8C5: @ 0x0820C8C5
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_0820C8CD: @ 0x0820C8CD
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
EventScript_JP_0820C8D3: @ 0x0820C8D3
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820CAF7 @ gText_Rom_20CAF7
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
	.4byte 0x0820C8ED @ EventScript_JP_0820C8ED
	@ event command: goto
	.byte 0x05
	.4byte 0x0820C8F7 @ EventScript_JP_0820C8F7
	.byte 0x02
EventScript_JP_0820C8ED: @ 0x0820C8ED
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820CB5D @ gText_Rom_20CB5D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820C8F7: @ 0x0820C8F7
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x018E
	@ event command: givemon
	.byte 0x79
	.2byte 0x018E
	.byte 0x05
	.2byte 0x0000
	.4byte 0x00000000 @ NO
	.4byte 0x00000000 @ NO
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820C927 @ EventScript_JP_0820C927
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820C94F @ EventScript_JP_0820C94F
	@ event command: goto
	.byte 0x05
	.4byte 0x0824423B
	.byte 0x02
EventScript_JP_0820C927: @ 0x0820C927
	@ event command: call
	.byte 0x04
	.4byte 0x0820C97D @ EventScript_JP_0820C97D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243EDB @ gText_Rom_243EDB
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
	.4byte 0x0820C993 @ EventScript_JP_0820C993
	@ event command: call
	.byte 0x04
	.4byte 0x082441B5
	@ event command: call
	.byte 0x04
	.4byte 0x08243460
	@ event command: goto
	.byte 0x05
	.4byte 0x0820C993 @ EventScript_JP_0820C993
	.byte 0x02
EventScript_JP_0820C94F: @ 0x0820C94F
	@ event command: call
	.byte 0x04
	.4byte 0x0820C97D @ EventScript_JP_0820C97D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243EDB @ gText_Rom_243EDB
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
	.4byte 0x0820C972 @ EventScript_JP_0820C972
	@ event command: call
	.byte 0x04
	.4byte 0x082441C1
	@ event command: goto
	.byte 0x05
	.4byte 0x0820C972 @ EventScript_JP_0820C972
	.byte 0x02
EventScript_JP_0820C972: @ 0x0820C972
	@ event command: call
	.byte 0x04
	.4byte 0x082441CA
	@ event command: goto
	.byte 0x05
	.4byte 0x0820C993 @ EventScript_JP_0820C993
	.byte 0x02
EventScript_JP_0820C97D: @ 0x0820C97D
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x01
	.2byte 0x018E
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0002
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: message
	.byte 0x67
	.4byte 0x0820CB39 @ gText_Rom_20CB39
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitfanfare
	.byte 0x32
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x00
	.2byte 0x018E
	@ event command: return
	.byte 0x03
EventScript_JP_0820C993: @ 0x0820C993
	@ event command: setflag
	.byte 0x29
	.2byte 0x03C8
	@ event command: setflag
	.byte 0x29
	.2byte 0x012A
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820C99B: @ 0x0820C99B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820CC3F @ gText_Rom_20CC3F
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_0820C9A4: @ 0x0820C9A4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820CAAF @ gText_Rom_20CAAF
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820C9AD: @ 0x0820C9AD
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820CB77 @ gText_Rom_20CB77
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
	.byte 0x1A, 0x00, 0x80, 0x5A, 0x01, 0x1A, 0x01, 0x80, 0x01, 0x00, 0x09, 0x01, 0x29, 0x7B, 0x00, 0x02
