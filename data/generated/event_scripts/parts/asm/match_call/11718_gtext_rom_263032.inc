	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_263032
gText_Rom_263032: @ 0x08263032
	.string "ポケモンこうかん　すれば\nもっと　あつまるかも　しれないな$"
	.if (. - gText_Rom_263032) > 0x1e
	.error "gText_Rom_263032 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263032) < 0x1e
	.space 0x1e - (. - gText_Rom_263032)
	.endif
