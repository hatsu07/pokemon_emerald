	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262EA6
gText_Rom_262EA6: @ 0x08262EA6
	.string "きまった　ばしょでしか　みつからない\nポケモンは　しつこく　さがすしか　ないぞ！$"
	.if (. - gText_Rom_262EA6) > 0x29
	.error "gText_Rom_262EA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262EA6) < 0x29
	.space 0x29 - (. - gText_Rom_262EA6)
	.endif
