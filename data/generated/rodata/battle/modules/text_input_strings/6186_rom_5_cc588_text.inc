	@ src/text_input_strings.c:27 gText_UnionRoomChatKeyboard_PQRST
	.globl gText_Rom_5CC588
gText_Rom_5CC588: @ 0x085CC588
	.string "PQRST$"
	.if (. - gText_Rom_5CC588) > 0x6
	.error "gText_Rom_5CC588 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC588) < 0x6
	.space 0x6 - (. - gText_Rom_5CC588)
	.endif
