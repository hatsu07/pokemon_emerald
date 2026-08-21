	@ src/strings.c:592 gText_CombineTwoWordsOrPhrases3
	.globl gText_Rom_5CBB4E
gText_Rom_5CBB4E: @ 0x085CBB4E
	.string "2つの ことばを くみあわせてください!{EOS}"
	.if (. - gText_Rom_5CBB4E) > 0x15
	.error "gText_Rom_5CBB4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB4E) < 0x15
	.space 0x15 - (. - gText_Rom_5CBB4E)
	.endif
