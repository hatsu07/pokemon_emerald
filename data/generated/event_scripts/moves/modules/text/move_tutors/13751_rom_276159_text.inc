	@ data/text/move_tutors.inc:54 MoveTutor_Text_FuryCutterDeclined
	.globl gText_Rom_276159
gText_Rom_276159: @ 0x08276159
	.string "きが あわないねぇ$"
	.if (. - gText_Rom_276159) > 0xa
	.error "gText_Rom_276159 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276159) < 0xa
	.space 0xa - (. - gText_Rom_276159)
	.endif
