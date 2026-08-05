	@ src/strings.c:567 gText_FindWordsWhichFit
	.globl gText_Rom_5CB9E0
gText_Rom_5CB9E0: @ 0x085CB9E0
	.string "トレーナーの イメージに$"
	.if (. - gText_Rom_5CB9E0) > 0xd
	.error "gText_Rom_5CB9E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9E0) < 0xd
	.space 0xd - (. - gText_Rom_5CB9E0)
	.endif
