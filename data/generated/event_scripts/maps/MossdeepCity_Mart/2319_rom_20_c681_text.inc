	@ data/maps/MossdeepCity_Mart/scripts.inc:45 MossdeepCity_Mart_Text_NetAndDiveBallsRare
	.globl gText_Rom_20C681
gText_Rom_20C681: @ 0x0820C681
	.string "ネットボールと ダイブボールは\nここ トクサネでしか つくっていない\lめずらしい モンスターボール!\pネットボールは むしタイプや\nみずタイプの ポケモンに こうかてき!\pダイブボールは かいていに いる\nポケモンを つかまえ やすいんだ!$"
	.if (. - gText_Rom_20C681) > 0x79
	.error "gText_Rom_20C681 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C681) < 0x79
	.space 0x79 - (. - gText_Rom_20C681)
	.endif
	@ analyzed canonical ROM range 0x0820C6FA-0x0820C74D
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820C6FA: @ 0x0820C6FA
	.byte 0x00
EventScript_JP_0820C6FB: @ 0x0820C6FB
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0098
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820C73A @ EventScript_JP_0820C73A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C74E @ gText_Rom_20C74E
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820C744 @ EventScript_JP_0820C744
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C7A1 @ gText_Rom_20C7A1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0108
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: setflag
	.byte 0x29
	.2byte 0x0098
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C7C5 @ gText_Rom_20C7C5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_0820C73A: @ 0x0820C73A
EventScript_JP_0820C73A: @ 0x0820C73A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C7F9 @ gText_Rom_20C7F9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_0820C744: @ 0x0820C744
EventScript_JP_0820C744: @ 0x0820C744
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C7E7 @ gText_Rom_20C7E7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
