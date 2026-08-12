	@ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
	.globl gText_Rom_5C8C5A
gText_Rom_5C8C5A: @ 0x085C8C5A
	.string "ユウキ$"
	.if (. - gText_Rom_5C8C5A) > 0x4
	.error "gText_Rom_5C8C5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C5A) < 0x4
	.space 0x4 - (. - gText_Rom_5C8C5A)
	.endif

	@ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
	.globl gText_Rom_5C8C5E
gText_Rom_5C8C5E: @ 0x085C8C5E
	.string "ハルカ$"
	.if (. - gText_Rom_5C8C5E) > 0x4
	.error "gText_Rom_5C8C5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C5E) < 0x4
	.space 0x4 - (. - gText_Rom_5C8C5E)
	.endif
