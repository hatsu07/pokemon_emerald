	@ src/battle_message.c:432 battle_message_line_432
	.globl gText_Rom_5A9806
gText_Rom_5A9806: @ 0x085A9806
	.string "にげられない！\p$"
	.if (. - gText_Rom_5A9806) > 0x9
	.error "gText_Rom_5A9806 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9806) < 0x9
	.space 0x9 - (. - gText_Rom_5A9806)
	.endif
