	@ src/field_specials.c:2564 field_specials_line_2564
	.globl gText_Rom_5CC107
gText_Rom_5CC107: @ 0x085CC107
	.string "カメックスドール 256BP$"
	.if (. - gText_Rom_5CC107) > 0xf
	.error "gText_Rom_5CC107 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC107) < 0xf
	.space 0xf - (. - gText_Rom_5CC107)
	.endif
