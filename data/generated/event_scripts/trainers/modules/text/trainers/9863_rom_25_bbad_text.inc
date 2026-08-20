	@ data/text/trainers.inc:926 Route111_Text_BeauPostBattle
	.globl gText_Rom_25BBAD
gText_Rom_25BBAD: @ 0x0825BBAD
	.string "いつかは ほんものの ヒーローに なる!\nそのために もっと がんばって\lポケモンと じぶんを きたえてみせるよ{EOS}"
	.if (. - gText_Rom_25BBAD) > 0x39
	.error "gText_Rom_25BBAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BBAD) < 0x39
	.space 0x39 - (. - gText_Rom_25BBAD)
	.endif
