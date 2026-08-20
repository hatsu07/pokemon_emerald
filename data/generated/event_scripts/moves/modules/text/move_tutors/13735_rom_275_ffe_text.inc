	@ data/text/move_tutors.inc:14 MoveTutor_Text_SwaggerDeclined
	.globl gText_Rom_275FFE
gText_Rom_275FFE: @ 0x08275FFE
	.string "えー\nなんだよ つきあい わるいな{EOS}"
	.if (. - gText_Rom_275FFE) > 0x12
	.error "gText_Rom_275FFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275FFE) < 0x12
	.space 0x12 - (. - gText_Rom_275FFE)
	.endif
