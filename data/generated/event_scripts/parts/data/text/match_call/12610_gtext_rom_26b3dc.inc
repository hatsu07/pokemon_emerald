	@ data/text/match_call.inc:790 MatchCall_Text_Brendan6
	.globl gText_Rom_26B3DC
gText_Rom_26B3DC: @ 0x0826B3DC
	.string "ユウキ『あっ {PLAYER}!\pさばくに げんえいのとう っていうのが\nたってるの しってるか?\pしんきろう みたいに\nみえたり みえなかったり するんだよ!\pオレも みてみたいなー"
	.byte EOS
	.if (. - gText_Rom_26B3DC) > 0x57
	.error "gText_Rom_26B3DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B3DC) < 0x57
	.space 0x57 - (. - gText_Rom_26B3DC)
	.endif
