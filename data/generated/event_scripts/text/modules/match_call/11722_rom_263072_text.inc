	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_263072
gText_Rom_263072: @ 0x08263072
	.string "ホウエンちほう　には　こんなにも\nおおくの　ポケモンが　いたのか……$"
	.if (. - gText_Rom_263072) > 0x23
	.error "gText_Rom_263072 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263072) < 0x23
	.space 0x23 - (. - gText_Rom_263072)
	.endif
