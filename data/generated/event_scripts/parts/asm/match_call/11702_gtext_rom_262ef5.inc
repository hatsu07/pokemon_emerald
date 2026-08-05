	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262EF5
gText_Rom_262EF5: @ 0x08262EF5
	.string "なかなか　いい　かんじ　だな！\nこの　ちょうしで　がんばって　くれよ$"
	.if (. - gText_Rom_262EF5) > 0x23
	.error "gText_Rom_262EF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262EF5) < 0x23
	.space 0x23 - (. - gText_Rom_262EF5)
	.endif
