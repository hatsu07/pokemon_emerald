	@ src/field_specials.c:2602 field_specials_line_2602
	.globl gText_Rom_5CB16B
gText_Rom_5CB16B: @ 0x085CB16B
	.string "ポイントアップ {FONT_SMALL}3000$"
	.if (. - gText_Rom_5CB16B) > 0x10
	.error "gText_Rom_5CB16B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB16B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB16B)
	.endif
