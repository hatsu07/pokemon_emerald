	@ data/maps/MossdeepCity_Mart/scripts.inc:45 MossdeepCity_Mart_Text_NetAndDiveBallsRare
	.globl gText_Rom_20C681
gText_Rom_20C681: @ 0x0820C681
	.string "ネットボールと ダイブボールは\nここ トクサネでしか つくっていない\lめずらしい モンスターボール!\pネットボールは むしタイプや\nみずタイプの ポケモンに こうかてき!\pダイブボールは かいていに いる\nポケモンを つかまえ やすいんだ!{EOS}"
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
.globl EventScript_JP_0820C6FB
EventScript_JP_0820C6FB: @ 0x0820C6FB
	lock
	faceplayer
	checkflag 0x0098
	goto_if 0x01, EventScript_JP_0820C73A
	loadword 0x00, gText_Rom_20C74E
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820C744
	loadword 0x00, gText_Rom_20C7A1
	callstd 0x04
	setorcopyvar 0x8000, 0x0108
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x0098
	loadword 0x00, gText_Rom_20C7C5
	callstd 0x04
	release
	end
EventScript_0820C73A: @ 0x0820C73A
EventScript_JP_0820C73A: @ 0x0820C73A
	loadword 0x00, gText_Rom_20C7F9
	callstd 0x04
	release
	end
EventScript_0820C744: @ 0x0820C744
EventScript_JP_0820C744: @ 0x0820C744
	loadword 0x00, gText_Rom_20C7E7
	callstd 0x04
	release
	end
