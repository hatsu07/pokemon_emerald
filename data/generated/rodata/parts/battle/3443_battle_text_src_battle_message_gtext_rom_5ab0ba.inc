	@ src/battle_message.c:172 battle_message_line_172
	.globl gText_Rom_5AB0BA
gText_Rom_5AB0BA: @ 0x085AB0BA
	.string "あますぎた！$"
	.if (. - gText_Rom_5AB0BA) > 0x7
	.error "gText_Rom_5AB0BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0BA) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0BA)
	.endif
