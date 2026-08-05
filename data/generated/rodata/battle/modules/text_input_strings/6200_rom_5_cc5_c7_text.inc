	@ src/text_input_strings.c:58 gText_UnionRoomChatKeyboard_Emoji4
	.globl gText_Rom_5CC5C7
gText_Rom_5CC5C7: @ 0x085CC5C7
	.string "♂♀{EMOJI_LEFT_PAREN}{EMOJI_RIGHT_PAREN}{EMOJI_TILDE}$"
	.if (. - gText_Rom_5CC5C7) > 0x9
	.error "gText_Rom_5CC5C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5C7) < 0x9
	.space 0x9 - (. - gText_Rom_5CC5C7)
	.endif
