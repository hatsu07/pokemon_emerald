	@ data/text/trainers.inc:1919 Route118_Text_DaltonRematchIntro (+1 aliases)
	.globl gText_Rom_25E5CC
gText_Rom_25E5CC: @ 0x0825E5CC
	.string "ぼくと ポケモンの メロディ\nあなたの こころに とどけるよ$"
	.if (. - gText_Rom_25E5CC) > 0x1f
	.error "gText_Rom_25E5CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E5CC) < 0x1f
	.space 0x1f - (. - gText_Rom_25E5CC)
	.endif
