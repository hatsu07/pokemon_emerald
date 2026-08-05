	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262ECF
gText_Rom_262ECF: @ 0x08262ECF
	.string "ボリュームは　まだまだ　だけど\nすこしは　ポケモンずかん　らしく　なったぞ$"
	.if (. - gText_Rom_262ECF) > 0x26
	.error "gText_Rom_262ECF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262ECF) < 0x26
	.space 0x26 - (. - gText_Rom_262ECF)
	.endif
