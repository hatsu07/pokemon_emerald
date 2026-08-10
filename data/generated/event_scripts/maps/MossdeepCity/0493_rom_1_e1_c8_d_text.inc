	@ data/maps/MossdeepCity/scripts.inc:360 MossdeepCity_Text_SootopolisNewGymLeader
	.globl gText_Rom_1E1C8D
gText_Rom_1E1C8D: @ 0x081E1C8D
	.string "あー あしもとが じゃぶじゃぶして\nきもちが いい……\pそうだ! じゃぶじゃぶ といえば\nルネシティ だけど\pあそこの ジム\nリーダーが かわった らしいね\pなんでも ミクリさんの\nおししょうさん だとか……$"
	.if (. - gText_Rom_1E1C8D) > 0x69
	.error "gText_Rom_1E1C8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1C8D) < 0x69
	.space 0x69 - (. - gText_Rom_1E1C8D)
	.endif
	@ analyzed canonical ROM range 0x081E1CF6-0x081E2C08
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_081E1CF6: @ 0x081E1CF6
EventScript_081E1CF6: @ 0x081E1CF6
MapScripts_JP_081E1CF6: @ 0x081E1CF6
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_081E1D10
	.byte 0x03
	.4byte EventScript_JP_081E1D89
	.byte 0x05
	.4byte EventScript_JP_081E1FA5
	.byte 0x02
	.4byte MapScriptTable_JP_081E1FAE
	.byte 0x04
	.4byte MapScriptTable_JP_081E1F75
	.byte 0
EventScript_JP_081E1D10: @ 0x081E1D10
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x009E
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081E1D7F @ EventScript_JP_081E1D7F
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0081
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081E1D2C @ EventScript_JP_081E1D2C
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x009E
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081E1D2D @ EventScript_JP_081E1D2D
	@ event command: end
	.byte 0x02
EventScript_081E1D2C: @ 0x081E1D2C
EventScript_JP_081E1D2C: @ 0x081E1D2C
	@ event command: end
	.byte 0x02
EventScript_081E1D2D: @ 0x081E1D2D
EventScript_JP_081E1D2D: @ 0x081E1D2D
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0009
	.2byte 0x0006
	.2byte 0x0248
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0009
	.2byte 0x0011
	.2byte 0x0248
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0009
	.2byte 0x001A
	.2byte 0x0248
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x002C
	.2byte 0x0011
	.2byte 0x0248
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0008
	.2byte 0x0023
	.2byte 0x0248
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0035
	.2byte 0x001C
	.2byte 0x0248
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x002D
	.2byte 0x0006
	.2byte 0x0248
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0030
	.2byte 0x0019
	.2byte 0x0248
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0033
	.2byte 0x0024
	.2byte 0x0248
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_081E1D7F: @ 0x081E1D7F
EventScript_JP_081E1D7F: @ 0x081E1D7F
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x001F
	.2byte 0x0020
	.2byte 0x0250
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081E1D89: @ 0x081E1D89
	@ event command: setflag
	.byte 0x29
	.2byte 0x087D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1E1B @ EventScript_JP_081E1E1B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CA
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1E1B @ EventScript_JP_081E1E1B
	@ event command: call
	.byte 0x04
	.4byte 0x081E1E9F @ EventScript_JP_081E1E9F
	@ event command: call
	.byte 0x04
	.4byte 0x081E1E4C @ EventScript_JP_081E1E4C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1E1F @ EventScript_JP_081E1E1F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1E1F @ EventScript_JP_081E1E1F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1E1F @ EventScript_JP_081E1E1F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1E1F @ EventScript_JP_081E1E1F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1E1F @ EventScript_JP_081E1E1F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1EDC @ EventScript_JP_081E1EDC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1EDC @ EventScript_JP_081E1EDC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1EF5 @ EventScript_JP_081E1EF5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1F0B @ EventScript_JP_081E1F0B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0006
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1F6D @ EventScript_JP_081E1F6D
	@ event command: end
	.byte 0x02
EventScript_JP_081E1E1B: @ 0x081E1E1B
	@ event command: setflag
	.byte 0x29
	.2byte 0x4000
	@ event command: return
	.byte 0x03
