	@ data/text/move_tutors.inc:42 MoveTutor_Text_RolloutTaught
	.globl gText_Rom_2760E8
gText_Rom_2760E8: @ 0x082760E8
	.string "くさに ねころがると しあわせだなー\nごろ ごろ{EOS}"
	.if (. - gText_Rom_2760E8) > 0x19
	.error "gText_Rom_2760E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2760E8) < 0x19
	.space 0x19 - (. - gText_Rom_2760E8)
	.endif
