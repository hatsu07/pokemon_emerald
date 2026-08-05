	@ src/text_input_strings.c:30 gText_UnionRoomChatKeyboard_01234Upper (+1 aliases)
	.globl gText_Rom_5CC59A
gText_Rom_5CC59A: @ 0x085CC59A
	.string "01234$"
	.if (. - gText_Rom_5CC59A) > 0x6
	.error "gText_Rom_5CC59A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC59A) < 0x6
	.space 0x6 - (. - gText_Rom_5CC59A)
	.endif
