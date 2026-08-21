	@ src/data/trainers.h:2702 trainers_line_2702 (+1 aliases)
	.globl gText_Rom_5CA88C
gText_Rom_5CA88C: @ 0x085CA88C
	.string "ヒロミ{EOS}"
	.if (. - gText_Rom_5CA88C) > 0x4
	.error "gText_Rom_5CA88C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA88C) < 0x4
	.space 0x4 - (. - gText_Rom_5CA88C)
	.endif

	@ src/data/trainers.h:38007 trainers_line_38007
	.globl gText_Rom_5CA890
gText_Rom_5CA890: @ 0x085CA890
	.string "ユウリ{EOS}"
	.if (. - gText_Rom_5CA890) > 0x4
	.error "gText_Rom_5CA890 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA890) < 0x4
	.space 0x4 - (. - gText_Rom_5CA890)
	.endif

	@ src/data/trainers.h:3442 trainers_line_3442
	.globl gText_Rom_5CA894
gText_Rom_5CA894: @ 0x085CA894
	.string "ヨシオ{EOS}"
	.if (. - gText_Rom_5CA894) > 0x4
	.error "gText_Rom_5CA894 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA894) < 0x4
	.space 0x4 - (. - gText_Rom_5CA894)
	.endif
	@ Decoded text from ROM range: offset=0x5CA898, size=0x5
	.string "サダハル{EOS}"
