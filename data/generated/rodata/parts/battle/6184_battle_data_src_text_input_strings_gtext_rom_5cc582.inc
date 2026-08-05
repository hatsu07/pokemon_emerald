	@ src/text_input_strings.c:26 gText_UnionRoomChatKeyboard_KLMNO
	.globl gText_Rom_5CC582
gText_Rom_5CC582: @ 0x085CC582
	.string "KLMNO$"
	.if (. - gText_Rom_5CC582) > 0x6
	.error "gText_Rom_5CC582 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC582) < 0x6
	.space 0x6 - (. - gText_Rom_5CC582)
	.endif
