	@ src/field_specials.c:2601 field_specials_line_2601
	.globl gText_Rom_5CB15B
gText_Rom_5CB15B: @ 0x085CB15B
	.string "マックスアップ {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB15B) > 0x10
	.error "gText_Rom_5CB15B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB15B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB15B)
	.endif
