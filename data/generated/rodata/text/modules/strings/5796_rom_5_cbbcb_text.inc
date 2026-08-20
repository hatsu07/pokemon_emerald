	@ src/strings.c:600 gText_UponWinningABattle
	.globl gText_Rom_5CBBCB
gText_Rom_5CBBCB: @ 0x085CBBCB
	.string "たいせんに かったとき{EOS}"
	.if (. - gText_Rom_5CBBCB) > 0xc
	.error "gText_Rom_5CBBCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBCB) < 0xc
	.space 0xc - (. - gText_Rom_5CBBCB)
	.endif
