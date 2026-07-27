	@ asm/battle_interface.s:4834 sub_08074320
	.globl gText_Rom_5ABC43
gText_Rom_5ABC43: @ 0x085ABC43
	.string "{HIGHLIGHT}{0x02}のこり　$"
	.if (. - gText_Rom_5ABC43) > 0x8
	.error "gText_Rom_5ABC43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC43) < 0x8
	.space 0x8 - (. - gText_Rom_5ABC43)
	.endif
	.globl gUnknown_85ABC4B
gUnknown_85ABC4B: @ 0x085ABC4B

	@ asm/battle_interface.s:4844 sub_08074320
	.globl gText_Rom_5ABC4B
gText_Rom_5ABC4B: @ 0x085ABC4B
	.string "{HIGHLIGHT}{0x02}こ$"
	.if (. - gText_Rom_5ABC4B) > 0x5
	.error "gText_Rom_5ABC4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC4B) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC4B)
	.endif
	.globl gUnknown_85ABC50
gUnknown_85ABC50: @ 0x085ABC50

	@ src/battle_debug.c:346 battle_debug_line_346 (+3 aliases)
	.globl gText_Rom_5ABC50
gText_Rom_5ABC50: @ 0x085ABC50
	.string "ねむり$"
	.if (. - gText_Rom_5ABC50) > 0x4
	.error "gText_Rom_5ABC50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC50) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC50)
	.endif
	.globl gUnknown_85ABC54
gUnknown_85ABC54: @ 0x085ABC54

	@ asm/battle_util.s:7195 AbilityBattleEffects
	.globl gText_Rom_5ABC54
gText_Rom_5ABC54: @ 0x085ABC54
	.string "どく$"
	.if (. - gText_Rom_5ABC54) > 0x3
	.error "gText_Rom_5ABC54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC54) < 0x3
	.space 0x3 - (. - gText_Rom_5ABC54)
	.endif
	.globl gUnknown_85ABC57
gUnknown_85ABC57: @ 0x085ABC57

	@ src/battle_debug.c:348 battle_debug_line_348 (+3 aliases)
	.globl gText_Rom_5ABC57
gText_Rom_5ABC57: @ 0x085ABC57
	.string "やけど$"
	.if (. - gText_Rom_5ABC57) > 0x4
	.error "gText_Rom_5ABC57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC57) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC57)
	.endif
	.globl gUnknown_85ABC5B
gUnknown_85ABC5B: @ 0x085ABC5B

	@ asm/battle_util.s:7213 AbilityBattleEffects
	.globl gText_Rom_5ABC5B
gText_Rom_5ABC5B: @ 0x085ABC5B
	.string "まひ$"
	.if (. - gText_Rom_5ABC5B) > 0x3
	.error "gText_Rom_5ABC5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC5B) < 0x3
	.space 0x3 - (. - gText_Rom_5ABC5B)
	.endif
	.globl gUnknown_85ABC5E
gUnknown_85ABC5E: @ 0x085ABC5E

	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_5ABC5E
gText_Rom_5ABC5E: @ 0x085ABC5E
	.string "こおり$"
	.if (. - gText_Rom_5ABC5E) > 0x4
	.error "gText_Rom_5ABC5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC5E) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC5E)
	.endif
	.globl gUnknown_85ABC62
gUnknown_85ABC62: @ 0x085ABC62

	@ src/battle_debug.c:358 battle_debug_line_358 (+2 aliases)
	.globl gText_Rom_5ABC62
gText_Rom_5ABC62: @ 0x085ABC62
	.string "こんらん$"
	.if (. - gText_Rom_5ABC62) > 0x5
	.error "gText_Rom_5ABC62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC62) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC62)
	.endif
	.globl gUnknown_85ABC67
gUnknown_85ABC67: @ 0x085ABC67

	@ src/battle_debug.c:459 battle_debug_line_459 (+3 aliases)
	.globl gText_Rom_5ABC67
gText_Rom_5ABC67: @ 0x085ABC67
	.string "メロメロ$"
	.if (. - gText_Rom_5ABC67) > 0x5
	.error "gText_Rom_5ABC67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC67) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC67)
	.endif
	.globl gUnknown_85ABC6C
gUnknown_85ABC6C: @ 0x085ABC6C

	@ asm/frontier_util.s:4588 sub_081A3B68
	.globl gText_Rom_5ABC6C
gText_Rom_5ABC6C: @ 0x085ABC6C
	.string "　$"
	.if (. - gText_Rom_5ABC6C) > 0x2
	.error "gText_Rom_5ABC6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC6C) < 0x2
	.space 0x2 - (. - gText_Rom_5ABC6C)
	.endif
	.globl gUnknown_85ABC6E
gUnknown_85ABC6E: @ 0x085ABC6E
	.incbin "baserom.gba", 0x5abc6e, 0x2
	.globl gUnknown_85ABC70
gUnknown_85ABC70: @ 0x085ABC70
	.incbin "baserom.gba", 0x5abc70, 0x2
	.globl gUnknown_85ABC72
gUnknown_85ABC72: @ 0x085ABC72
	.incbin "baserom.gba", 0x5abc72, 0x3
	.globl gUnknown_85ABC75
gUnknown_85ABC75: @ 0x085ABC75
	.incbin "baserom.gba", 0x5abc75, 0x3
	.globl gUnknown_85ABC78
gUnknown_85ABC78: @ 0x085ABC78

