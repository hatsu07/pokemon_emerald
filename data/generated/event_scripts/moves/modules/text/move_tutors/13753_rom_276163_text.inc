	@ data/text/move_tutors.inc:57 MoveTutor_Text_FuryCutterWhichMon
	.globl gText_Rom_276163
gText_Rom_276163: @ 0x08276163
	.string "わーい!\nじゃ おぼえさせる ポケモンを おしえてね$"
	.if (. - gText_Rom_276163) > 0x1b
	.error "gText_Rom_276163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276163) < 0x1b
	.space 0x1b - (. - gText_Rom_276163)
	.endif
