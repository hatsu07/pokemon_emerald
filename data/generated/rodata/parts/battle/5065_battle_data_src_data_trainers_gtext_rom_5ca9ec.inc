	@ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
	.globl gText_Rom_5CA9EC
gText_Rom_5CA9EC: @ 0x085CA9EC
	.string "トウキ$"
	.if (. - gText_Rom_5CA9EC) > 0x4
	.error "gText_Rom_5CA9EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9EC) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9EC)
	.endif
