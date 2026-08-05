	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262FAD
gText_Rom_262FAD: @ 0x08262FAD
	.string "サファリゾーンには　いったかい？\nあそこでしか　つかまえられない\lポケモンも　いるって　はなし　だぞ！$"
	.if (. - gText_Rom_262FAD) > 0x34
	.error "gText_Rom_262FAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262FAD) < 0x34
	.space 0x34 - (. - gText_Rom_262FAD)
	.endif