EventScript_JP_081E1E1F: @ 0x081E1E1F
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0003
	.2byte 0x000D
	.2byte 0x0030
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0005
	.2byte 0x002E
	.2byte 0x0020
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0004
	.2byte 0x0030
	.2byte 0x0029
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0008
	.2byte 0x002D
	.2byte 0x002B
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0003
	.byte 0x07
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0005
	.byte 0x09
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0004
	.byte 0x09
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0008
	.byte 0x09
	@ event command: return
	.byte 0x03
EventScript_JP_081E1E4C: @ 0x081E1E4C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E1E9A @ EventScript_JP_081E1E9A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081E1E9A @ EventScript_JP_081E1E9A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E1E9B @ EventScript_JP_081E1E9B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E1E9B @ EventScript_JP_081E1E9B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E1E9B @ EventScript_JP_081E1E9B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E1E9B @ EventScript_JP_081E1E9B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CA
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x03
	.4byte 0x081E1E9B @ EventScript_JP_081E1E9B
	@ event command: return
	.byte 0x03
EventScript_JP_081E1E9A: @ 0x081E1E9A
	@ event command: return
	.byte 0x03
EventScript_JP_081E1E9B: @ 0x081E1E9B
	@ event command: setmaplayoutindex
	.byte 0xA7
	.2byte 0x0165
	@ event command: return
	.byte 0x03
EventScript_JP_081E1E9F: @ 0x081E1E9F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E1ED7 @ EventScript_JP_081E1ED7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081E1ED7 @ EventScript_JP_081E1ED7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E1ED8 @ EventScript_JP_081E1ED8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CA
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E1ED8 @ EventScript_JP_081E1ED8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CA
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x03
	.4byte 0x08243106
	@ event command: return
	.byte 0x03
EventScript_JP_081E1ED7: @ 0x081E1ED7
	@ event command: return
	.byte 0x03
EventScript_JP_081E1ED8: @ 0x081E1ED8
	@ event command: setweather
	.byte 0xA4
	.2byte 0x000D
	@ event command: return
	.byte 0x03
EventScript_JP_081E1EDC: @ 0x081E1EDC
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0133
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E1EE6 @ EventScript_JP_081E1EE6
	@ event command: return
	.byte 0x03
EventScript_JP_081E1EE6: @ 0x081E1EE6
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x001E
	.2byte 0x0012
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0007
	.2byte 0x0020
	.2byte 0x0012
	@ event command: return
	.byte 0x03
EventScript_JP_081E1EF5: @ 0x081E1EF5
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x001E
	.2byte 0x0012
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0012
	.2byte 0x001F
	.2byte 0x0012
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0007
	.2byte 0x0020
	.2byte 0x0012
	@ event command: end
	.byte 0x02
EventScript_JP_081E1F0B: @ 0x081E1F0B
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x001F
	.2byte 0x0012
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0007
	.2byte 0x001D
	.2byte 0x0021
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0010
	.2byte 0x0021
	.2byte 0x0023
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0011
	.2byte 0x0022
	.2byte 0x0023
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D8
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1F49 @ EventScript_JP_081E1F49
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D8
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1F55 @ EventScript_JP_081E1F55
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D8
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1F61 @ EventScript_JP_081E1F61
	@ event command: return
	.byte 0x03
EventScript_JP_081E1F49: @ 0x081E1F49
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0012
	.2byte 0x001F
	.2byte 0x0021
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0012
	.byte 0x08
	@ event command: return
	.byte 0x03
EventScript_JP_081E1F55: @ 0x081E1F55
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0012
	.2byte 0x0020
	.2byte 0x0021
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0012
	.byte 0x08
	@ event command: return
	.byte 0x03
EventScript_JP_081E1F61: @ 0x081E1F61
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0012
	.2byte 0x001E
	.2byte 0x0021
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0012
	.byte 0x08
	@ event command: return
	.byte 0x03
EventScript_JP_081E1F6D: @ 0x081E1F6D
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x001F
	.2byte 0x0012
	@ event command: return
	.byte 0x03
