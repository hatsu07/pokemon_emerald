	@ src/data/easy_chat/easy_chat_group_endings.h:388 easy_chat_group_endings_line_388
	.globl gText_Rom_5764A2
gText_Rom_5764A2: @ 0x085764A2
	.string "よーん$"
	.if (. - gText_Rom_5764A2) > 0x4
	.error "gText_Rom_5764A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5764A2) < 0x4
	.space 0x4 - (. - gText_Rom_5764A2)
	.endif
	@ Decoded text from ROM range: offset=0x5764A6, size=0x9
	.string "よね$"
	.string "るよ$"
	.string "わけ$"
