	@ src/data/easy_chat/easy_chat_group_actions.h:154 easy_chat_group_actions_line_154
	.globl gText_Rom_577155
gText_Rom_577155: @ 0x08577155
	.string "きたえ$"
	.if (. - gText_Rom_577155) > 0x4
	.error "gText_Rom_577155 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577155) < 0x4
	.space 0x4 - (. - gText_Rom_577155)
	.endif
	@ Decoded text from ROM range: offset=0x577159, size=0x6
	.string "きめ$"
	.string "くる$"
