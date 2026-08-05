	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262E5F
gText_Rom_262E5F: @ 0x08262E5F
	.string "もっと　くさむらに　はいって\nポケモンを　さがしてみると　いいな！$"
	.if (. - gText_Rom_262E5F) > 0x22
	.error "gText_Rom_262E5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262E5F) < 0x22
	.space 0x22 - (. - gText_Rom_262E5F)
	.endif
