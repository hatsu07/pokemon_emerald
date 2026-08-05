	@ src/battle_message.c:171 battle_message_line_171
	.globl gText_Rom_5AB0B3
gText_Rom_5AB0B3: @ 0x085AB0B3
	.string "しぶすぎた！$"
	.if (. - gText_Rom_5AB0B3) > 0x7
	.error "gText_Rom_5AB0B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0B3) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0B3)
	.endif
