	@ data/text/trainers.inc:3374 Route134_Text_HitoshiIntro (+1 aliases)
	.globl gText_Rom_262143
gText_Rom_262143: @ 0x08262143
	.string "ポケモントレーナーなら\nだまって ポケモンしょうぶ!{EOS}"
	.if (. - gText_Rom_262143) > 0x1b
	.error "gText_Rom_262143 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262143) < 0x1b
	.space 0x1b - (. - gText_Rom_262143)
	.endif
