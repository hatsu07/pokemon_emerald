	@ src/battle_message.c:391 battle_message_line_391
	.globl gText_Rom_5AAA8B
gText_Rom_5AAA8B: @ 0x085AAA8B
	.string "オダマキ『み みすてないでくれー!』\p$"
	.if (. - gText_Rom_5AAA8B) > 0x14
	.error "gText_Rom_5AAA8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA8B) < 0x14
	.space 0x14 - (. - gText_Rom_5AAA8B)
	.endif
	@ Decoded text from ROM range: offset=0x5AAA9F, size=0xD
	.string "しかし　なにもおこらない$"
