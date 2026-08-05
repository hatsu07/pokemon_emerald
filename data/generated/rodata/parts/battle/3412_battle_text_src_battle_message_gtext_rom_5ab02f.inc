	@ src/battle_message.c:141 sText_AllyPkmnPrefix3
	.globl gText_Rom_5AB02F
gText_Rom_5AB02F: @ 0x085AB02F
	.string "みかたを$"
	.if (. - gText_Rom_5AB02F) > 0x5
	.error "gText_Rom_5AB02F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB02F) < 0x5
	.space 0x5 - (. - gText_Rom_5AB02F)
	.endif
