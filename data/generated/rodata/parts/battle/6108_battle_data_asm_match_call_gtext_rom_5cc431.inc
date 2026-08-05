	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC431
gText_Rom_5CC431: @ 0x085CC431
	.string "バトルパレス$"
	.if (. - gText_Rom_5CC431) > 0x7
	.error "gText_Rom_5CC431 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC431) < 0x7
	.space 0x7 - (. - gText_Rom_5CC431)
	.endif
