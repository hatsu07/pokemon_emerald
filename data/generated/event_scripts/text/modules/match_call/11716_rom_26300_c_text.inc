	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_26300C
gText_Rom_26300C: @ 0x0826300C
	.string "……そういえば　いわくだきを　つかうことで\nみつかる　ポケモンも　いたっけ$"
	.if (. - gText_Rom_26300C) > 0x26
	.error "gText_Rom_26300C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26300C) < 0x26
	.space 0x26 - (. - gText_Rom_26300C)
	.endif
