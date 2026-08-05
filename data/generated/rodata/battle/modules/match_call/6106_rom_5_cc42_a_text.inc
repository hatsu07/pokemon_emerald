	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC42A
gText_Rom_5CC42A: @ 0x085CC42A
	.string "バトルドーム$"
	.if (. - gText_Rom_5CC42A) > 0x7
	.error "gText_Rom_5CC42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC42A) < 0x7
	.space 0x7 - (. - gText_Rom_5CC42A)
	.endif
