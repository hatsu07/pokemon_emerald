	@ data/text/match_call.inc:727 MatchCall_Text_BrendanRayquazaCall
	.globl gText_Rom_26ABC8
gText_Rom_26ABC8: @ 0x0826ABC8
	.string "…… …… ……\n…… …… …… ピッ!\pユウキ『おっ {PLAYER}!?\pオレ さっきまで キナギ タウンに\nいってたんだけどさ\lでっかい みどりいろの ポケモンが\lそらを とんで いくのを みたんだ!\pあんな すごいの みたこと ないよ\n{PLAYER}にも みせたかったなあ!\p…… …… ……\n…… …… …… ツー"
	.byte EOS
	.if (. - gText_Rom_26ABC8) > 0x99
	.error "gText_Rom_26ABC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ABC8) < 0x99
	.space 0x99 - (. - gText_Rom_26ABC8)
	.endif
