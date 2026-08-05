	@ asm/battle_message.s:1734 BattleStringExpandPlaceholders
	.globl gText_Rom_5AB28D
gText_Rom_5AB28D: @ 0x085AB28D
	.string "のみ$"
	.if (. - gText_Rom_5AB28D) > 0x3
	.error "gText_Rom_5AB28D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB28D) < 0x3
	.space 0x3 - (. - gText_Rom_5AB28D)
	.endif
