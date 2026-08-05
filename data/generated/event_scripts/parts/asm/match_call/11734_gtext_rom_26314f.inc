	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_26314F
gText_Rom_26314F: @ 0x0826314F
	.string "おめでとう！！\nポケモンずかんの　かんせい　だよ！！$"
	.if (. - gText_Rom_26314F) > 0x1b
	.error "gText_Rom_26314F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26314F) < 0x1b
	.space 0x1b - (. - gText_Rom_26314F)
	.endif
