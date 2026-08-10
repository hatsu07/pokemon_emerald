	@ data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc:208 LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink
	.globl gText_Rom_20B180
gText_Rom_20B180: @ 0x0820B180
	.string "……やっぱり やめた!$"
	.if (. - gText_Rom_20B180) > 0xc
	.error "gText_Rom_20B180 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B180) < 0xc
	.space 0xc - (. - gText_Rom_20B180)
	.endif
	@ analyzed canonical ROM range 0x0820B18C-0x0820B83D
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
EventScript_JP_0820B18D: @ 0x0820B18D
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x0820B365 @ EventScript_JP_0820B365
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x4043
	@ event command: special
	.byte 0x25
	.2byte 0x0131
	@ event command: message
	.byte 0x67
	.4byte 0x08243A47 @ gText_Rom_243A47
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x01AE
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
	.4byte 0x0820B1F2 @ EventScript_JP_0820B1F2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B1FE @ EventScript_JP_0820B1FE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B20A @ EventScript_JP_0820B20A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B216 @ EventScript_JP_0820B216
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B222 @ EventScript_JP_0820B222
	@ event command: end
	.byte 0x02
EventScript_JP_0820B1F2: @ 0x0820B1F2
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x00
	.byte 0x00
	.byte 0x39
	.byte 0x00
	.byte 0x00
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B22E @ EventScript_JP_0820B22E
	.byte 0x02
EventScript_JP_0820B1FE: @ 0x0820B1FE
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x00
	.byte 0x00
	.byte 0x39
	.byte 0x01
	.byte 0x00
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B22E @ EventScript_JP_0820B22E
	.byte 0x02
EventScript_JP_0820B20A: @ 0x0820B20A
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x00
	.byte 0x00
	.byte 0x39
	.byte 0x02
	.byte 0x00
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B22E @ EventScript_JP_0820B22E
	.byte 0x02
EventScript_JP_0820B216: @ 0x0820B216
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x00
	.byte 0x00
	.byte 0x39
	.byte 0x03
	.byte 0x00
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B22E @ EventScript_JP_0820B22E
	.byte 0x02
EventScript_JP_0820B222: @ 0x0820B222
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x00
	.byte 0x00
	.byte 0x39
	.byte 0x04
	.byte 0x00
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B22E @ EventScript_JP_0820B22E
	.byte 0x02
EventScript_JP_0820B22E: @ 0x0820B22E
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
	.4byte 0x0820B321 @ EventScript_JP_0820B321
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B2F9 @ EventScript_JP_0820B2F9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B2D1 @ EventScript_JP_0820B2D1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B2A9 @ EventScript_JP_0820B2A9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B281 @ EventScript_JP_0820B281
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B349 @ EventScript_JP_0820B349
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B349 @ EventScript_JP_0820B349
	@ event command: end
	.byte 0x02
EventScript_JP_0820B281: @ 0x0820B281
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0004
	@ event command: setdynamicwarp
	.byte 0x3F
	.byte 0x0D
	.byte 0x10
	.byte 0xFF
	.2byte 0x0002
	.2byte 0x0001
	.byte 0x21, 0x43, 0x40, 0x04, 0x00, 0x06, 0x01, 0x49, 0xB3, 0x20, 0x08, 0x04, 0x4E, 0xB3, 0x20, 0x08
	.byte 0x16, 0x43, 0x40, 0x04, 0x00, 0x05, 0x49, 0xB3, 0x20, 0x08, 0x02
EventScript_JP_0820B2A9: @ 0x0820B2A9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0005
	@ event command: setdynamicwarp
	.byte 0x3F
	.byte 0x0D
	.byte 0x11
	.byte 0xFF
	.2byte 0x0002
	.2byte 0x0001
	.byte 0x21, 0x43, 0x40, 0x05, 0x00, 0x06, 0x01, 0x49, 0xB3, 0x20, 0x08, 0x04, 0x4E, 0xB3, 0x20, 0x08
	.byte 0x16, 0x43, 0x40, 0x05, 0x00, 0x05, 0x49, 0xB3, 0x20, 0x08, 0x02
EventScript_JP_0820B2D1: @ 0x0820B2D1
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0006
	@ event command: setdynamicwarp
	.byte 0x3F
	.byte 0x0D
	.byte 0x12
	.byte 0xFF
	.2byte 0x0002
	.2byte 0x0001
	.byte 0x21, 0x43, 0x40, 0x06, 0x00, 0x06, 0x01, 0x49, 0xB3, 0x20, 0x08, 0x04, 0x4E, 0xB3, 0x20, 0x08
	.byte 0x16, 0x43, 0x40, 0x06, 0x00, 0x05, 0x49, 0xB3, 0x20, 0x08, 0x02
