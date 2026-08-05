	@ data/text/move_tutors.inc:34 MoveTutor_Text_RolloutDeclined
	.globl gText_Rom_2760B8
gText_Rom_2760B8: @ 0x082760B8
	.string "えんりょ いらないのに!\nごろ ごろ$"
	.if (. - gText_Rom_2760B8) > 0x13
	.error "gText_Rom_2760B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2760B8) < 0x13
	.space 0x13 - (. - gText_Rom_2760B8)
	.endif
