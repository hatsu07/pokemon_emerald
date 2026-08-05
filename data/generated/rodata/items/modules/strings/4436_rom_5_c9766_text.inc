	@ src/strings.c:211 strings_line_211
	.globl gText_Rom_5C9766
gText_Rom_5C9766: @ 0x085C9766
	.string "たいせつなもの $"
	.if (. - gText_Rom_5C9766) > 0x9
	.error "gText_Rom_5C9766 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9766) < 0x9
	.space 0x9 - (. - gText_Rom_5C9766)
	.endif
