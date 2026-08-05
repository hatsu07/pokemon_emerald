	@ data/text/move_tutors.inc:148 MoveTutor_Text_SubstituteWhichMon
	.globl gText_Rom_2764E1
gText_Rom_2764E1: @ 0x082764E1
	.string "うふふ\nどの ポケモンちゃんが いいかしら?$"
	.if (. - gText_Rom_2764E1) > 0x17
	.error "gText_Rom_2764E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2764E1) < 0x17
	.space 0x17 - (. - gText_Rom_2764E1)
	.endif
