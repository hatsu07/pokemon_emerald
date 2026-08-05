	@ data/text/apprentice.inc:46 gText_ApprenticeChallenge15
	.globl gText_Rom_26CF63
gText_Rom_26CF63: @ 0x0826CF63
	.string "うそじゃない! わたしは\n{STR_VAR_1}さんの {STR_VAR_2}ばんの でしだ"
	.byte EOS
	.if (. - gText_Rom_26CF63) > 0x1d
	.error "gText_Rom_26CF63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CF63) < 0x1d
	.space 0x1d - (. - gText_Rom_26CF63)
	.endif
