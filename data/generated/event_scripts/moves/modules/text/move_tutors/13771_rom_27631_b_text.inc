	@ data/text/move_tutors.inc:105 MoveTutor_Text_MetronomeTaught
	.globl gText_Rom_27631B
gText_Rom_27631B: @ 0x0827631B
	.string "ゆびをふると ステキな ことが\nいっぱい おきるんだよー!\pわたしたちも つかえたら いーのにね!$"
	.if (. - gText_Rom_27631B) > 0x32
	.error "gText_Rom_27631B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27631B) < 0x32
	.space 0x32 - (. - gText_Rom_27631B)
	.endif