MapScriptTable_JP_081E1F75: @ 0x081E1F75
	@ conditional map script table
	.2byte 0x405E, 0x0005
	.4byte EventScript_JP_081E1F7F
	.2byte 0
EventScript_JP_081E1F7F: @ 0x081E1F7F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CA
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1F96 @ EventScript_JP_081E1F96
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CA
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1F9B @ EventScript_JP_081E1F9B
	@ event command: end
	.byte 0x02
EventScript_JP_081E1F96: @ 0x081E1F96
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: return
	.byte 0x03
EventScript_JP_081E1F9B: @ 0x081E1F9B
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CA
	.2byte 0x0003
	@ event command: return
	.byte 0x03
EventScript_JP_081E1FA5: @ 0x081E1FA5
	@ event command: setdivewarp
	.byte 0x40
	.byte 0x18
	.byte 0x05
	.byte 0xFF
	.2byte 0x0009
	.2byte 0x0006
	.byte 0x02
MapScriptTable_JP_081E1FAE: @ 0x081E1FAE
	@ conditional map script table
	.2byte 0x405E, 0x0001
	.4byte EventScript_JP_081E1FC0
	.2byte 0x40CA, 0x0001
	.4byte EventScript_JP_081E2298
	.2byte 0
EventScript_JP_081E1FC0: @ 0x081E1FC0
	@ event command: lockall
	.byte 0x69
	@ event command: special
	.byte 0x25
	.2byte 0x008F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x002B
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x081E211C @ EventScript_JP_081E211C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0020
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x081E211C @ EventScript_JP_081E211C
	@ event command: goto
	.byte 0x05
	.4byte 0x081E1FE0 @ EventScript_JP_081E1FE0
	.byte 0x02
EventScript_JP_081E1FE0: @ 0x081E1FE0
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: special
	.byte 0x25
	.2byte 0x0113
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x007F
	.4byte 0x081E2102 @ Movement_JP_081E2102
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0114
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: fadescreenspeed
	.byte 0x98
	.byte 0x01
	.byte 0x08
	@ event command: setweather
	.byte 0xA4
	.2byte 0x000F
	@ event command: doweather
	.byte 0xA5
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x01F9
	@ event command: waitstate
	.byte 0x27
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0194
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E2252 @ Movement_JP_081E2252
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E227F @ Movement_JP_081E227F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8007
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x0135
	@ event command: waitstate
	.byte 0x27
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E2269 @ Movement_JP_081E2269
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E228A @ Movement_JP_081E228A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0195
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E225C @ Movement_JP_081E225C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E2277 @ Movement_JP_081E2277
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8007
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x0135
	@ event command: waitstate
	.byte 0x27
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E2269 @ Movement_JP_081E2269
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E228A @ Movement_JP_081E228A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0194
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E2252 @ Movement_JP_081E2252
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E227F @ Movement_JP_081E227F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8007
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x0135
	@ event command: waitstate
	.byte 0x27
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E2269 @ Movement_JP_081E2269
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E228A @ Movement_JP_081E228A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0113
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E2270 @ Movement_JP_081E2270
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E2291 @ Movement_JP_081E2291
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x007F
	.4byte 0x081E210F @ Movement_JP_081E210F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0114
	@ event command: setvar
	.byte 0x16
	.2byte 0x405E
	.2byte 0x0002
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x4000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_081E2102: @ 0x081E2102
	@ object movement sequence
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0xFE @ step_end
Movement_JP_081E210F: @ 0x081E210F
	@ object movement sequence
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0xFE @ step_end
EventScript_JP_081E211C: @ 0x081E211C
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: special
	.byte 0x25
	.2byte 0x0113
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x007F
	.4byte 0x081E223E @ Movement_JP_081E223E
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0114
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: fadescreenspeed
	.byte 0x98
	.byte 0x01
	.byte 0x08
	@ event command: setweather
	.byte 0xA4
	.2byte 0x000F
	@ event command: doweather
	.byte 0xA5
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x01F9
	@ event command: waitstate
	.byte 0x27
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0194
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E2252 @ Movement_JP_081E2252
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E227F @ Movement_JP_081E227F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8007
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x0135
	@ event command: waitstate
	.byte 0x27
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E2269 @ Movement_JP_081E2269
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E228A @ Movement_JP_081E228A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0195
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E225C @ Movement_JP_081E225C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E2277 @ Movement_JP_081E2277
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8007
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x0135
	@ event command: waitstate
	.byte 0x27
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E2269 @ Movement_JP_081E2269
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E228A @ Movement_JP_081E228A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0194
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E2252 @ Movement_JP_081E2252
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E227F @ Movement_JP_081E227F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8007
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x0135
	@ event command: waitstate
	.byte 0x27
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E2269 @ Movement_JP_081E2269
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E228A @ Movement_JP_081E228A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0113
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E2270 @ Movement_JP_081E2270
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081E2291 @ Movement_JP_081E2291
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x007F
	.4byte 0x081E2248 @ Movement_JP_081E2248
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0114
	@ event command: setvar
	.byte 0x16
	.2byte 0x405E
	.2byte 0x0002
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x4000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_081E223E: @ 0x081E223E
	@ object movement sequence
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0x91 @ walk_slow_diag_northeast
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081E2248: @ 0x081E2248
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0x92 @ walk_slow_diag_southwest
	.byte 0xFE @ step_end
