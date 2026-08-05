	@ src/text_input_strings.c:31 gText_UnionRoomChatKeyboard_56789Upper (+1 aliases)
	.globl gText_Rom_5CC5A0
gText_Rom_5CC5A0: @ 0x085CC5A0
	.string "56789$"
	.if (. - gText_Rom_5CC5A0) > 0x6
	.error "gText_Rom_5CC5A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5A0) < 0x6
	.space 0x6 - (. - gText_Rom_5CC5A0)
	.endif
