	@ data/text/trainers.inc:659 Route109_Text_GwenIntro (+1 aliases)
	.globl gText_Rom_25B0D8
gText_Rom_25B0D8: @ 0x0825B0D8
	.string "そこの トレーナーさん\nあたしと たたかう でちゅ!$"
	.if (. - gText_Rom_25B0D8) > 0x1b
	.error "gText_Rom_25B0D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B0D8) < 0x1b
	.space 0x1b - (. - gText_Rom_25B0D8)
	.endif
