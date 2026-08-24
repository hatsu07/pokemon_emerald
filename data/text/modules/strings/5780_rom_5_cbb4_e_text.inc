	@ src/strings.c:592 gText_CombineTwoWordsOrPhrases3
	.globl gText_CombineTwoWordsOrPhrases3
gText_CombineTwoWordsOrPhrases3: @ 0x085CBB4E
	.string "2つの ことばを くみあわせてください!{EOS}"
	.if (. - gText_CombineTwoWordsOrPhrases3) > 0x15
	.error "gText_CombineTwoWordsOrPhrases3 may not grow beyond its original slot"
	.endif
	.if (. - gText_CombineTwoWordsOrPhrases3) < 0x15
	.space 0x15 - (. - gText_CombineTwoWordsOrPhrases3)
	.endif
