	@ data/text/trainers.inc:524 Route108_Text_TaraIntro (+1 aliases)
	.globl gText_Rom_25AC1E
gText_Rom_25AC1E: @ 0x0825AC1E
	.string "ウソつきな カレに いわれたのよ\nビキニが にあってて カワイイって……$"
	.if (. - gText_Rom_25AC1E) > 0x25
	.error "gText_Rom_25AC1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AC1E) < 0x25
	.space 0x25 - (. - gText_Rom_25AC1E)
	.endif