EventScript_JP_0820B2F9: @ 0x0820B2F9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0007
	@ event command: setdynamicwarp
	.byte 0x3F
	.byte 0x0D
	.byte 0x13
	.byte 0xFF
	.2byte 0x0002
	.2byte 0x0001
	.byte 0x21, 0x43, 0x40, 0x07, 0x00, 0x06, 0x01, 0x49, 0xB3, 0x20, 0x08, 0x04, 0x4E, 0xB3, 0x20, 0x08
	.byte 0x16, 0x43, 0x40, 0x07, 0x00, 0x05, 0x49, 0xB3, 0x20, 0x08, 0x02
EventScript_JP_0820B321: @ 0x0820B321
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0008
	@ event command: setdynamicwarp
	.byte 0x3F
	.byte 0x0D
	.byte 0x14
	.byte 0xFF
	.2byte 0x0002
	.2byte 0x0001
	.byte 0x21, 0x43, 0x40, 0x08, 0x00, 0x06, 0x01, 0x49, 0xB3, 0x20, 0x08, 0x04, 0x4E, 0xB3, 0x20, 0x08
	.byte 0x16, 0x43, 0x40, 0x08, 0x00, 0x05, 0x49, 0xB3, 0x20, 0x08, 0x02
EventScript_JP_0820B349: @ 0x0820B349
	@ event command: special
	.byte 0x25
	.2byte 0x020A
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x25, 0x0A, 0x02, 0x68, 0x4F, 0x0F, 0x80, 0x2D, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x30, 0x25
	.byte 0x11, 0x01, 0x27, 0x29, 0x02, 0x00, 0x03
EventScript_JP_0820B365: @ 0x0820B365
	@ event command: special
	.byte 0x25
	.2byte 0x00D8
	@ event command: return
	.byte 0x03
MapScripts_JP_0820B369: @ 0x0820B369
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_0820B36F
	.byte 0
EventScript_JP_0820B36F: @ 0x0820B36F
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0064
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B3A6 @ EventScript_JP_0820B3A6
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B37E @ EventScript_JP_0820B37E
	.byte 0x02
EventScript_JP_0820B37E: @ 0x0820B37E
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0065
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B3BE @ EventScript_JP_0820B3BE
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B38D @ EventScript_JP_0820B38D
	.byte 0x02
EventScript_JP_0820B38D: @ 0x0820B38D
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0066
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B3D6 @ EventScript_JP_0820B3D6
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B39C @ EventScript_JP_0820B39C
	.byte 0x02
EventScript_JP_0820B39C: @ 0x0820B39C
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0067
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B3EE @ EventScript_JP_0820B3EE
	@ event command: end
	.byte 0x02
EventScript_JP_0820B3A6: @ 0x0820B3A6
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0005
	.2byte 0x0005
	.2byte 0x0204
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0002
	.2byte 0x0007
	.2byte 0x0239
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B37E @ EventScript_JP_0820B37E
	.byte 0x02
EventScript_JP_0820B3BE: @ 0x0820B3BE
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0008
	.2byte 0x000E
	.2byte 0x0204
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0008
	.2byte 0x000A
	.2byte 0x0239
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B38D @ EventScript_JP_0820B38D
	.byte 0x02
EventScript_JP_0820B3D6: @ 0x0820B3D6
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x000F
	.2byte 0x0011
	.2byte 0x020C
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0011
	.2byte 0x000F
	.2byte 0x0239
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B39C @ EventScript_JP_0820B39C
	.byte 0x02
EventScript_JP_0820B3EE: @ 0x0820B3EE
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0001
	.2byte 0x0017
	.2byte 0x020D
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0005
	.2byte 0x0018
	.2byte 0x0239
	.2byte 0x0001
	@ event command: end
	.byte 0x02
