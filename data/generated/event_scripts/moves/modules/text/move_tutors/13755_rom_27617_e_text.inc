	@ data/text/move_tutors.inc:61 MoveTutor_Text_FuryCutterTaught
	.globl gText_Rom_27617E
gText_Rom_27617E: @ 0x0827617E
	.string "れんぞくして あたるか どうかの\nスリルが たのしいんだよねぇ$"
	.if (. - gText_Rom_27617E) > 0x20
	.error "gText_Rom_27617E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27617E) < 0x20
	.space 0x20 - (. - gText_Rom_27617E)
	.endif
