	@ asm/battle_util.s:7213 AbilityBattleEffects
	.globl gText_Rom_5ABC5B
gText_Rom_5ABC5B: @ 0x085ABC5B
	.string "まひ{EOS}"
	.if (. - gText_Rom_5ABC5B) > 0x3
	.error "gText_Rom_5ABC5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC5B) < 0x3
	.space 0x3 - (. - gText_Rom_5ABC5B)
	.endif
