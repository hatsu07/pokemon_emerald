	@ src/field_specials.c:2599 field_specials_line_2599
	.globl gText_Rom_5CB13B
gText_Rom_5CB13B: @ 0x085CB13B
	.string "リゾチウム   {FONT_SMALL}1000$"
	.if (. - gText_Rom_5CB13B) > 0x10
	.error "gText_Rom_5CB13B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB13B) < 0x10
	.space 0x10 - (. - gText_Rom_5CB13B)
	.endif
