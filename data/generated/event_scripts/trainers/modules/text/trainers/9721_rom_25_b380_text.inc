	@ data/text/trainers.inc:728 Route110_Text_JacobIntro (+1 aliases)
	.globl gText_Rom_25B380
gText_Rom_25B380: @ 0x0825B380
	.string "おっと あぶない!\nバイク レースに なれてない ようだな!$"
	.if (. - gText_Rom_25B380) > 0x1f
	.error "gText_Rom_25B380 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B380) < 0x1f
	.space 0x1f - (. - gText_Rom_25B380)
	.endif
