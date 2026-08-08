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
