	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC438
gText_Rom_5CC438: @ 0x085CC438
	.string "バトルファクトリー$"
	.if (. - gText_Rom_5CC438) > 0xa
	.error "gText_Rom_5CC438 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC438) < 0xa
	.space 0xa - (. - gText_Rom_5CC438)
	.endif
