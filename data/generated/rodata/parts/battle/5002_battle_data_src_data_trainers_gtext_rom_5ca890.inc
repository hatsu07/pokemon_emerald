	@ src/data/trainers.h:38007 trainers_line_38007
	.globl gText_Rom_5CA890
gText_Rom_5CA890: @ 0x085CA890
	.string "ユウリ$"
	.if (. - gText_Rom_5CA890) > 0x4
	.error "gText_Rom_5CA890 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA890) < 0x4
	.space 0x4 - (. - gText_Rom_5CA890)
	.endif
