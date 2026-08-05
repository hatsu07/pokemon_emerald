	@ data/text/move_tutors.inc:82 MoveTutor_Text_MimicTaught
	.globl gText_Rom_276248
gText_Rom_276248: @ 0x08276248
	.string "ものまねは おくの ふかい わざじゃ!\nボ… わしの ように\lうまく できるかな?$"
	.if (. - gText_Rom_276248) > 0x2a
	.error "gText_Rom_276248 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276248) < 0x2a
	.space 0x2a - (. - gText_Rom_276248)
	.endif
