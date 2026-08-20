	@ asm/battle_util.s:7195 AbilityBattleEffects
	.globl gText_Rom_5ABC54
gText_Rom_5ABC54: @ 0x085ABC54
	.string "どく{EOS}"
	.if (. - gText_Rom_5ABC54) > 0x3
	.error "gText_Rom_5ABC54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC54) < 0x3
	.space 0x3 - (. - gText_Rom_5ABC54)
	.endif
