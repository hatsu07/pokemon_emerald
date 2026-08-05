	@ src/data/trainers.h:3442 trainers_line_3442
	.globl gText_Rom_5CA894
gText_Rom_5CA894: @ 0x085CA894
	.string "ヨシオ$"
	.if (. - gText_Rom_5CA894) > 0x4
	.error "gText_Rom_5CA894 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA894) < 0x4
	.space 0x4 - (. - gText_Rom_5CA894)
	.endif
	@ Decoded text from ROM range: offset=0x5CA898, size=0x5
	.string "サダハル$"
