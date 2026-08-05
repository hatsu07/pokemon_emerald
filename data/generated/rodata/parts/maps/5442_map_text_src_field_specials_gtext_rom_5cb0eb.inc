	@ src/field_specials.c:2594 field_specials_line_2594
	.globl gText_Rom_5CB0EB
gText_Rom_5CB0EB: @ 0x085CB0EB
	.string "ばんのうごな  {FONT_SMALL}  50$"
	.if (. - gText_Rom_5CB0EB) > 0x10
	.error "gText_Rom_5CB0EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0EB) < 0x10
	.space 0x10 - (. - gText_Rom_5CB0EB)
	.endif
