	@ src/text_input_strings.c:55 gText_UnionRoomChatKeyboard_Emoji1
	.globl gText_Rom_5CC5A6
gText_Rom_5CC5A6: @ 0x085CC5A6
	.string "{EMOJI_MISCHIEVOUS}{EMOJI_HAPPY}{EMOJI_ANGRY}{EMOJI_SURPRISED}{EMOJI_BIGANGER}$"
	.if (. - gText_Rom_5CC5A6) > 0xb
	.error "gText_Rom_5CC5A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5A6) < 0xb
	.space 0xb - (. - gText_Rom_5CC5A6)
	.endif
