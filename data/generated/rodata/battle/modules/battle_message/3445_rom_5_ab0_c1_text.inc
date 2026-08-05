	@ src/battle_message.c:173 battle_message_line_173
	.globl gText_Rom_5AB0C1
gText_Rom_5AB0C1: @ 0x085AB0C1
	.string "にがすぎた！$"
	.if (. - gText_Rom_5AB0C1) > 0x7
	.error "gText_Rom_5AB0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0C1) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0C1)
	.endif
