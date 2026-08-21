	@ src/strings.c:601 gText_UponLosingABattle
	.globl gText_Rom_5CBBD7
gText_Rom_5CBBD7: @ 0x085CBBD7
	.string "たいせんに まけたとき{EOS}"
	.if (. - gText_Rom_5CBBD7) > 0xc
	.error "gText_Rom_5CBBD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBD7) < 0xc
	.space 0xc - (. - gText_Rom_5CBBD7)
	.endif
