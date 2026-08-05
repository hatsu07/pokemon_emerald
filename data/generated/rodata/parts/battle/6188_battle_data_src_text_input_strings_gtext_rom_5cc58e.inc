	@ src/text_input_strings.c:28 gText_UnionRoomChatKeyboard_UVWXY
	.globl gText_Rom_5CC58E
gText_Rom_5CC58E: @ 0x085CC58E
	.string "UVWXY$"
	.if (. - gText_Rom_5CC58E) > 0x6
	.error "gText_Rom_5CC58E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC58E) < 0x6
	.space 0x6 - (. - gText_Rom_5CC58E)
	.endif
	@ Decoded text from ROM range: offset=0x5CC594, size=0x6
	.string "Z・…　　$"
