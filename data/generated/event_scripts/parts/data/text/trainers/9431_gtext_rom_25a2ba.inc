	@ data/text/trainers.inc:302 Route105_Text_FosterIntro (+1 aliases)
	.globl gText_Rom_25A2BA
gText_Rom_25A2BA: @ 0x0825A2BA
	.string "この あたりに\nふしぎな いわが あるらしいが\lきみ しらないかい?$"
	.if (. - gText_Rom_25A2BA) > 0x23
	.error "gText_Rom_25A2BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A2BA) < 0x23
	.space 0x23 - (. - gText_Rom_25A2BA)
	.endif
