	@ data/text/move_tutors.inc:203 MoveTutor_Text_DoubleEdgeTaught
	.globl gText_Rom_2766F4
gText_Rom_2766F4: @ 0x082766F4
	.string "もう いいわっ!\nあたしも こいを すてて\lつよい オンナに なってやるっ!{EOS}"
	.if (. - gText_Rom_2766F4) > 0x27
	.error "gText_Rom_2766F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2766F4) < 0x27
	.space 0x27 - (. - gText_Rom_2766F4)
	.endif