Movement_JP_081E2252: @ 0x081E2252
	@ object movement sequence
	.byte 0x1B @ walk_in_place_slow_left
	.byte 0x1B @ walk_in_place_slow_left
	.byte 0x1B @ walk_in_place_slow_left
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x5E @ init_affine_anim
	.byte 0x96 @ walk_left_affine
	.byte 0x5F @ clear_affine_anim
	.byte 0xFE @ step_end
Movement_JP_081E225C: @ 0x081E225C
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x5E @ init_affine_anim
	.byte 0x96 @ walk_left_affine
	.byte 0x5F @ clear_affine_anim
	.byte 0xFE @ step_end
Movement_JP_081E2269: @ 0x081E2269
	@ object movement sequence
	.byte 0x40 @ lock_facing_direction
	.byte 0x0B @ walk_right
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x41 @ unlock_facing_direction
	.byte 0xFE @ step_end
Movement_JP_081E2270: @ 0x081E2270
	@ object movement sequence
	.byte 0x1B @ walk_in_place_slow_left
	.byte 0x1B @ walk_in_place_slow_left
	.byte 0x1B @ walk_in_place_slow_left
	.byte 0x1B @ walk_in_place_slow_left
	.byte 0x1B @ walk_in_place_slow_left
	.byte 0x1B @ walk_in_place_slow_left
	.byte 0xFE @ step_end
Movement_JP_081E2277: @ 0x081E2277
	@ object movement sequence
	.byte 0x1C @ walk_in_place_slow_right
	.byte 0x1C @ walk_in_place_slow_right
	.byte 0x1C @ walk_in_place_slow_right
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x18 @ walk_fast_right
	.byte 0xFE @ step_end
Movement_JP_081E227F: @ 0x081E227F
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x18 @ walk_fast_right
	.byte 0xFE @ step_end
Movement_JP_081E228A: @ 0x081E228A
	@ object movement sequence
	.byte 0x40 @ lock_facing_direction
	.byte 0x0A @ walk_left
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x41 @ unlock_facing_direction
	.byte 0xFE @ step_end
Movement_JP_081E2291: @ 0x081E2291
	@ object movement sequence
	.byte 0x1C @ walk_in_place_slow_right
	.byte 0x1C @ walk_in_place_slow_right
	.byte 0x1C @ walk_in_place_slow_right
	.byte 0x1C @ walk_in_place_slow_right
	.byte 0x1C @ walk_in_place_slow_right
	.byte 0x1C @ walk_in_place_slow_right
	.byte 0xFE @ step_end
