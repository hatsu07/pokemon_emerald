	@ asm/battle_interface.s:1482 UpdateHpTextInHealthboxInDoubles
	.globl gText_Rom_5C93FF
gText_Rom_5C93FF: @ 0x085C93FF
	.string "/$"
	.if (. - gText_Rom_5C93FF) > 0x2
	.error "gText_Rom_5C93FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93FF) < 0x2
	.space 0x2 - (. - gText_Rom_5C93FF)
	.endif
	.globl gUnknown_85C9401
gUnknown_85C9401: @ 0x085C9401

