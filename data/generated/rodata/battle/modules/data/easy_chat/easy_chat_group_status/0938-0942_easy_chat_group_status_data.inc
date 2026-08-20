	@ src/data/easy_chat/easy_chat_group_status.h:58 easy_chat_group_status_line_58
	.globl gText_Rom_574914
gText_Rom_574914: @ 0x08574914
	.string "いろちがい{EOS}"
	.if (. - gText_Rom_574914) > 0x6
	.error "gText_Rom_574914 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574914) < 0x6
	.space 0x6 - (. - gText_Rom_574914)
	.endif
	@ Decoded text from ROM range: offset=0x57491A, size=0x3
	.string "いわ{EOS}"

	@ src/data/easy_chat/easy_chat_group_status.h:70 easy_chat_group_status_line_70
	.globl gText_Rom_57491D
gText_Rom_57491D: @ 0x0857491D
	.string "うつくしい{EOS}"
	.if (. - gText_Rom_57491D) > 0x6
	.error "gText_Rom_57491D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57491D) < 0x6
	.space 0x6 - (. - gText_Rom_57491D)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:76 easy_chat_group_status_line_76 (+2 aliases)
	.globl gText_Rom_574923
gText_Rom_574923: @ 0x08574923
	.string "うつくしさ{EOS}"
	.if (. - gText_Rom_574923) > 0x6
	.error "gText_Rom_574923 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574923) < 0x6
	.space 0x6 - (. - gText_Rom_574923)
	.endif