EventScript_JP_081E2298: @ 0x081E2298
	@ event command: lockall
	.byte 0x69
	@ event command: special
	.byte 0x25
	.2byte 0x008F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x002B
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x081E2368 @ EventScript_JP_081E2368
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0020
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x081E2368 @ EventScript_JP_081E2368
	@ event command: goto
	.byte 0x05
	.4byte 0x081E22B8 @ EventScript_JP_081E22B8
	.byte 0x02
EventScript_JP_081E22B8: @ 0x081E22B8
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: special
	.byte 0x25
	.2byte 0x0113
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x007F
	.4byte 0x081E2102 @ Movement_JP_081E2102
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0114
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: fadescreenspeed
	.byte 0x98
	.byte 0x01
	.byte 0x08
	@ event command: call
	.byte 0x04
	.4byte 0x081E241C @ EventScript_JP_081E241C
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0009
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000A
	@ event command: addobject
	.byte 0x55
	.2byte 0x000B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x01F9
	@ event command: waitstate
	.byte 0x27
	@ event command: playse
	.byte 0x2F
	.2byte 0x0057
	@ event command: special
	.byte 0x25
	.2byte 0x0113
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x007F
	.4byte 0x081E24FD @ Movement_JP_081E24FD
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0196
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8007
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x0135
	@ event command: waitstate
	.byte 0x27
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0196
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8007
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x0135
	@ event command: waitstate
	.byte 0x27
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: setweather
	.byte 0xA4
	.2byte 0x0000
	@ event command: doweather
	.byte 0xA5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081E24F5 @ Movement_JP_081E24F5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000B
	@ event command: special
	.byte 0x25
	.2byte 0x011B
	@ event command: waitstate
	.byte 0x27
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x088A
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CA
	.2byte 0x0003
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0053
	@ event command: fadenewbgm
	.byte 0x36
	.2byte 0x01BD
	@ event command: delay
	.byte 0x28
	.2byte 0x0078
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x4000
	@ event command: warp8
	.byte 0xE0
	.byte 0x00
	.byte 0x07
	.byte 0xFF
	.2byte 0x002B
	.2byte 0x0020
	.byte 0x27, 0x02
EventScript_JP_081E2368: @ 0x081E2368
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: special
	.byte 0x25
	.2byte 0x0113
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x007F
	.4byte 0x081E223E @ Movement_JP_081E223E
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0114
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: fadescreenspeed
	.byte 0x98
	.byte 0x01
	.byte 0x08
	@ event command: call
	.byte 0x04
	.4byte 0x081E241C @ EventScript_JP_081E241C
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0009
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000A
	@ event command: addobject
	.byte 0x55
	.2byte 0x000B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x01F9
	@ event command: waitstate
	.byte 0x27
	@ event command: special
	.byte 0x25
	.2byte 0x0113
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x007F
	.4byte 0x081E24FD @ Movement_JP_081E24FD
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081E2502 @ Movement_JP_081E2502
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0196
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8007
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x0135
	@ event command: waitstate
	.byte 0x27
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0196
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8007
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x0135
	@ event command: waitstate
	.byte 0x27
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: setweather
	.byte 0xA4
	.2byte 0x0000
	@ event command: doweather
	.byte 0xA5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081E24F5 @ Movement_JP_081E24F5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000B
	@ event command: special
	.byte 0x25
	.2byte 0x011B
	@ event command: waitstate
	.byte 0x27
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x088A
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CA
	.2byte 0x0002
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0053
	@ event command: fadenewbgm
	.byte 0x36
	.2byte 0x016D
	@ event command: delay
	.byte 0x28
	.2byte 0x0078
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x4000
	@ event command: warp8
	.byte 0xE0
	.byte 0x00
	.byte 0x07
	.byte 0xFF
	.2byte 0x001D
	.2byte 0x0035
	.byte 0x27, 0x02