EventScript_JP_0820B401: @ 0x0820B401
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x08
	.2byte 0x010F
	.2byte 0x0000
	.4byte 0x0820BE42 @ gText_Rom_20BE42
	.4byte 0x0820BF1C @ gText_Rom_20BF1C
	.4byte 0x0820C0D6 @ gText_Rom_20C0D6
	.4byte 0x0820B43A @ EventScript_JP_0820B43A
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
	.4byte 0x0820B4E7 @ EventScript_JP_0820B4E7
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00AB
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820B4A0 @ EventScript_JP_0820B4A0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C075 @ gText_Rom_20C075
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820B43A: @ 0x0820B43A
	@ event command: message
	.byte 0x67
	.4byte 0x0820BF61 @ gText_Rom_20BF61
	@ event command: waitmessage
	.byte 0x66
	@ event command: call
	.byte 0x04
	.4byte 0x0824310A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820BF7D @ gText_Rom_20BF7D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x04F6
	@ event command: setflag
	.byte 0x29
	.2byte 0x086D
	@ event command: setflag
	.byte 0x29
	.2byte 0x039C
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0365
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0393
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0007
	@ event command: call
	.byte 0x04
	.4byte 0x08242FCF
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0389
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0337
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02F4
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x035E
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x035F
	@ event command: setvar
	.byte 0x16
	.2byte 0x405D
	.2byte 0x0001
	@ event command: setflag
	.byte 0x29
	.2byte 0x02F1
	@ event command: setvar
	.byte 0x16
	.2byte 0x409F
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x0820B4C4 @ EventScript_JP_0820B4C4
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
	.4byte 0x0820C058 @ gText_Rom_20C058
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
	.2byte 0x01D8
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820B4A0: @ 0x0820B4A0
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0124
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
	.4byte 0x0820BFE8 @ gText_Rom_20BFE8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00AB
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820B4C4: @ 0x0820B4C4
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0124
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
	.4byte 0x0820BFE8 @ gText_Rom_20BFE8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00AB
	@ event command: return
	.byte 0x03
EventScript_JP_0820B4E7: @ 0x0820B4E7
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x07
	.2byte 0x010F
	.2byte 0x0000
	.4byte 0x0820C186 @ gText_Rom_20C186
	.4byte 0x0820C21E @ gText_Rom_20C21E
	.4byte 0x0820C283 @ gText_Rom_20C283
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C23E @ gText_Rom_20C23E
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
	.byte 0x69, 0x2B, 0x64, 0x00, 0x06, 0x01, 0x39, 0xB5, 0x20, 0x08, 0x29, 0x64, 0x00, 0x4F, 0xFF, 0x00
	.byte 0x99, 0xB7, 0x20, 0x08, 0x51, 0x00, 0x00, 0xA2, 0x05, 0x00, 0x05, 0x00, 0x04, 0x02, 0x00, 0x00
	.byte 0xA2, 0x02, 0x00, 0x07, 0x00, 0x39, 0x02, 0x01, 0x00, 0x05, 0x31, 0xB5, 0x20, 0x08, 0x02
EventText_JP_0820B531: @ 0x0820B531
	.string "ゆズ　ぁや　ヒいれト　ぽ$"
	.byte 0x00, 0x99, 0xB7, 0x20, 0x08, 0x51, 0x00, 0x00, 0xA2, 0x05, 0x00, 0x05, 0x00, 0x0C, 0x02, 0x00
	.byte 0x00, 0xA2, 0x02, 0x00, 0x07, 0x00, 0x38, 0x02, 0x01, 0x00, 0x05, 0x31, 0xB5, 0x20, 0x08, 0x02
	.byte 0x69, 0x2B, 0x65, 0x00, 0x06, 0x01, 0x8D, 0xB5, 0x20, 0x08, 0x29, 0x65, 0x00, 0x4F, 0xFF, 0x00
	.byte 0x99, 0xB7, 0x20, 0x08, 0x51, 0x00, 0x00, 0xA2, 0x08, 0x00, 0x0E, 0x00, 0x04, 0x02, 0x00, 0x00
	.byte 0xA2, 0x08, 0x00, 0x0A, 0x00, 0x39, 0x02, 0x01, 0x00, 0x05, 0x31, 0xB5, 0x20, 0x08, 0x02
EventText_JP_0820B58D: @ 0x0820B58D
	.string "れナ　ぽ$"
	.byte 0x00, 0x99, 0xB7, 0x20, 0x08, 0x51, 0x00, 0x00, 0xA2, 0x08, 0x00, 0x0E, 0x00, 0x05, 0x02, 0x00
	.byte 0x00, 0xA2, 0x08, 0x00, 0x0A, 0x00, 0x38, 0x02, 0x01, 0x00, 0x05, 0x31, 0xB5, 0x20, 0x08, 0x02
	.byte 0x69, 0x2B, 0x66, 0x00, 0x06, 0x01, 0xE1, 0xB5, 0x20, 0x08, 0x29, 0x66, 0x00, 0x4F, 0xFF, 0x00
	.byte 0x99, 0xB7, 0x20, 0x08, 0x51, 0x00, 0x00, 0xA2, 0x0F, 0x00, 0x11, 0x00, 0x0C, 0x02, 0x00, 0x00
	.byte 0xA2, 0x11, 0x00, 0x0F, 0x00, 0x39, 0x02, 0x01, 0x00, 0x05, 0x31, 0xB5, 0x20, 0x08, 0x02
