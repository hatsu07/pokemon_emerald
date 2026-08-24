	@ src/strings.c:567 gText_FindWordsWhichFit
	.globl gText_FindWordsWhichFit
gText_FindWordsWhichFit: @ 0x085CB9E0
	.string "トレーナーの イメージに{EOS}"
	.if (. - gText_FindWordsWhichFit) > 0xd
	.error "gText_FindWordsWhichFit may not grow beyond its original slot"
	.endif
	.if (. - gText_FindWordsWhichFit) < 0xd
	.space 0xd - (. - gText_FindWordsWhichFit)
	.endif
