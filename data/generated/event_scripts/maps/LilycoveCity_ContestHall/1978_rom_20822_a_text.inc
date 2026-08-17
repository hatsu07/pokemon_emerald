	@ data/maps/LilycoveCity_ContestHall/scripts.inc:418 LilycoveCity_ContestHall_Text_SmartContestStage
	.globl gText_Rom_20822A
gText_Rom_20822A: @ 0x0820822A
	.string "かしこさコンテスト ステージ\nインテリ ポケモンに トロトロ！$"
	.if (. - gText_Rom_20822A) > 0x20
	.error "gText_Rom_20822A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20822A) < 0x20
	.space 0x20 - (. - gText_Rom_20822A)
	.endif
	@ analyzed canonical ROM range 0x0820824A-0x082082B5
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0820824A: @ 0x0820824A
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08208255
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_08208255: @ 0x08208255
	setrespawn 0x0008
	goto EventScript_JP_0820825E
	.byte 0x02
EventScript_JP_0820825E: @ 0x0820825E
	@ event command: special
	.byte 0x25
	.2byte 0x0169
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08208278
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0820827C
	end
EventScript_JP_08208278: @ 0x08208278
	setflag 0x03E1
	end
EventScript_JP_0820827C: @ 0x0820827C
	clearflag 0x03E1
	end
.globl EventScript_JP_08208280
EventScript_JP_08208280: @ 0x08208280
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_0820828E
EventScript_JP_0820828E: @ 0x0820828E
	loadword 0x00, gText_Rom_2082B6
	callstd 0x02
	end
.globl EventScript_JP_08208297
EventScript_JP_08208297: @ 0x08208297
	lock
	faceplayer
	checkflag 0x086D
	goto_if 0x01, EventScript_JP_082082AC
	loadword 0x00, gText_Rom_2082FD
	callstd 0x04
	release
	end
EventScript_JP_082082AC: @ 0x082082AC
	loadword 0x00, gText_Rom_208337
	callstd 0x04
	release
	end
