	@ data/text/trainers.inc:1898 Route118_Text_WadeIntro (+1 aliases)
	.globl gText_Rom_25E4EC
gText_Rom_25E4EC: @ 0x0825E4EC
	.string "つりびとに だいじ なのは どうぐ!\nトレーナーに だいじ なのは\lもちろん ポケモンと ハートだな!$"
	.if (. - gText_Rom_25E4EC) > 0x34
	.error "gText_Rom_25E4EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E4EC) < 0x34
	.space 0x34 - (. - gText_Rom_25E4EC)
	.endif
