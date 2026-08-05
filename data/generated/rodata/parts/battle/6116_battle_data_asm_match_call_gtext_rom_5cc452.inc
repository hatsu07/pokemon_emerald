	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC452
gText_Rom_5CC452: @ 0x085CC452
	.string "バトルピラミッド$"
	.if (. - gText_Rom_5CC452) > 0x9
	.error "gText_Rom_5CC452 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC452) < 0x9
	.space 0x9 - (. - gText_Rom_5CC452)
	.endif
	.space 0x1, 0x00
