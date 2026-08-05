	@ src/data/trainers.h:2702 trainers_line_2702 (+1 aliases)
	.globl gText_Rom_5CA88C
gText_Rom_5CA88C: @ 0x085CA88C
	.string "ヒロミ$"
	.if (. - gText_Rom_5CA88C) > 0x4
	.error "gText_Rom_5CA88C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA88C) < 0x4
	.space 0x4 - (. - gText_Rom_5CA88C)
	.endif
