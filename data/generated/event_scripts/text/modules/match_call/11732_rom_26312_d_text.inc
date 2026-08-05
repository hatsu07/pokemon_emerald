	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_26312D
gText_Rom_26312D: @ 0x0826312D
	.string "いよいよ　かんせいに　ちかづいた！\nそんな　よかんが　してきたよ！$"
	.if (. - gText_Rom_26312D) > 0x22
	.error "gText_Rom_26312D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26312D) < 0x22
	.space 0x22 - (. - gText_Rom_26312D)
	.endif
