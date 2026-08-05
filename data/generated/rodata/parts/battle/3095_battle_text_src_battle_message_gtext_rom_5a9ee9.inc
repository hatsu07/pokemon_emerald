	@ src/battle_message.c:295 battle_message_line_295
	.globl gText_Rom_5A9EE9
gText_Rom_5A9EE9: @ 0x085A9EE9
	.string "{B_BUFF1}円\nひろった!\p$"
	.if (. - gText_Rom_5A9EE9) > 0xb
	.error "gText_Rom_5A9EE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9EE9) < 0xb
	.space 0xb - (. - gText_Rom_5A9EE9)
	.endif
