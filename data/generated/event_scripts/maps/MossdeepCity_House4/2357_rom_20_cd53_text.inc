	@ data/maps/MossdeepCity_House4/scripts.inc:54 MossdeepCity_House4_Text_Skitty
	.globl gText_Rom_20CD53
gText_Rom_20CD53: @ 0x0820CD53
	.string "エネコ『みゃあん?$"
	.if (. - gText_Rom_20CD53) > 0xa
	.error "gText_Rom_20CD53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CD53) < 0xa
	.space 0xa - (. - gText_Rom_20CD53)
	.endif
	@ analyzed canonical ROM range 0x0820CD5D-0x0820D0C2
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0820CD5D: @ 0x0820CD5D
EventScript_0820CD5D: @ 0x0820CD5D
MapScripts_JP_0820CD5D: @ 0x0820CD5D
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_0820CDDE
	.byte 0x03
	.4byte EventScript_JP_0820CD68
	.byte 0
EventScript_JP_0820CD68: @ 0x0820CD68
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CD74 @ EventScript_JP_0820CD74
	@ event command: end
	.byte 0x02
EventScript_JP_0820CD74: @ 0x0820CD74
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0003
	.2byte 0x0001
	.2byte 0x0009
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0003
	.byte 0x0A
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0005
	.2byte 0x0000
	.2byte 0x0008
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0005
	.byte 0x0A
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0004
	.2byte 0x0001
	.2byte 0x0006
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0004
	.byte 0x0A
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0003
	.2byte 0x0004
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0001
	.byte 0x0A
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0002
	.byte 0x0A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x409E
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CDC6 @ EventScript_JP_0820CDC6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x409E
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CDCE @ EventScript_JP_0820CDCE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x409E
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CDD6 @ EventScript_JP_0820CDD6
	@ event command: end
	.byte 0x02
EventScript_JP_0820CDC6: @ 0x0820CDC6
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0009
	.2byte 0x000C
	.2byte 0x0002
	@ event command: end
	.byte 0x02
EventScript_JP_0820CDCE: @ 0x0820CDCE
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0009
	.2byte 0x000D
	.2byte 0x0003
	@ event command: end
	.byte 0x02
EventScript_JP_0820CDD6: @ 0x0820CDD6
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0009
	.2byte 0x000E
	.2byte 0x0002
	@ event command: end
	.byte 0x02
EventScript_JP_0820CDDE: @ 0x0820CDDE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x03
	.4byte 0x0820CDEA @ EventScript_JP_0820CDEA
	@ event command: end
	.byte 0x02
EventScript_JP_0820CDEA: @ 0x0820CDEA
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0002
	.2byte 0x0005
	.2byte 0x03E4
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_0820CDF4: @ 0x0820CDF4
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CE40 @ EventScript_JP_0820CE40
	@ event command: dotimebasedevents
	.byte 0x2D
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0100
	@ event command: buffernumberstring
	.byte 0x83
	.byte 0x00
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820CE2E @ EventScript_JP_0820CE2E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x04
	.4byte 0x0820CE37 @ EventScript_JP_0820CE37
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
EventScript_JP_0820CE2E: @ 0x0820CE2E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D0C3 @ gText_Rom_20D0C3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0820CE37: @ 0x0820CE37
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D0D8 @ gText_Rom_20D0D8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0820CE40: @ 0x0820CE40
	@ event command: dotimebasedevents
	.byte 0x2D
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0100
	@ event command: buffernumberstring
	.byte 0x83
	.byte 0x00
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820CE6D @ EventScript_JP_0820CE6D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x04
	.4byte 0x0820CE76 @ EventScript_JP_0820CE76
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820CE6D: @ 0x0820CE6D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D0FD @ gText_Rom_20D0FD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0820CE76: @ 0x0820CE76
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D126 @ gText_Rom_20D126
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0820CE7F: @ 0x0820CE7F
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CE96 @ EventScript_JP_0820CE96
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D15F @ gText_Rom_20D15F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820CE96: @ 0x0820CE96
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D1DB @ gText_Rom_20D1DB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820CEAA: @ 0x0820CEAA
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CEF6 @ EventScript_JP_0820CEF6
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00C0
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CEEC @ EventScript_JP_0820CEEC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D225 @ gText_Rom_20D225
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x005D
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
	.2byte 0x00C0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D255 @ gText_Rom_20D255
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820CEEC: @ 0x0820CEEC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D255 @ gText_Rom_20D255
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820CEF6: @ 0x0820CEF6
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00C0
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CF35 @ EventScript_JP_0820CF35
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D281 @ gText_Rom_20D281
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x005D
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
	.2byte 0x00C0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D2C2 @ gText_Rom_20D2C2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820CF35: @ 0x0820CF35
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D2C2 @ gText_Rom_20D2C2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820CF49: @ 0x0820CF49
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CF70 @ EventScript_JP_0820CF70
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CF7A @ EventScript_JP_0820CF7A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820CF70 @ EventScript_JP_0820CF70
	@ event command: goto
	.byte 0x05
	.4byte 0x0820CF7A @ EventScript_JP_0820CF7A
	.byte 0x02
