	@ asm/trade.s:5988 sub_08079BD4 (+1 aliases)
	.globl gText_Rom_5CA294
gText_Rom_5CA294: @ 0x085CA294
	.string "そのポケモンを　こうかんすると\nせんとうできなくなっちゃうよ！$"
	.if (. - gText_Rom_5CA294) > 0x20
	.error "gText_Rom_5CA294 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA294) < 0x20
	.space 0x20 - (. - gText_Rom_5CA294)
	.endif
