	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262F18
gText_Rom_262F18: @ 0x08262F18
	.string "つりざおは　つかって　いるかな？\nうみにも　ポケモンは　たくさん　いるからな$"
	.if (. - gText_Rom_262F18) > 0x27
	.error "gText_Rom_262F18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262F18) < 0x27
	.space 0x27 - (. - gText_Rom_262F18)
	.endif
