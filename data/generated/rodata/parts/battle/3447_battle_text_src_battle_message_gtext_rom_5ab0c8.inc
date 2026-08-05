	@ src/battle_message.c:174 battle_message_line_174
	.globl gText_Rom_5AB0C8
gText_Rom_5AB0C8: @ 0x085AB0C8
	.string "すっぱすぎた！$"
	.if (. - gText_Rom_5AB0C8) > 0x8
	.error "gText_Rom_5AB0C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0C8) < 0x8
	.space 0x8 - (. - gText_Rom_5AB0C8)
	.endif
