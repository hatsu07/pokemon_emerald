	@ src/strings.c:542 gText_CombineFourWordsOrPhrases
	.globl gText_CombineFourWordsOrPhrases
gText_CombineFourWordsOrPhrases: @ 0x085CB867
	.string "4つの ことばを くみあわせて{EOS}"
	.if (. - gText_CombineFourWordsOrPhrases) > 0x10
	.error "gText_CombineFourWordsOrPhrases may not grow beyond its original slot"
	.endif
	.if (. - gText_CombineFourWordsOrPhrases) < 0x10
	.space 0x10 - (. - gText_CombineFourWordsOrPhrases)
	.endif
