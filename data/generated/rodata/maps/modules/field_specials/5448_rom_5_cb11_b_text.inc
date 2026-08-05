	@ src/field_specials.c:2597 field_specials_line_2597
	.globl gText_Rom_5CB11B
gText_Rom_5CB11B: @ 0x085CB11B
	.string "ブロムヘキシン {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB11B) > 0x10
	.error "gText_Rom_5CB11B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB11B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB11B)
	.endif
