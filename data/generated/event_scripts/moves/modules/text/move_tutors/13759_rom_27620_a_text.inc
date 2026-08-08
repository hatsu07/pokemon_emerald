	@ data/text/move_tutors.inc:74 MoveTutor_MimicDeclined
	.globl gText_Rom_27620A
gText_Rom_27620A: @ 0x0827620A
	.string "ちぇっ なーんだ!\nボク ものまね おしえたいのにな!$"
	.if (. - gText_Rom_27620A) > 0x1c
	.error "gText_Rom_27620A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27620A) < 0x1c
	.space 0x1c - (. - gText_Rom_27620A)
	.endif
