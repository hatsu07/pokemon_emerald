	@ src/strings.c:549 gText_CombineNineWordsOrPhrases
	.globl gText_CombineNineWordsOrPhrases
gText_CombineNineWordsOrPhrases: @ 0x085CB8D6
	.string "9つの ことばを くみあわせて{EOS}"
	.if (. - gText_CombineNineWordsOrPhrases) > 0x10
	.error "gText_CombineNineWordsOrPhrases may not grow beyond its original slot"
	.endif
	.if (. - gText_CombineNineWordsOrPhrases) < 0x10
	.space 0x10 - (. - gText_CombineNineWordsOrPhrases)
	.endif
