	@ src/text_input_strings.c:24 gText_UnionRoomChatKeyboard_ABCDE
	.globl gText_Rom_5CC576
gText_Rom_5CC576: @ 0x085CC576
	.string "ABCDE$"
	.if (. - gText_Rom_5CC576) > 0x6
	.error "gText_Rom_5CC576 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC576) < 0x6
	.space 0x6 - (. - gText_Rom_5CC576)
	.endif
