	@ src/strings.c:542 gText_CombineFourWordsOrPhrases
	.globl gText_Rom_5CB867
gText_Rom_5CB867: @ 0x085CB867
	.string "4つの ことばを くみあわせて{EOS}"
	.if (. - gText_Rom_5CB867) > 0x10
	.error "gText_Rom_5CB867 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB867) < 0x10
	.space 0x10 - (. - gText_Rom_5CB867)
	.endif