EventScript_JP_081E241C: @ 0x081E241C
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x001B
	.2byte 0x002B
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x001C
	.2byte 0x002B
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x001D
	.2byte 0x002B
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x001E
	.2byte 0x002B
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x001B
	.2byte 0x002C
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x001C
	.2byte 0x002C
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x001D
	.2byte 0x002C
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x001E
	.2byte 0x002C
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x001B
	.2byte 0x002D
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x001C
	.2byte 0x002D
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x001D
	.2byte 0x002D
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x001E
	.2byte 0x002D
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0020
	.2byte 0x002B
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0021
	.2byte 0x002B
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0022
	.2byte 0x002B
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0023
	.2byte 0x002B
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0020
	.2byte 0x002C
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0021
	.2byte 0x002C
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0022
	.2byte 0x002C
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0023
	.2byte 0x002C
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0020
	.2byte 0x002D
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0021
	.2byte 0x002D
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0022
	.2byte 0x002D
	.2byte 0x0290
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0023
	.2byte 0x002D
	.2byte 0x0290
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_081E24F5: @ 0x081E24F5
	@ object movement sequence
	.byte 0x16 @ walk_fast_up
	.byte 0x2E @ walk_fastest_up
	.byte 0x2E @ walk_fastest_up
	.byte 0x2E @ walk_fastest_up
	.byte 0x2E @ walk_fastest_up
	.byte 0x2E @ walk_fastest_up
	.byte 0x2E @ walk_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081E24FD: @ 0x081E24FD
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081E2502: @ 0x081E2502
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
	.byte 0x08, 0x08, 0x08, 0x08, 0xFE, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x91, 0x0B, 0x0B, 0x0B
	.byte 0x0B, 0xFE, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x92, 0x92, 0xFE
EventScript_JP_081E2527: @ 0x081E2527
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081E255E @ EventScript_JP_081E255E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2568 @ EventScript_JP_081E2568
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081E2554 @ EventScript_JP_081E2554
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E305D @ gText_Rom_1E305D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E2554: @ 0x081E2554
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E30B4 @ gText_Rom_1E30B4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E255E: @ 0x081E255E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E3148 @ gText_Rom_1E3148
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E2568: @ 0x081E2568
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E311F @ gText_Rom_1E311F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E2572: @ 0x081E2572
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x03
	.4byte 0x081E25B5 @ EventScript_JP_081E25B5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081E25B5 @ EventScript_JP_081E25B5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E25AA @ EventScript_JP_081E25AA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2F96 @ gText_Rom_1E2F96
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E25AA: @ 0x081E25AA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2FBE @ gText_Rom_1E2FBE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E25B5: @ 0x081E25B5
	@ event command: dotimebasedevents
	.byte 0x2D
	@ event command: special
	.byte 0x25
	.2byte 0x0094
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0932
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2655 @ EventScript_JP_081E2655
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263F33 @ gText_Rom_263F33
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: random
	.byte 0x8F
	.2byte 0x000A
	@ event command: addvar
	.byte 0x17
	.2byte 0x800D
	.2byte 0x0014
	@ event command: addvar
	.byte 0x17
	.2byte 0x800D
	.2byte 0x0085
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x800D
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
	@ event command: setflag
	.byte 0x29
	.2byte 0x0932
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263FB4 @ gText_Rom_263FB4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: random
	.byte 0x8F
	.2byte 0x0002
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2613 @ EventScript_JP_081E2613
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2634 @ EventScript_JP_081E2634
	@ event command: end
	.byte 0x02
