	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_5763CC
gText_Rom_5763CC: @ 0x085763CC
	.string "します$"
	.if (. - gText_Rom_5763CC) > 0x4
	.error "gText_Rom_5763CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763CC) < 0x4
	.space 0x4 - (. - gText_Rom_5763CC)
	.endif
	@ Decoded text from ROM range: offset=0x5763D0, size=0x3
	.string "じゃ$"
