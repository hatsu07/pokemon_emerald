	@ src/field_specials.c:2595 field_specials_line_2595
	.globl gText_Rom_5CB0FB
gText_Rom_5CB0FB: @ 0x085CB0FB
	.string "ふっかつそう  {FONT_SMALL} 300$"
	.if (. - gText_Rom_5CB0FB) > 0x10
	.error "gText_Rom_5CB0FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0FB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0FB)
	.endif
