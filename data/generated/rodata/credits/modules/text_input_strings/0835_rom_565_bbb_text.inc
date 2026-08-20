	@ src/text_input_strings.c:31 gText_UnionRoomChatKeyboard_56789Upper (+1 aliases)
	.globl gText_Rom_565BBB
gText_Rom_565BBB: @ 0x08565BBB
	.string "56789{EOS}"
	.if (. - gText_Rom_565BBB) > 0x6
	.error "gText_Rom_565BBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_565BBB) < 0x6
	.space 0x6 - (. - gText_Rom_565BBB)
	.endif
