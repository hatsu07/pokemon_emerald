	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+5 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC423
gText_Rom_5CC423: @ 0x085CC423
	.string "バトルタワー$"
	.if (. - gText_Rom_5CC423) != 0x7
	.error "gText_Rom_5CC423 must retain its original byte length"
	.endif
