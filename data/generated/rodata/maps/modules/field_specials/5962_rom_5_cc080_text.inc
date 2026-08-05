	@ src/field_specials.c:2551 field_specials_line_2551
	.globl gText_Rom_5CC080
gText_Rom_5CC080: @ 0x085CC080
	.string "ピッピドール    48BP$"
	.if (. - gText_Rom_5CC080) > 0xf
	.error "gText_Rom_5CC080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC080) < 0xf
	.space 0xf - (. - gText_Rom_5CC080)
	.endif
