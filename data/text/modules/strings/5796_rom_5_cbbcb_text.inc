	@ src/strings.c:600 gText_UponWinningABattle
	.globl gText_UponWinningABattle
gText_UponWinningABattle: @ 0x085CBBCB
	.string "たいせんに かったとき{EOS}"
	.if (. - gText_UponWinningABattle) > 0xc
	.error "gText_UponWinningABattle may not grow beyond its original slot"
	.endif
	.if (. - gText_UponWinningABattle) < 0xc
	.space 0xc - (. - gText_UponWinningABattle)
	.endif
