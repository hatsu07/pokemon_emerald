	@ src/strings.c:569 gText_TheImage
	.globl gText_Rom_5CB9FF
gText_Rom_5CB9FF: @ 0x085CB9FF
	.string "イメージは$"
	.if (. - gText_Rom_5CB9FF) > 0x6
	.error "gText_Rom_5CB9FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9FF) < 0x6
	.space 0x6 - (. - gText_Rom_5CB9FF)
	.endif
