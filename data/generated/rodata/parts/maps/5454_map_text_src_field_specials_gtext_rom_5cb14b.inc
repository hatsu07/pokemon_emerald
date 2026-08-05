	@ src/field_specials.c:2600 field_specials_line_2600
	.globl gText_Rom_5CB14B
gText_Rom_5CB14B: @ 0x085CB14B
	.string "キトサン    {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB14B) > 0x10
	.error "gText_Rom_5CB14B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB14B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB14B)
	.endif
