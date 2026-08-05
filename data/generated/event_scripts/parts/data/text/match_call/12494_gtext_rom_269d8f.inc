	@ data/text/match_call.inc:616 MatchCall_Text_Mom1
	.globl gText_Rom_269D8F
gText_Rom_269D8F: @ 0x08269D8F
	.string "ママ『パパも あなたも\nみんな ポケモンに むちゅう なのね\pポケモンの みりょく って\nなんなの かしら……\pわたし?\nわたしは いえの ようじを おてつだい\lしてくれる ポケモンが すきだわ"
	.byte EOS
	.if (. - gText_Rom_269D8F) > 0x62
	.error "gText_Rom_269D8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269D8F) < 0x62
	.space 0x62 - (. - gText_Rom_269D8F)
	.endif
