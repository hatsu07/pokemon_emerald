	@ data/text/match_call.inc:724 MatchCall_Text_MayRayquazaCall
	.globl gText_Rom_26AB1B
gText_Rom_26AB1B: @ 0x0826AB1B
	.string "…… …… ……\n…… …… …… ピッ!\pハルカ『あっ {PLAYER}{KUN}!?\pあたしね さっきまで キナギ タウンに\nいってたんだけど\lおおきな みどりいろの ポケモンが\lそらを とんで いくのを みたの!\pあたし……\nあんな ポケモン みたこと ない!\pなんだろう もしかしたら これって\nだいはっけん!?\p…… …… ……\n…… …… …… ツー"
	.byte EOS
	.if (. - gText_Rom_26AB1B) > 0xad
	.error "gText_Rom_26AB1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AB1B) < 0xad
	.space 0xad - (. - gText_Rom_26AB1B)
	.endif
