	@ src/text_input_strings.c:56 gText_UnionRoomChatKeyboard_Emoji2
	.globl gText_Rom_5CC5B1
gText_Rom_5CC5B1: @ 0x085CC5B1
	.string "{EMOJI_BIGSMILE}{EMOJI_EVIL}{EMOJI_NEUTRAL}{EMOJI_TIRED}{EMOJI_SHOCKED}$"
	.if (. - gText_Rom_5CC5B1) > 0xb
	.error "gText_Rom_5CC5B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5B1) < 0xb
	.space 0xb - (. - gText_Rom_5CC5B1)
	.endif
