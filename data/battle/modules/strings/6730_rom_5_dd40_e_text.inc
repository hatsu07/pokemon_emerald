	@ src/strings.c:890 gText_Lv502 (+1 aliases)
	.globl gText_Rom_5DD40E
gText_Rom_5DD40E: @ 0x085DD40E
	.string "レベル 50{EOS}"
	.if (. - gText_Rom_5DD40E) > 0x7
	.error "gText_Rom_5DD40E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD40E) < 0x7
	.space 0x7 - (. - gText_Rom_5DD40E)
	.endif
