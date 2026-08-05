	@ src/field_specials.c:2580 field_specials_line_2580
	.globl gText_Rom_5CC17F
gText_Rom_5CC17F: @ 0x085CC17F
	.string "しろいハーブ    48BP$"
	.if (. - gText_Rom_5CC17F) > 0xf
	.error "gText_Rom_5CC17F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC17F) < 0xf
	.space 0xf - (. - gText_Rom_5CC17F)
	.endif
