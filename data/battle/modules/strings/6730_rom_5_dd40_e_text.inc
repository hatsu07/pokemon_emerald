	@ src/strings.c:890 gText_Lv502 (+1 aliases)
	.globl gText_Lv502
gText_Lv502: @ 0x085DD40E
	.string "レベル 50{EOS}"
	.if (. - gText_Lv502) > 0x7
	.error "gText_Lv502 may not grow beyond its original slot"
	.endif
	.if (. - gText_Lv502) < 0x7
	.space 0x7 - (. - gText_Lv502)
	.endif
