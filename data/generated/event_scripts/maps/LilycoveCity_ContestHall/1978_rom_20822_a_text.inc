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
sAnalyzedEventData_0820824A: @ 0x0820824A
MapScripts_JP_0820824A: @ 0x0820824A
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08208255
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_08208255: @ 0x08208255
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0008
	@ event command: goto
	.byte 0x05
	.4byte 0x0820825E @ EventScript_JP_0820825E
	.byte 0x02
EventScript_JP_0820825E: @ 0x0820825E
	@ event command: special
	.byte 0x25
	.2byte 0x0169
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08208278 @ EventScript_JP_08208278
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820827C @ EventScript_JP_0820827C
	@ event command: end
	.byte 0x02
EventScript_JP_08208278: @ 0x08208278
	@ event command: setflag
	.byte 0x29
	.2byte 0x03E1
	@ event command: end
	.byte 0x02
EventScript_JP_0820827C: @ 0x0820827C
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x03E1
	@ event command: end
	.byte 0x02
EventScript_JP_08208280: @ 0x08208280
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
EventScript_JP_0820828E: @ 0x0820828E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082082B6 @ gText_Rom_2082B6
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08208297: @ 0x08208297
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086D
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082082AC @ EventScript_JP_082082AC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082082FD @ gText_Rom_2082FD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082082AC: @ 0x082082AC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08208337 @ gText_Rom_208337
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
