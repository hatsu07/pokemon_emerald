	@ src/strings.c:569 gText_TheImage
	.globl gText_TheImage
gText_TheImage: @ 0x085CB9FF
	.string "イメージは{EOS}"
	.if (. - gText_TheImage) > 0x6
	.error "gText_TheImage may not grow beyond its original slot"
	.endif
	.if (. - gText_TheImage) < 0x6
	.space 0x6 - (. - gText_TheImage)
	.endif
