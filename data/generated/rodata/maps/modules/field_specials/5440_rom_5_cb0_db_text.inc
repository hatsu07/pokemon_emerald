	@ src/field_specials.c:2593 field_specials_line_2593
	.globl gText_Rom_5CB0DB
gText_Rom_5CB0DB: @ 0x085CB0DB
	.string "ちからのねっこ {FONT_SMALL}  80$"
	.if (. - gText_Rom_5CB0DB) > 0x10
	.error "gText_Rom_5CB0DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0DB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0DB)
	.endif
