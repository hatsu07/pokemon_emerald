	@ src/data/trainers.h:30102 trainers_line_30102 (+4 aliases)
	.globl gText_Rom_5C8C49
gText_Rom_5C8C49: @ 0x085C8C49
	.string "マツブサ$"
	.if (. - gText_Rom_5C8C49) > 0x5
	.error "gText_Rom_5C8C49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C49) < 0x5
	.space 0x5 - (. - gText_Rom_5C8C49)
	.endif
