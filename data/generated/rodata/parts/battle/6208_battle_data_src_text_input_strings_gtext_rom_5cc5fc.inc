	@ src/text_input_strings.c:63 gText_UnionRoomChatKeyboard_Emoji9
	.globl gText_Rom_5CC5FC
gText_Rom_5CC5FC: @ 0x085CC5FC
	.string "{EMOJI_NOTE}{EMOJI_PLUS}{EMOJI_MINUS}{EMOJI_EQUALS}{EMOJI_PIPE}$"
	.if (. - gText_Rom_5CC5FC) > 0xb
	.error "gText_Rom_5CC5FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5FC) < 0xb
	.space 0xb - (. - gText_Rom_5CC5FC)
	.endif
	@ Replaced baserom.gba range: offset=0x5CC607, size=0x17
	.byte 0xF9, 0xD2, 0xF9, 0x09, 0xF9, 0xDB, 0xF0, 0x00, 0xFF, 0x1B, 0x27, 0x37, 0x15, 0xFF, 0x56, 0x60
	.byte 0x56, 0x65, 0xFF, 0xBB, 0xBC, 0xBD, 0xFF
