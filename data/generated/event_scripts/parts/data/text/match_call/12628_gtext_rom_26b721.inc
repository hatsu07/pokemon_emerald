	@ data/text/match_call.inc:817 MatchCall_Text_Brendan15
	.globl gText_Rom_26B721
gText_Rom_26B721: @ 0x0826B721
	.string "ユウキ『もう ホウエンちほうで\n{PLAYER}のこと しらない\lトレーナー なんて いないんだ!\pオレが {PLAYER}と\nともだちだ っていうと\lみんな うらやましそうに するよ!"
	.byte EOS
	.if (. - gText_Rom_26B721) > 0x52
	.error "gText_Rom_26B721 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B721) < 0x52
	.space 0x52 - (. - gText_Rom_26B721)
	.endif
