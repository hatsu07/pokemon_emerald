	@ data/maps/LilycoveCity_House1/scripts.inc:21 LilycoveCity_House1_Text_Kecleon
	.globl gText_Rom_209FCF
gText_Rom_209FCF: @ 0x08209FCF
	.string "カクレオン『るろろ……?$"
	.if (. - gText_Rom_209FCF) > 0xd
	.error "gText_Rom_209FCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209FCF) < 0xd
	.space 0xd - (. - gText_Rom_209FCF)
	.endif
	@ analyzed canonical ROM range 0x08209FDC-0x0820A01D
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08209FDC: @ 0x08209FDC
	.byte 0x00
EventScript_JP_08209FDD: @ 0x08209FDD
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00EA
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A014 @ EventScript_JP_0820A014
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A01E @ gText_Rom_20A01E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x014C
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
	.2byte 0x00EA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A03E @ gText_Rom_20A03E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_0820A014: @ 0x0820A014
EventScript_JP_0820A014: @ 0x0820A014
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A03E @ gText_Rom_20A03E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
