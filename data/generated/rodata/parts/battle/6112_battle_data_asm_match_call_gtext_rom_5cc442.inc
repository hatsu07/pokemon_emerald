	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC442
gText_Rom_5CC442: @ 0x085CC442
	.string "バトルアリーナ$"
	.if (. - gText_Rom_5CC442) > 0x8
	.error "gText_Rom_5CC442 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC442) < 0x8
	.space 0x8 - (. - gText_Rom_5CC442)
	.endif