EventScript_JP_081E2613: @ 0x081E2613
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x008F
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
	.4byte 0x08263FD5 @ gText_Rom_263FD5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E2634: @ 0x081E2634
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0093
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
	.4byte 0x08263FD5 @ gText_Rom_263FD5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E2655: @ 0x081E2655
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263FF1 @ gText_Rom_263FF1
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
	.4byte 0x081E2672 @ EventScript_JP_081E2672
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0826404E @ gText_Rom_26404E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E2672: @ 0x081E2672
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08264025 @ gText_Rom_264025
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E267C: @ 0x081E267C
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E26A7 @ EventScript_JP_081E26A7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E32A3 @ gText_Rom_1E32A3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E26A7: @ 0x081E26A7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E3326 @ gText_Rom_1E3326
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E26B1: @ 0x081E26B1
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081E26C8 @ EventScript_JP_081E26C8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2FFF @ gText_Rom_1E2FFF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E26C8: @ 0x081E26C8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E304B @ gText_Rom_1E304B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E26D2: @ 0x081E26D2
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081E2714 @ EventScript_JP_081E2714
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E271E @ EventScript_JP_081E271E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081E26FF @ EventScript_JP_081E26FF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E317C @ gText_Rom_1E317C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E26FF: @ 0x081E26FF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E31E2 @ gText_Rom_1E31E2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0008
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E2714: @ 0x081E2714
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E324C @ gText_Rom_1E324C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E271E: @ 0x081E271E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E3217 @ gText_Rom_1E3217
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E2728: @ 0x081E2728
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2773 @ EventScript_JP_081E2773
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081E2769 @ EventScript_JP_081E2769
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x03
	.4byte 0x081E2769 @ EventScript_JP_081E2769
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2E17 @ gText_Rom_1E2E17
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E2769: @ 0x081E2769
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2DD3 @ gText_Rom_1E2DD3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E2773: @ 0x081E2773
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2E24 @ gText_Rom_1E2E24
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E277D: @ 0x081E277D
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E27C7 @ EventScript_JP_081E27C7
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E27D1 @ EventScript_JP_081E27D1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081E27DB @ EventScript_JP_081E27DB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x03
	.4byte 0x081E27DB @ EventScript_JP_081E27DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2C9A @ gText_Rom_1E2C9A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E27C7: @ 0x081E27C7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2D00 @ gText_Rom_1E2D00
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E27D1: @ 0x081E27D1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2D1F @ gText_Rom_1E2D1F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E27DB: @ 0x081E27DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2C5C @ gText_Rom_1E2C5C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E27E5: @ 0x081E27E5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2C09 @ gText_Rom_1E2C09
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E27EE: @ 0x081E27EE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2C31 @ gText_Rom_1E2C31
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E27F7: @ 0x081E27F7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2C4D @ gText_Rom_1E2C4D
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E2800: @ 0x081E2800
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0133
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081E2866 @ EventScript_JP_081E2866
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2848 @ EventScript_JP_081E2848
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E285C @ EventScript_JP_081E285C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E285C @ EventScript_JP_081E285C
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x009E
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2852 @ EventScript_JP_081E2852
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E36F0 @ gText_Rom_1E36F0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2848: @ 0x081E2848
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E369B @ gText_Rom_1E369B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2852: @ 0x081E2852
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E3726 @ gText_Rom_1E3726
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E285C: @ 0x081E285C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E36BF @ gText_Rom_1E36BF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2866: @ 0x081E2866
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E350F @ gText_Rom_1E350F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E28DD @ EventScript_JP_081E28DD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E28EF @ EventScript_JP_081E28EF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E35DC @ gText_Rom_1E35DC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081E296E @ Movement_JP_081E296E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081E29A8 @ Movement_JP_081E29A8
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x0078
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081E29DB @ Movement_JP_081E29DB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081E29DE @ Movement_JP_081E29DE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081E29E9 @ Movement_JP_081E29E9
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E3656 @ gText_Rom_1E3656
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setflag
	.byte 0x29
	.2byte 0x0133
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081E29F4 @ Movement_JP_081E29F4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x18
	.byte 0x25
	.byte 0xFF
	.2byte 0x0009
	.2byte 0x0014
	.byte 0x27, 0x02
