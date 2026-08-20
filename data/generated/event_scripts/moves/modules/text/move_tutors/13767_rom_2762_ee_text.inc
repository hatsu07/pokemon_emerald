	@ data/text/move_tutors.inc:97 MoveTutor_Text_MetronomeDeclined
	.globl gText_Rom_2762EE
gText_Rom_2762EE: @ 0x082762EE
	.string "そっか\nきが むいたら またおいでよ!{EOS}"
	.if (. - gText_Rom_2762EE) > 0x14
	.error "gText_Rom_2762EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2762EE) < 0x14
	.space 0x14 - (. - gText_Rom_2762EE)
	.endif
