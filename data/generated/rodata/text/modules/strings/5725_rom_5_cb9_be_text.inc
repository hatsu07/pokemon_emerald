	@ src/strings.c:561 gText_CombineTwoWordsOrPhrases (+1 aliases)
	.globl gText_Rom_5CB9BE
gText_Rom_5CB9BE: @ 0x085CB9BE
	.string "2つの ことばを くみあわせて$"
	.if (. - gText_Rom_5CB9BE) > 0x10
	.error "gText_Rom_5CB9BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9BE) < 0x10
	.space 0x10 - (. - gText_Rom_5CB9BE)
	.endif
