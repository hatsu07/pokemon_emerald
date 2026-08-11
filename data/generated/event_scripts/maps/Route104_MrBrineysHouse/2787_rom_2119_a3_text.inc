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
	setflag 0x089C
	checkflag 0x007F
	goto_if 0x00, EventScript_JP_082119D3
	checkflag 0x0869
	goto_if 0x00, EventScript_JP_082119D3
	setflag 0x0001
	end
EventScript_JP_082119D3: @ 0x082119D3
	setobjectxyperm 0x0001, 0x0004, 0x0006
	end
EventScript_JP_082119DB: @ 0x082119DB
	lock
	faceplayer
	checkflag 0x0001
	goto_if 0x01, EventScript_JP_08211A4C
	loadword 0x00, gText_Rom_263C9E
	callstd 0x04
	checkflag 0x007F
	goto_if 0x01, EventScript_JP_08211A1A
	setflag 0x007F
	loadword 0x00, gText_Rom_263CD9
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_08211A3A
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_08211A43
	release
	end
EventScript_JP_08211A1A: @ 0x08211A1A
	loadword 0x00, gText_Rom_263CC6
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_08211A3A
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_08211A43
	release
	end
EventScript_JP_08211A3A: @ 0x08211A3A
	loadword 0x00, gText_Rom_263D0D
	callstd 0x04
	return
EventScript_JP_08211A43: @ 0x08211A43
	loadword 0x00, gText_Rom_263DCA
	callstd 0x04
	return
EventScript_JP_08211A4C: @ 0x08211A4C
	message gText_Rom_243927
	waitmessage
	pokemartdecoration2 0x08211A64
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x13, 0x00, 0x14, 0x00, 0x15, 0x00, 0x16, 0x00, 0x17, 0x00, 0x18, 0x00, 0x00
	.byte 0x00, 0x6C, 0x02
EventScript_JP_08211A74: @ 0x08211A74
	lock
	faceplayer
	checkflag 0x005E
	goto_if 0x00, EventScript_JP_08211A89
	loadword 0x00, gText_Rom_263E32
	callstd 0x04
	release
	end
EventScript_JP_08211A89: @ 0x08211A89
	loadword 0x00, gText_Rom_263DE8
	callstd 0x04
	setorcopyvar 0x8000, 0x010C
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	loadword 0x00, gText_Rom_263E32
	callstd 0x04
	setflag 0x005E
	release
	end
EventScript_JP_08211AAA: @ 0x08211AAA
	lock
	faceplayer
	dotimebasedevents
	checkflag 0x0930
	goto_if 0x01, EventScript_JP_08211AEA
	loadword 0x00, gText_Rom_263EA4
	callstd 0x04
	random 0x0008
	addvar 0x800D, 0x0085
	setorcopyvar 0x8000, 0x800D
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0930
	loadword 0x00, gText_Rom_263ED1
	callstd 0x04
	release
	end
EventScript_JP_08211AEA: @ 0x08211AEA
	loadword 0x00, gText_Rom_263ED1
	callstd 0x04
	release
	end
	.byte 0x00
EventScript_JP_08211AF5: @ 0x08211AF5
	lock
	faceplayer
	setvar 0x8008, 0x0002
	loadword 0x00, gText_Rom_211BA1
	callstd 0x04
	goto EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B0A: @ 0x08211B0A
	lock
	faceplayer
	setvar 0x8008, 0x0003
	checkflag 0x0115
	goto_if 0x01, EventScript_JP_08211B42
	loadword 0x00, gText_Rom_211C09
	callstd 0x04
	setorcopyvar 0x8000, 0x00B5
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0115
	goto EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B42: @ 0x08211B42
	loadword 0x00, gText_Rom_211C70
	callstd 0x04
	goto EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B50: @ 0x08211B50
	lock
	faceplayer
	setvar 0x8008, 0x0001
	loadword 0x00, gText_Rom_211C95
	callstd 0x04
	goto EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B65: @ 0x08211B65
	lock
	faceplayer
	setvar 0x8008, 0x0004
	checkflag 0x0004
	goto_if 0x01, EventScript_JP_08211B86
	loadword 0x00, gText_Rom_211CE6
	callstd 0x04
	setflag 0x0004
	goto EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B86: @ 0x08211B86
	loadword 0x00, gText_Rom_211D95
	callstd 0x04
	goto EventScript_JP_08211B94
	.byte 0x02
EventScript_JP_08211B94: @ 0x08211B94
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8008
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
