	@ data/text/move_tutors.inc:1 MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce
	.globl gText_Rom_275F5D
gText_Rom_275F5D: @ 0x08275F5D
	.string "この わざを おしえて もらえるのは\nいちど だけですが いいですか?{EOS}"
	.if (. - gText_Rom_275F5D) > 0x24
	.error "gText_Rom_275F5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275F5D) < 0x24
	.space 0x24 - (. - gText_Rom_275F5D)
	.endif
