	@ src/strings.c:601 gText_UponLosingABattle
	.globl gText_UponLosingABattle
gText_UponLosingABattle: @ 0x085CBBD7
	.string "たいせんに まけたとき{EOS}"
	.if (. - gText_UponLosingABattle) > 0xc
	.error "gText_UponLosingABattle may not grow beyond its original slot"
	.endif
	.if (. - gText_UponLosingABattle) < 0xc
	.space 0xc - (. - gText_UponLosingABattle)
	.endif
