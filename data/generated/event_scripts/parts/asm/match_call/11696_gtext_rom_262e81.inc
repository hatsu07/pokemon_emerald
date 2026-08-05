	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262E81
gText_Rom_262E81: @ 0x08262E81
	.string "ちょうしが　でてきた　みたいだね\nでも　これからが　たいへん　なんだぞ！$"
	.if (. - gText_Rom_262E81) > 0x25
	.error "gText_Rom_262E81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262E81) < 0x25
	.space 0x25 - (. - gText_Rom_262E81)
	.endif
