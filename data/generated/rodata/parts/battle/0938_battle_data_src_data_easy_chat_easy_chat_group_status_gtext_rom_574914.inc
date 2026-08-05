	@ src/data/easy_chat/easy_chat_group_status.h:58 easy_chat_group_status_line_58
	.globl gText_Rom_574914
gText_Rom_574914: @ 0x08574914
	.string "いろちがい$"
	.if (. - gText_Rom_574914) > 0x6
	.error "gText_Rom_574914 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574914) < 0x6
	.space 0x6 - (. - gText_Rom_574914)
	.endif
	@ Decoded text from ROM range: offset=0x57491A, size=0x3
	.string "いわ$"
