	@ src/text_input_strings.c:57 gText_UnionRoomChatKeyboard_Emoji3
	.globl gText_Rom_5CC5BC
gText_Rom_5CC5BC: @ 0x085CC5BC
	.string "{EMOJI_LEAF}{EMOJI_FIRE}{EMOJI_WATER}{EMOJI_BOLT}{EMOJI_BALL}$"
	.if (. - gText_Rom_5CC5BC) > 0xb
	.error "gText_Rom_5CC5BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5BC) < 0xb
	.space 0xb - (. - gText_Rom_5CC5BC)
	.endif
