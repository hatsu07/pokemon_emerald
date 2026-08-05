	@ src/field_specials.c:2596 field_specials_line_2596
	.globl gText_Rom_5CB10B
gText_Rom_5CB10B: @ 0x085CB10B
	.string "タウリン    {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB10B) > 0x10
	.error "gText_Rom_5CB10B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB10B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB10B)
	.endif
