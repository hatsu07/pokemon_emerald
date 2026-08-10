	@ data/maps/Route104_MrBrineysHouse/scripts.inc:151 Route104_MrBrineysHouse_Text_Peeko
	.globl gText_Rom_2119A3
gText_Rom_2119A3: @ 0x082119A3
	.string "ピーコちゃん『ピー ピひょろー!$"
	.if (. - gText_Rom_2119A3) > 0x11
	.error "gText_Rom_2119A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2119A3) < 0x11
	.space 0x11 - (. - gText_Rom_2119A3)
	.endif
	@ analyzed canonical ROM range 0x082119B4-0x08211BA0
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_082119B4: @ 0x082119B4
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082119BA
	.byte 0
EventScript_JP_082119BA: @ 0x082119BA
	@ event command: setflag
	.byte 0x29
	.2byte 0x089C
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x082119D3 @ EventScript_JP_082119D3
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0869
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x082119D3 @ EventScript_JP_082119D3
	@ event command: setflag
	.byte 0x29
	.2byte 0x0001
	@ event command: end
	.byte 0x02
EventScript_JP_082119D3: @ 0x082119D3
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0004
	.2byte 0x0006
	@ event command: end
	.byte 0x02
EventScript_JP_082119DB: @ 0x082119DB
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08211A4C @ EventScript_JP_08211A4C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263C9E @ gText_Rom_263C9E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08211A1A @ EventScript_JP_08211A1A
	@ event command: setflag
	.byte 0x29
	.2byte 0x007F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263CD9 @ gText_Rom_263CD9
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08211A3A @ EventScript_JP_08211A3A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08211A43 @ EventScript_JP_08211A43
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08211A1A: @ 0x08211A1A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263CC6 @ gText_Rom_263CC6
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08211A3A @ EventScript_JP_08211A3A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08211A43 @ EventScript_JP_08211A43
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08211A3A: @ 0x08211A3A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263D0D @ gText_Rom_263D0D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08211A43: @ 0x08211A43
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263DCA @ gText_Rom_263DCA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08211A4C: @ 0x08211A4C
	@ event command: message
	.byte 0x67
	.4byte 0x08243927 @ gText_Rom_243927
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemartdecoration2
	.byte 0x88
	.4byte 0x08211A64
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243920 @ gText_Rom_243920
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x00, 0x00, 0x00, 0x13, 0x00, 0x14, 0x00, 0x15, 0x00, 0x16, 0x00, 0x17, 0x00, 0x18, 0x00, 0x00
	.byte 0x00, 0x6C, 0x02
EventScript_JP_08211A74: @ 0x08211A74
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x005E
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x08211A89 @ EventScript_JP_08211A89
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263E32 @ gText_Rom_263E32
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08211A89: @ 0x08211A89
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263DE8 @ gText_Rom_263DE8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x010C
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
	.4byte 0x08263E32 @ gText_Rom_263E32
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x005E
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08211AAA: @ 0x08211AAA
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: dotimebasedevents
	.byte 0x2D
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0930
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08211AEA @ EventScript_JP_08211AEA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263EA4 @ gText_Rom_263EA4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: random
	.byte 0x8F
	.2byte 0x0008
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
	.2byte 0x0930
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263ED1 @ gText_Rom_263ED1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08211AEA: @ 0x08211AEA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263ED1 @ gText_Rom_263ED1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x00
EventScript_JP_08211AF5: @ 0x08211AF5
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0002
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211BA1 @ gText_Rom_211BA1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08211B94 @ EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B0A: @ 0x08211B0A
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0003
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0115
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08211B42 @ EventScript_JP_08211B42
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211C09 @ gText_Rom_211C09
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00B5
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
	.2byte 0x0115
	@ event command: goto
	.byte 0x05
	.4byte 0x08211B94 @ EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B42: @ 0x08211B42
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211C70 @ gText_Rom_211C70
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08211B94 @ EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B50: @ 0x08211B50
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211C95 @ gText_Rom_211C95
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08211B94 @ EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B65: @ 0x08211B65
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0004
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08211B86 @ EventScript_JP_08211B86
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211CE6 @ gText_Rom_211CE6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0004
	@ event command: goto
	.byte 0x05
	.4byte 0x08211B94 @ EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B86: @ 0x08211B86
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211D95 @ gText_Rom_211D95
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08211B94 @ EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B94: @ 0x08211B94
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8008
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
