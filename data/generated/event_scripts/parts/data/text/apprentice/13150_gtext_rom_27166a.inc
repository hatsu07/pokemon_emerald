	@ data/text/apprentice.inc:643 gText_ApprenticeWhichMon11
	.globl gText_Rom_27166A
gText_Rom_27166A: @ 0x0827166A
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わし\lきみは とうぜん おぼえてるだろ?\pきょうも わしの しつもん いってみよう!\nポケモンに かんする そうだんだよ!\p{STR_VAR_1} と {STR_VAR_2}\nわしが つかまえるなら さあ どっち?$"
	.if (. - gText_Rom_27166A) > 0x7b
	.error "gText_Rom_27166A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27166A) < 0x7b
	.space 0x7b - (. - gText_Rom_27166A)
	.endif
