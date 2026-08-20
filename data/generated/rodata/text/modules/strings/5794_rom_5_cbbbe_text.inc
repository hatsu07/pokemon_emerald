	@ src/strings.c:599 gText_AtTheBattlesStart
	.globl gText_Rom_5CBBBE
gText_Rom_5CBBBE: @ 0x085CBBBE
	.string "たいせんが はじまるとき{EOS}"
	.if (. - gText_Rom_5CBBBE) > 0xd
	.error "gText_Rom_5CBBBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBBE) < 0xd
	.space 0xd - (. - gText_Rom_5CBBBE)
	.endif
