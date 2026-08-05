	@ src/text_input_strings.c:62 gText_UnionRoomChatKeyboard_Emoji8
	.globl gText_Rom_5CC5F1
gText_Rom_5CC5F1: @ 0x085CC5F1
	.string "{EMOJI_CIRCLE}{EMOJI_TRIANGLE}{EMOJI_SQUARE}{EMOJI_HEART}{EMOJI_MOON}$"
	.if (. - gText_Rom_5CC5F1) > 0xb
	.error "gText_Rom_5CC5F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5F1) < 0xb
	.space 0xb - (. - gText_Rom_5CC5F1)
	.endif
