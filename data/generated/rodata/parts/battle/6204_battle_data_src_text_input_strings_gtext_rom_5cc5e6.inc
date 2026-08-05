	@ src/text_input_strings.c:61 gText_UnionRoomChatKeyboard_Emoji7
	.globl gText_Rom_5CC5E6
gText_Rom_5CC5E6: @ 0x085CC5E6
	.string "{EMOJI_RIGHT_FIST}{EMOJI_LEFT_FIST}{EMOJI_TRIANGLE_OUTLINE}{EMOJI_UNION}{EMOJI_GREATER_THAN}$"
	.if (. - gText_Rom_5CC5E6) > 0xb
	.error "gText_Rom_5CC5E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5E6) < 0xb
	.space 0xb - (. - gText_Rom_5CC5E6)
	.endif
