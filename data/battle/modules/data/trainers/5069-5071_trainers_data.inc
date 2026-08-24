
	@ asm/field_specials.s:8549 sub_0813BE68
	.globl gText_Rom_5CA9F0
gText_Rom_5CA9F0: @ 0x085CA9F0
	.string "ナギ{EOS}"
	.if (. - gText_Rom_5CA9F0) > 0x3
	.error "gText_Rom_5CA9F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9F0) < 0x3
	.space 0x3 - (. - gText_Rom_5CA9F0)
	.endif

	@ src/data/trainers.h:12589 trainers_line_12589 (+1 aliases)
	.globl gText_Rom_5CA9F3
gText_Rom_5CA9F3: @ 0x085CA9F3
	.string "フヨウ{EOS}"
	.if (. - gText_Rom_5CA9F3) > 0x4
	.error "gText_Rom_5CA9F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9F3) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9F3)
	.endif

	@ src/data/trainers.h:12714 trainers_line_12714 (+1 aliases)
	.globl gText_Rom_5CA9F7
gText_Rom_5CA9F7: @ 0x085CA9F7
	.string "プリム{EOS}"
	.if (. - gText_Rom_5CA9F7) > 0x4
	.error "gText_Rom_5CA9F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9F7) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9F7)
	.endif