EventText_JP_0820B5E1: @ 0x0820B5E1
	.string "れニ　ぽ$"
	.byte 0x00, 0x99, 0xB7, 0x20, 0x08, 0x51, 0x00, 0x00, 0xA2, 0x0F, 0x00, 0x11, 0x00, 0x04, 0x02, 0x00
	.byte 0x00, 0xA2, 0x11, 0x00, 0x0F, 0x00, 0x38, 0x02, 0x01, 0x00, 0x05, 0x31, 0xB5, 0x20, 0x08, 0x02
	.byte 0x69, 0x2B, 0x67, 0x00, 0x06, 0x01, 0x35, 0xB6, 0x20, 0x08, 0x29, 0x67, 0x00, 0x4F, 0xFF, 0x00
	.byte 0x99, 0xB7, 0x20, 0x08, 0x51, 0x00, 0x00, 0xA2, 0x01, 0x00, 0x17, 0x00, 0x0D, 0x02, 0x00, 0x00
	.byte 0xA2, 0x05, 0x00, 0x18, 0x00, 0x39, 0x02, 0x01, 0x00, 0x05, 0x31, 0xB5, 0x20, 0x08, 0x02
EventText_JP_0820B635: @ 0x0820B635
	.string "れヌ　ぽ$"
	.byte 0x00, 0x99, 0xB7, 0x20, 0x08, 0x51, 0x00, 0x00, 0xA2, 0x01, 0x00, 0x17, 0x00, 0x04, 0x02, 0x00
	.byte 0x00, 0xA2, 0x05, 0x00, 0x18, 0x00, 0x38, 0x02, 0x01, 0x00, 0x05, 0x31, 0xB5, 0x20, 0x08, 0x02
EventScript_JP_0820B65A: @ 0x0820B65A
	@ event command: lockall
	.byte 0x69
	@ event command: warp7
	.byte 0xD7
	.byte 0x0E
	.byte 0x00
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x001E
	.byte 0x27, 0x6B, 0x02
EventScript_JP_0820B666: @ 0x0820B666
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x00E9
	.2byte 0x0000
	.4byte 0x0820B905 @ gText_Rom_20B905
	.4byte 0x0820B92B @ gText_Rom_20B92B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820B941 @ gText_Rom_20B941
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820B67D: @ 0x0820B67D
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x00EA
	.2byte 0x0000
	.4byte 0x0820B95C @ gText_Rom_20B95C
	.4byte 0x0820B971 @ gText_Rom_20B971
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820B984 @ gText_Rom_20B984
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820B694: @ 0x0820B694
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x00EB
	.2byte 0x0000
	.4byte 0x0820B9CC @ gText_Rom_20B9CC
	.4byte 0x0820BA26 @ gText_Rom_20BA26
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820BA3C @ gText_Rom_20BA3C
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820B6AB: @ 0x0820B6AB
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x00F4
	.2byte 0x0000
	.4byte 0x0820BA9A @ gText_Rom_20BA9A
	.4byte 0x0820BADB @ gText_Rom_20BADB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820BAEB @ gText_Rom_20BAEB
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820B6C2: @ 0x0820B6C2
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x00F5
	.2byte 0x0000
	.4byte 0x0820BB29 @ gText_Rom_20BB29
	.4byte 0x0820BB5E @ gText_Rom_20BB5E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820BB68 @ gText_Rom_20BB68
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820B6D9: @ 0x0820B6D9
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x00F6
	.2byte 0x0000
	.4byte 0x0820BBAB @ gText_Rom_20BBAB
	.4byte 0x0820BBE5 @ gText_Rom_20BBE5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820BBF6 @ gText_Rom_20BBF6
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820B6F0: @ 0x0820B6F0
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x023F
	.2byte 0x0000
	.4byte 0x0820BC40 @ gText_Rom_20BC40
	.4byte 0x0820BC60 @ gText_Rom_20BC60
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820BC71 @ gText_Rom_20BC71
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820B707: @ 0x0820B707
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0246
	.2byte 0x0000
	.4byte 0x0820BC91 @ gText_Rom_20BC91
	.4byte 0x0820BCB9 @ gText_Rom_20BCB9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820BCD5 @ gText_Rom_20BCD5
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820B71E: @ 0x0820B71E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x024F
	.2byte 0x0000
	.4byte 0x0820BD89 @ gText_Rom_20BD89
	.4byte 0x0820BDA2 @ gText_Rom_20BDA2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820BDB5 @ gText_Rom_20BDB5
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820B735: @ 0x0820B735
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0248
	.2byte 0x0000
	.4byte 0x0820BD31 @ gText_Rom_20BD31
	.4byte 0x0820BD53 @ gText_Rom_20BD53
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820BD63 @ gText_Rom_20BD63
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820B74C: @ 0x0820B74C
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0249
	.2byte 0x0000
	.4byte 0x0820BDE8 @ gText_Rom_20BDE8
	.4byte 0x0820BE12 @ gText_Rom_20BE12
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820BE1B @ gText_Rom_20BE1B
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820B763: @ 0x0820B763
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0247
	.2byte 0x0000
	.4byte 0x0820BCF5 @ gText_Rom_20BCF5
	.4byte 0x0820BD0A @ gText_Rom_20BD0A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820BD13 @ gText_Rom_20BD13
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820B77A: @ 0x0820B77A
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F6
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B78F @ EventScript_JP_0820B78F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820B83E @ gText_Rom_20B83E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820B78F: @ 0x0820B78F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820B8E9 @ gText_Rom_20B8E9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x14, 0x14, 0xFE
EventScript_JP_0820B79C: @ 0x0820B79C
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086D
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B7BC @ EventScript_JP_0820B7BC
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B7C6 @ EventScript_JP_0820B7C6
	.byte 0x02
