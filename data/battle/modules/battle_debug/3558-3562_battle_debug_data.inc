
	@ src/battle_debug.c:346 battle_debug_line_346 (+3 aliases)
	.globl gText_Rom_5ABC50
gText_Rom_5ABC50: @ 0x085ABC50
	.string "ねむり{EOS}"
	.if (. - gText_Rom_5ABC50) > 0x4
	.error "gText_Rom_5ABC50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC50) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC50)
	.endif

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

	@ src/battle_debug.c:348 battle_debug_line_348 (+3 aliases)
	.globl gText_Rom_5ABC57
gText_Rom_5ABC57: @ 0x085ABC57
	.string "やけど{EOS}"
	.if (. - gText_Rom_5ABC57) > 0x4
	.error "gText_Rom_5ABC57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC57) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC57)
	.endif

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

	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_5ABC5E
gText_Rom_5ABC5E: @ 0x085ABC5E
	.string "こおり{EOS}"
	.if (. - gText_Rom_5ABC5E) > 0x4
	.error "gText_Rom_5ABC5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC5E) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC5E)
	.endif

	@ src/battle_debug.c:358 battle_debug_line_358 (+2 aliases)
	.globl gText_Rom_5ABC62
gText_Rom_5ABC62: @ 0x085ABC62
	.string "こんらん{EOS}"
	.if (. - gText_Rom_5ABC62) > 0x5
	.error "gText_Rom_5ABC62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC62) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC62)
	.endif

	@ src/battle_debug.c:459 battle_debug_line_459 (+3 aliases)
	.globl gText_Rom_5ABC67
gText_Rom_5ABC67: @ 0x085ABC67
	.string "メロメロ{EOS}"
	.if (. - gText_Rom_5ABC67) > 0x5
	.error "gText_Rom_5ABC67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC67) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC67)
	.endif
