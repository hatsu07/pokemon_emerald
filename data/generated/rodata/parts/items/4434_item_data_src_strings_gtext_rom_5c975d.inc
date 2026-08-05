	@ src/strings.c:210 strings_line_210
	.globl gText_Rom_5C975D
gText_Rom_5C975D: @ 0x085C975D
	.string " き の み  $"
	.if (. - gText_Rom_5C975D) > 0x9
	.error "gText_Rom_5C975D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C975D) < 0x9
	.space 0x9 - (. - gText_Rom_5C975D)
	.endif
