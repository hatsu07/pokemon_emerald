	@ data/text/apprentice.inc:685 gText_ApprenticeWhichMove2
	.globl gText_Rom_271BB7
gText_Rom_271BB7: @ 0x08271BB7
	.string "{PLAYER}さん こんにちは!\nぼくの {STR_VAR_1}の こと なんだけど\lわざの ことで なやんでるんです\p{STR_VAR_2} と {STR_VAR_3}\nどっちの わざが つよいのか……\p{STR_VAR_1}には どっちの わざが\nあってると おもいますか?$"
	.if (. - gText_Rom_271BB7) > 0x63
	.error "gText_Rom_271BB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271BB7) < 0x63
	.space 0x63 - (. - gText_Rom_271BB7)
	.endif
