	@ data/text/move_tutors.inc:127 MoveTutor_Text_SleepTalkTaught
	.globl gText_Rom_276404
gText_Rom_276404: @ 0x08276404
	.string "ワシ ばあさんの コイン\nいちども あてたことが なくてな……\lねごとでも ええから あたらんかな$"
	.if (. - gText_Rom_276404) > 0x32
	.error "gText_Rom_276404 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276404) < 0x32
	.space 0x32 - (. - gText_Rom_276404)
	.endif
