	.globl gText_Rom_5C8C3C
gText_Rom_5C8C3C: @ 0x085C8C3C
	@ Decoded text from ROM range: offset=0x5C8C3C, size=0x4
	.string "アクア{EOS}"
	.globl gText_Rom_5C8C40
gText_Rom_5C8C40: @ 0x085C8C40
	@ Decoded text from ROM range: offset=0x5C8C40, size=0x4
	.string "マグマ{EOS}"

	@ src/data/trainers.h:1453 trainers_line_1453 (+2 aliases)
	.globl gText_Rom_5C8C44
gText_Rom_5C8C44: @ 0x085C8C44
	.string "アオギリ{EOS}"
	.if (. - gText_Rom_5C8C44) > 0x5
	.error "gText_Rom_5C8C44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C44) < 0x5
	.space 0x5 - (. - gText_Rom_5C8C44)
	.endif

	@ src/data/trainers.h:30102 trainers_line_30102 (+4 aliases)
	.globl gText_Rom_5C8C49
gText_Rom_5C8C49: @ 0x085C8C49
	.string "マツブサ{EOS}"
	.if (. - gText_Rom_5C8C49) > 0x5
	.error "gText_Rom_5C8C49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C49) < 0x5
	.space 0x5 - (. - gText_Rom_5C8C49)
	.endif
