	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_26310C
gText_Rom_26310C: @ 0x0826310C
	.string "ここまで　ずかんが　できたら\nもはや　プロフェッショナル　だぞ！$"
	.if (. - gText_Rom_26310C) > 0x21
	.error "gText_Rom_26310C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26310C) < 0x21
	.space 0x21 - (. - gText_Rom_26310C)
	.endif
