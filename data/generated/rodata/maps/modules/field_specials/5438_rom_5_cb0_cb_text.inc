	@ src/field_specials.c:2592 field_specials_line_2592
	.globl gText_Rom_5CB0CB
gText_Rom_5CB0CB: @ 0x085CB0CB
	.string "ちからのこな  {FONT_SMALL}  50$"
	.if (. - gText_Rom_5CB0CB) > 0x10
	.error "gText_Rom_5CB0CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0CB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0CB)
	.endif
