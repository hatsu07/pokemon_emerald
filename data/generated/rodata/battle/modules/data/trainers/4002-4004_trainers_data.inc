	@ src/data/trainers.h:1453 trainers_line_1453 (+2 aliases)
	.globl gText_Rom_5C8C44
gText_Rom_5C8C44: @ 0x085C8C44
	.string "アオギリ$"
	.if (. - gText_Rom_5C8C44) > 0x5
	.error "gText_Rom_5C8C44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C44) < 0x5
	.space 0x5 - (. - gText_Rom_5C8C44)
	.endif

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