EventScript_JP_081E28DD: @ 0x081E28DD
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081E2901 @ Movement_JP_081E2901
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081E2926 @ Movement_JP_081E2926
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081E28EF: @ 0x081E28EF
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081E2901 @ Movement_JP_081E2901
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081E294A @ Movement_JP_081E294A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_081E2901: @ 0x081E2901
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_081E2926: @ 0x081E2926
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081E294A: @ 0x081E294A
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081E296E: @ 0x081E296E
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x12 @ delay_4
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081E29A8: @ 0x081E29A8
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_081E29DB: @ 0x081E29DB
	@ object movement sequence
	.byte 0x06 @ walk_slow_left
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_081E29DE: @ 0x081E29DE
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x13 @ delay_8
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081E29E9: @ 0x081E29E9
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_081E29F4: @ 0x081E29F4
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_081E29F7: @ 0x081E29F7
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2A22 @ EventScript_JP_081E2A22
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2D60 @ gText_Rom_1E2D60
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2A22: @ 0x081E2A22
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2DAA @ gText_Rom_1E2DAA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2A2D: @ 0x081E2A2D
	@ event command: lockall
	.byte 0x69
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2A61 @ EventScript_JP_081E2A61
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2E35 @ gText_Rom_1E2E35
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2E55 @ gText_Rom_1E2E55
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2A61: @ 0x081E2A61
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2E7F @ gText_Rom_1E2E7F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2A75: @ 0x081E2A75
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2AA0 @ EventScript_JP_081E2AA0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2FD7 @ gText_Rom_1E2FD7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2AA0: @ 0x081E2AA0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2FEB @ gText_Rom_1E2FEB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2AAB: @ 0x081E2AAB
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000C
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2AD6 @ EventScript_JP_081E2AD6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2EC0 @ gText_Rom_1E2EC0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000C
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2AD6: @ 0x081E2AD6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E2F2C @ gText_Rom_1E2F2C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2AE0: @ 0x081E2AE0
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2B72 @ EventScript_JP_081E2B72
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0138
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2B7C @ EventScript_JP_081E2B7C
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x009E
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2B09 @ EventScript_JP_081E2B09
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E37B8 @ gText_Rom_1E37B8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E2B09: @ 0x081E2B09
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E380B @ gText_Rom_1E380B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0159
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: setflag
	.byte 0x29
	.2byte 0x0138
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E38A0 @ gText_Rom_1E38A0
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
	.4byte 0x081E2B4C @ EventScript_JP_081E2B4C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E2B4C @ EventScript_JP_081E2B4C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E2B5F @ EventScript_JP_081E2B5F
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E2B4C: @ 0x081E2B4C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0012
	.4byte 0x081E2B86 @ Movement_JP_081E2B86
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: moveobjectoffscreen
	.byte 0x64
	.2byte 0x0012
	@ event command: setvar
	.byte 0x16
	.2byte 0x40D8
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081E2B5F: @ 0x081E2B5F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0012
	.4byte 0x081E2B89 @ Movement_JP_081E2B89
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: moveobjectoffscreen
	.byte 0x64
	.2byte 0x0012
	@ event command: setvar
	.byte 0x16
	.2byte 0x40D8
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_081E2B72: @ 0x081E2B72
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E376F @ gText_Rom_1E376F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E2B7C: @ 0x081E2B7C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E3943 @ gText_Rom_1E3943
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
Movement_JP_081E2B86: @ 0x081E2B86
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_081E2B89: @ 0x081E2B89
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
EventScript_JP_081E2B8C: @ 0x081E2B8C
	@ event command: lockall
	.byte 0x69
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2BA3 @ EventScript_JP_081E2BA3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E335D @ gText_Rom_1E335D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2BA3: @ 0x081E2BA3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E33BA @ gText_Rom_1E33BA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0135
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0134
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2BE6 @ EventScript_JP_081E2BE6
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2BB9: @ 0x081E2BB9
	@ event command: lockall
	.byte 0x69
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2BD0 @ EventScript_JP_081E2BD0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E343A @ gText_Rom_1E343A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2BD0: @ 0x081E2BD0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E3495 @ gText_Rom_1E3495
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0134
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0135
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E2BE6 @ EventScript_JP_081E2BE6
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E2BE6: @ 0x081E2BE6
	@ event command: setflag
	.byte 0x29
	.2byte 0x033B
	@ event command: setflag
	.byte 0x29
	.2byte 0x033A
	@ event command: setflag
	.byte 0x29
	.2byte 0x009E
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0358
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0394
	@ event command: setvar
	.byte 0x16
	.2byte 0x40B9
	.2byte 0x0002
	@ event command: warpsilent
	.byte 0x3A
	.byte 0x00
	.byte 0x07
	.byte 0xFF
	.2byte 0x001F
	.2byte 0x0022
	.byte 0x27, 0x6B, 0x02, 0x98, 0xFE, 0x9A, 0xFE
