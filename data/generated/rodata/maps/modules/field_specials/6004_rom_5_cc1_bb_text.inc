	@ src/field_specials.c:2584 field_specials_line_2584
	.globl gText_Rom_5CC1BB
gText_Rom_5CC1BB: @ 0x085CC1BB
	.string "こだわりハチマキ  64BP$"
	.if (. - gText_Rom_5CC1BB) > 0xf
	.error "gText_Rom_5CC1BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC1BB) < 0xf
	.space 0xf - (. - gText_Rom_5CC1BB)
	.endif
