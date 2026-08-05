	@ data/text/move_tutors.inc:78 MoveTutor_Text_MimicWhichMon
	.globl gText_Rom_276226
gText_Rom_276226: @ 0x08276226
	.string "ふぉっ ふぉっ! よかろう!\nおしえさせる ポケモンを みせてみぃ$"
	.if (. - gText_Rom_276226) > 0x22
	.error "gText_Rom_276226 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276226) < 0x22
	.space 0x22 - (. - gText_Rom_276226)
	.endif
