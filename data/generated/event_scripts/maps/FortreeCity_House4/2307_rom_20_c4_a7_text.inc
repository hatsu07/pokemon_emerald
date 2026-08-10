	@ data/maps/FortreeCity_House4/scripts.inc:80 FortreeCity_House4_Text_Wingull (+1 aliases)
	.globl gText_Rom_20C4A7
gText_Rom_20C4A7: @ 0x0820C4A7
	.string "キャモメ『ぴひょー!$"
	.if (. - gText_Rom_20C4A7) > 0xb
	.error "gText_Rom_20C4A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C4A7) < 0xb
	.space 0xb - (. - gText_Rom_20C4A7)
	.endif
	@ analyzed canonical ROM range 0x0820C4B2-0x0820C4E0
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0820C4B2: @ 0x0820C4B2
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820C4BD
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_0820C4BD: @ 0x0820C4BD
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0009
	@ event command: end
	.byte 0x02
EventScript_JP_0820C4C1: @ 0x0820C4C1
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820C4CF: @ 0x0820C4CF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C4E1 @ gText_Rom_20C4E1
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820C4D8: @ 0x0820C4D8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C517 @ gText_Rom_20C517
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
