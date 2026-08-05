	@ src/strings.c:561 gText_CombineTwoWordsOrPhrases (+1 aliases)
	.globl gText_Rom_5CB985
gText_Rom_5CB985: @ 0x085CB985
	.string "2つの ことばを くみあわせて$"
	.if (. - gText_Rom_5CB985) > 0x10
	.error "gText_Rom_5CB985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB985) < 0x10
	.space 0x10 - (. - gText_Rom_5CB985)
	.endif
