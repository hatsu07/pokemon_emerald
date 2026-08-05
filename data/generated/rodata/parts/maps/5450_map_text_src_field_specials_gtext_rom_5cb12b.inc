	@ src/field_specials.c:2598 field_specials_line_2598
	.globl gText_Rom_5CB12B
gText_Rom_5CB12B: @ 0x085CB12B
	.string "インドメタシン {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB12B) > 0x10
	.error "gText_Rom_5CB12B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB12B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB12B)
	.endif
