	@ data/text/move_tutors.inc:217 MoveTutor_Text_ExplosionDeclined
	.globl gText_Rom_276797
gText_Rom_276797: @ 0x08276797
	.string "がーっ!\nイナカもん だからって ことわるなあ!$"
	.if (. - gText_Rom_276797) > 0x19
	.error "gText_Rom_276797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276797) < 0x19
	.space 0x19 - (. - gText_Rom_276797)
	.endif