EventScript_JP_0820CF70: @ 0x0820CF70
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D2E6 @ gText_Rom_20D2E6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820CF7A: @ 0x0820CF7A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D316 @ gText_Rom_20D316
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820CF84: @ 0x0820CF84
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CFAB @ EventScript_JP_0820CFAB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820CFC0 @ EventScript_JP_0820CFC0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820CFAB @ EventScript_JP_0820CFAB
	@ event command: goto
	.byte 0x05
	.4byte 0x0820CFC0 @ EventScript_JP_0820CFC0
	.byte 0x02
EventScript_JP_0820CFAB: @ 0x0820CFAB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D357 @ gText_Rom_20D357
	@ event command: callstd
	.byte 0x09
	.byte 0x04
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
EventScript_JP_0820CFC0: @ 0x0820CFC0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D38D @ gText_Rom_20D38D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
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
EventScript_JP_0820CFD5: @ 0x0820CFD5
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D3DA @ gText_Rom_20D3DA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
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
EventScript_JP_0820CFEB: @ 0x0820CFEB
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D5FC @ gText_Rom_20D5FC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820CFF6: @ 0x0820CFF6
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x024A
	.2byte 0x0000
	.4byte 0x0820D475 @ gText_Rom_20D475
	.4byte 0x0820D497 @ gText_Rom_20D497
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D4A1 @ gText_Rom_20D4A1
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820D00D: @ 0x0820D00D
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0016
	.2byte 0x0000
	.4byte 0x0820D4C0 @ gText_Rom_20D4C0
	.4byte 0x0820D4E8 @ gText_Rom_20D4E8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D503 @ gText_Rom_20D503
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820D024: @ 0x0820D024
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x024B
	.2byte 0x0000
	.4byte 0x0820D524 @ gText_Rom_20D524
	.4byte 0x0820D55A @ gText_Rom_20D55A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D574 @ gText_Rom_20D574
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820D03B: @ 0x0820D03B
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00BF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D08A @ EventScript_JP_0820D08A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D5A6 @ gText_Rom_20D5A6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0074
	.2byte 0x0000
	.4byte 0x0820D5C7 @ gText_Rom_20D5C7
	@ event command: setflag
	.byte 0x29
	.2byte 0x00BF
	@ event command: moveobjectoffscreen
	.byte 0x64
	.2byte 0x0009
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D094 @ EventScript_JP_0820D094
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D0A5 @ EventScript_JP_0820D0A5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0820D0BE @ Movement_JP_0820D0BE
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x409E
	.2byte 0x0002
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820D08A: @ 0x0820D08A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820D5D0 @ gText_Rom_20D5D0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820D094: @ 0x0820D094
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0820D0B6 @ Movement_JP_0820D0B6
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x409E
	.2byte 0x0001
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820D0A5: @ 0x0820D0A5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0820D0BA @ Movement_JP_0820D0BA
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x409E
	.2byte 0x0003
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
Movement_JP_0820D0B6: @ 0x0820D0B6
	@ object movement sequence
	.byte 0x40 @ lock_facing_direction
	.byte 0x0A @ walk_left
	.byte 0x41 @ unlock_facing_direction
	.byte 0xFE @ step_end
Movement_JP_0820D0BA: @ 0x0820D0BA
	@ object movement sequence
	.byte 0x40 @ lock_facing_direction
	.byte 0x0B @ walk_right
	.byte 0x41 @ unlock_facing_direction
	.byte 0xFE @ step_end
Movement_JP_0820D0BE: @ 0x0820D0BE
	@ object movement sequence
	.byte 0x02 @ face_left
	.byte 0x40 @ lock_facing_direction
	.byte 0x0B @ walk_right
	.byte 0x41 @ unlock_facing_direction
	.byte 0xFE @ step_end
