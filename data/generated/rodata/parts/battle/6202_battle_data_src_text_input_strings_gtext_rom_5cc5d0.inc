	@ src/text_input_strings.c:59 gText_UnionRoomChatKeyboard_Emoji5
	.globl gText_Rom_5CC5D0
gText_Rom_5CC5D0: @ 0x085CC5D0
	.string "{EMOJI_LEFT_EYE}{EMOJI_RIGHT_EYE}{EMOJI_SMALLWHEEL}{EMOJI_SPHERE}{EMOJI_IRRITATED}$"
	.if (. - gText_Rom_5CC5D0) > 0xb
	.error "gText_Rom_5CC5D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5D0) < 0xb
	.space 0xb - (. - gText_Rom_5CC5D0)
	.endif
	@ Replaced baserom.gba range: offset=0x5CC5DB, size=0xB
	.byte 0xF9, 0xDF, 0xF9, 0xF1, 0xF9, 0xE0, 0xF9, 0xE2, 0xF9, 0xE3, 0xFF
