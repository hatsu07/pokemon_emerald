	@ src/battle_message.c:424 battle_message_line_424
	.globl gText_Rom_5AB192
gText_Rom_5AB192: @ 0x085AB192
	.string "ざんねん!\nもうすこしで つかまえられたのに!$"
	.if (. - gText_Rom_5AB192) > 0x18
	.error "gText_Rom_5AB192 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB192) < 0x18
	.space 0x18 - (. - gText_Rom_5AB192)
	.endif
