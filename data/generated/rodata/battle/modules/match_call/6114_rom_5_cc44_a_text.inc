	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC44A
gText_Rom_5CC44A: @ 0x085CC44A
	.string "バトルチューブ$"
	.if (. - gText_Rom_5CC44A) > 0x8
	.error "gText_Rom_5CC44A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC44A) < 0x8
	.space 0x8 - (. - gText_Rom_5CC44A)
	.endif
