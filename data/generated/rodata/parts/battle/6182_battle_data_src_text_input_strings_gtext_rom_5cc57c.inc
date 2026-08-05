	@ src/text_input_strings.c:25 gText_UnionRoomChatKeyboard_FGHIJ
	.globl gText_Rom_5CC57C
gText_Rom_5CC57C: @ 0x085CC57C
	.string "FGHIJ$"
	.if (. - gText_Rom_5CC57C) > 0x6
	.error "gText_Rom_5CC57C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC57C) < 0x6
	.space 0x6 - (. - gText_Rom_5CC57C)
	.endif
