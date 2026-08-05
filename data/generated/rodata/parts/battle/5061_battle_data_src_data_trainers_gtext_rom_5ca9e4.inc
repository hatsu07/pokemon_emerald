	@ src/data/trainers.h:16880 trainers_line_16880 (+2 aliases)
	.globl gText_Rom_5CA9E4
gText_Rom_5CA9E4: @ 0x085CA9E4
	.string "ミクリ$"
	.if (. - gText_Rom_5CA9E4) > 0x4
	.error "gText_Rom_5CA9E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9E4) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9E4)
	.endif
