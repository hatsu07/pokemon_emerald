	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_263050
gText_Rom_263050: @ 0x08263050
	.string "なんでも　なついていると\nしんか　する　ポケモンも　いるそうだよ！$"
	.if (. - gText_Rom_263050) > 0x22
	.error "gText_Rom_263050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263050) < 0x22
	.space 0x22 - (. - gText_Rom_263050)
	.endif
