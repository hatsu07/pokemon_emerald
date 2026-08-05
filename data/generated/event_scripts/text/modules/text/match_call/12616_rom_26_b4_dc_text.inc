	@ data/text/match_call.inc:799 MatchCall_Text_Brendan9
	.globl gText_Rom_26B4DC
gText_Rom_26B4DC: @ 0x0826B4DC
	.string "ユウキ『なあなあ {PLAYER}!\pオレ また フエンタウンの\nおんせんに いこうと おもったんだけど\pデコボコさんどうの とちゅうに\nにんそうの わるいのが いたんだよ!\pあれって マグマだん…… だよな!?"
	.byte EOS
	.if (. - gText_Rom_26B4DC) > 0x65
	.error "gText_Rom_26B4DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B4DC) < 0x65
	.space 0x65 - (. - gText_Rom_26B4DC)
	.endif
