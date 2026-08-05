	@ src/field_specials.c:2623 field_specials_line_2623
	.globl gText_Rom_5CC221
gText_Rom_5CC221: @ 0x085CC221
	.string "メガトンパンチ  24BP$"
	.if (. - gText_Rom_5CC221) > 0xe
	.error "gText_Rom_5CC221 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC221) < 0xe
	.space 0xe - (. - gText_Rom_5CC221)
	.endif
