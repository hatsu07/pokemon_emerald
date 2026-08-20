	@ src/strings.c:549 gText_CombineNineWordsOrPhrases
	.globl gText_Rom_5CB8D6
gText_Rom_5CB8D6: @ 0x085CB8D6
	.string "9つの ことばを くみあわせて{EOS}"
	.if (. - gText_Rom_5CB8D6) > 0x10
	.error "gText_Rom_5CB8D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8D6) < 0x10
	.space 0x10 - (. - gText_Rom_5CB8D6)
	.endif
