	@ data/text/trainers.inc:2123 Route120_Text_RobertIntro (+1 aliases)
	.globl gText_Rom_25EE2F
gText_Rom_25EE2F: @ 0x0825EE2F
	.string "ボクの ポケモンは つよいぜ!\nキミの ポケモンは どうかな?$"
	.if (. - gText_Rom_25EE2F) > 0x20
	.error "gText_Rom_25EE2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EE2F) < 0x20
	.space 0x20 - (. - gText_Rom_25EE2F)
	.endif
