	@ src/battle_message.c:170 battle_message_line_170
	.globl gText_Rom_5AB0AC
gText_Rom_5AB0AC: @ 0x085AB0AC
	.string "からすぎた！$"
	.if (. - gText_Rom_5AB0AC) > 0x7
	.error "gText_Rom_5AB0AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0AC) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0AC)
	.endif
