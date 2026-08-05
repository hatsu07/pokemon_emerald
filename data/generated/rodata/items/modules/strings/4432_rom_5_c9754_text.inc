	@ src/strings.c:209 strings_line_209
	.globl gText_Rom_5C9754
gText_Rom_5C9754: @ 0x085C9754
	.string " わざマシン  $"
	.if (. - gText_Rom_5C9754) > 0x9
	.error "gText_Rom_5C9754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9754) < 0x9
	.space 0x9 - (. - gText_Rom_5C9754)
	.endif
