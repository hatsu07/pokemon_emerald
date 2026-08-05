	@ src/battle_message.c:132 sText_FoePkmnPrefix (+1 aliases)
	.globl gText_Rom_5AB00F
gText_Rom_5AB00F: @ 0x085AB00F
	.string "あいての $"
	.if (. - gText_Rom_5AB00F) > 0x6
	.error "gText_Rom_5AB00F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB00F) < 0x6
	.space 0x6 - (. - gText_Rom_5AB00F)
	.endif
	.space 0x1, 0xFF