EventScript_JP_0820B7AC: @ 0x0820B7AC
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086D
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B7BC @ EventScript_JP_0820B7BC
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B7C6 @ EventScript_JP_0820B7C6
	.byte 0x02
EventScript_JP_0820B7BC: @ 0x0820B7BC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C162 @ gText_Rom_20C162
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820B7C6: @ 0x0820B7C6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C153 @ gText_Rom_20C153
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820B7D0: @ 0x0820B7D0
	@ event command: playse
	.byte 0x2F
	.2byte 0x0023
	@ event command: waitse
	.byte 0x30
	@ event command: playse
	.byte 0x2F
	.2byte 0x002F
	@ event command: mossdeepgym3
	.byte 0xD5
	.2byte 0x0000
	@ event command: mossdeepgym1
	.byte 0xD3
	.2byte 0x0000
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: mossdeepgym2
	.byte 0xD4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: mossdeepgym4
	.byte 0xD6
	@ event command: end
	.byte 0x02
EventScript_JP_0820B7E6: @ 0x0820B7E6
	@ event command: playse
	.byte 0x2F
	.2byte 0x0023
	@ event command: waitse
	.byte 0x30
	@ event command: playse
	.byte 0x2F
	.2byte 0x002F
	@ event command: mossdeepgym3
	.byte 0xD5
	.2byte 0x0000
	@ event command: mossdeepgym1
	.byte 0xD3
	.2byte 0x0001
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: mossdeepgym2
	.byte 0xD4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: mossdeepgym4
	.byte 0xD6
	@ event command: end
	.byte 0x02
EventScript_JP_0820B7FC: @ 0x0820B7FC
	@ event command: playse
	.byte 0x2F
	.2byte 0x0023
	@ event command: waitse
	.byte 0x30
	@ event command: playse
	.byte 0x2F
	.2byte 0x002F
	@ event command: mossdeepgym3
	.byte 0xD5
	.2byte 0x0000
	@ event command: mossdeepgym1
	.byte 0xD3
	.2byte 0x0002
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: mossdeepgym2
	.byte 0xD4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: mossdeepgym4
	.byte 0xD6
	@ event command: end
	.byte 0x02
EventScript_JP_0820B812: @ 0x0820B812
	@ event command: playse
	.byte 0x2F
	.2byte 0x0023
	@ event command: waitse
	.byte 0x30
	@ event command: playse
	.byte 0x2F
	.2byte 0x002F
	@ event command: mossdeepgym3
	.byte 0xD5
	.2byte 0x0000
	@ event command: mossdeepgym1
	.byte 0xD3
	.2byte 0x0003
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: mossdeepgym2
	.byte 0xD4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: mossdeepgym4
	.byte 0xD6
	@ event command: end
	.byte 0x02
EventScript_JP_0820B828: @ 0x0820B828
	@ event command: playse
	.byte 0x2F
	.2byte 0x0023
	@ event command: waitse
	.byte 0x30
	@ event command: playse
	.byte 0x2F
	.2byte 0x002F
	@ event command: mossdeepgym3
	.byte 0xD5
	.2byte 0x0000
	@ event command: mossdeepgym1
	.byte 0xD3
	.2byte 0x0004
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: mossdeepgym2
	.byte 0xD4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: mossdeepgym4
	.byte 0xD6
	@ event command: end
	.byte 0x02
