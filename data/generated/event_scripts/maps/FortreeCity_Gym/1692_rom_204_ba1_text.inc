	@ data/maps/FortreeCity_Gym/scripts.inc:307 FortreeCity_Gym_Text_WinonaRematchNeedTwoMons (+1 aliases)
	.globl gText_Rom_204BA1
gText_Rom_204BA1: @ 0x08204BA1
	.string "ナギ『ひとは ちじょうに いる かぎり\nいんりょくから のがれることは できない\pでも ぜんりょくで はばたけば\nそらを とぶことは できるのです\pチャンピオンにまで のぼりつめた\nあなたの じつりょく\lもういちど みせて いただきますわ!\n……あら? たたかえる ポケモンを\n1ひきしか もっていませんね\pせめて 2ひき いじょうの\nポケモンを もって また きてください$"
	.if (. - gText_Rom_204BA1) > 0xbc
	.error "gText_Rom_204BA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204BA1) < 0xbc
	.space 0xbc - (. - gText_Rom_204BA1)
	.endif
	@ analyzed canonical ROM range 0x08204C5D-0x08204C94
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08204C5D: @ 0x08204C5D
MapScripts_JP_08204C5D: @ 0x08204C5D
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08204C68
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_08204C68: @ 0x08204C68
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0007
	@ event command: end
	.byte 0x02
EventScript_JP_08204C6C: @ 0x08204C6C
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
EventScript_JP_08204C7A: @ 0x08204C7A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204C95 @ gText_Rom_204C95
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08204C83: @ 0x08204C83
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204CCE @ gText_Rom_204CCE
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08204C8C: @ 0x08204C8C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204D21 @ gText_Rom_204D21
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
