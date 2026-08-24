	@ src/text_input_strings.c:31 gText_UnionRoomChatKeyboard_56789Upper (+1 aliases)
	.globl gText_UnionRoomChatKeyboard_56789Upper_Copy_TextInputStrings
gText_UnionRoomChatKeyboard_56789Upper_Copy_TextInputStrings: @ 0x08565BBB
	.string "56789{EOS}"
	.if (. - gText_UnionRoomChatKeyboard_56789Upper_Copy_TextInputStrings) > 0x6
	.error "gText_UnionRoomChatKeyboard_56789Upper_Copy_TextInputStrings may not grow beyond its original slot"
	.endif
	.if (. - gText_UnionRoomChatKeyboard_56789Upper_Copy_TextInputStrings) < 0x6
	.space 0x6 - (. - gText_UnionRoomChatKeyboard_56789Upper_Copy_TextInputStrings)
	.endif
