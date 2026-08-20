	@ data/text/trainers.inc:1871 Route118_Text_PerryIntro (+1 aliases)
	.globl gText_Rom_25E3F9
gText_Rom_25E3F9: @ 0x0825E3F9
	.string "かれいに おおぞらを まう\nとりポケモンが さいこう だぜ!{EOS}"
	.if (. - gText_Rom_25E3F9) > 0x1f
	.error "gText_Rom_25E3F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E3F9) < 0x1f
	.space 0x1f - (. - gText_Rom_25E3F9)
	.endif
