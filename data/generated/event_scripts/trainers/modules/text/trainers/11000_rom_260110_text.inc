	@ data/text/trainers.inc:2585 Route124_Text_SpencerDefeat (+1 aliases)
	.globl gText_Rom_260110
gText_Rom_260110: @ 0x08260110
	.string "たたかいかたを まよってしまった……{EOS}"
	.if (. - gText_Rom_260110) > 0x13
	.error "gText_Rom_260110 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260110) < 0x13
	.space 0x13 - (. - gText_Rom_260110)
	.endif
