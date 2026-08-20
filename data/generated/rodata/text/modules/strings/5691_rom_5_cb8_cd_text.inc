	@ src/strings.c:548 gText_WithFourPhrases
	.globl gText_Rom_5CB8CD
gText_Rom_5CB8CD: @ 0x085CB8CD
	.string "4つの ことばで{EOS}"
	.if (. - gText_Rom_5CB8CD) > 0x9
	.error "gText_Rom_5CB8CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8CD) < 0x9
	.space 0x9 - (. - gText_Rom_5CB8CD)
	.endif
