	@ data/text/move_tutors.inc:22 MoveTutor_Text_SwaggerTaught
	.globl gText_Rom_276026
gText_Rom_276026: @ 0x08276026
	.string "こんどっから いばる かわりに\nじまん するだけに しておくよ……$"
	.if (. - gText_Rom_276026) > 0x22
	.error "gText_Rom_276026 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276026) < 0x22
	.space 0x22 - (. - gText_Rom_276026)
	.endif
