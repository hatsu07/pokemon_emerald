	@ src/data/trainers.h:12714 trainers_line_12714 (+1 aliases)
	.globl gText_Rom_5CA9F7
gText_Rom_5CA9F7: @ 0x085CA9F7
	.string "プリム$"
	.if (. - gText_Rom_5CA9F7) > 0x4
	.error "gText_Rom_5CA9F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9F7) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9F7)
	.endif

