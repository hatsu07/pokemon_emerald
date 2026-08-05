	@ src/strings.c:207 strings_line_207
	.globl gText_Rom_5C9742
gText_Rom_5C9742: @ 0x085C9742
	.string " ど う ぐ  $"
	.if (. - gText_Rom_5C9742) > 0x9
	.error "gText_Rom_5C9742 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9742) < 0x9
	.space 0x9 - (. - gText_Rom_5C9742)
	.endif
