	@ data/text/move_tutors.inc:195 MoveTutor_Text_DoubleEdgeDeclined
	.globl gText_Rom_2766C4
gText_Rom_2766C4: @ 0x082766C4
	.string "うん もう!\nあなたに まで ふられちゃったわ$"
	.if (. - gText_Rom_2766C4) > 0x18
	.error "gText_Rom_2766C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2766C4) < 0x18
	.space 0x18 - (. - gText_Rom_2766C4)
	.endif
