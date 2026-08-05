	@ src/data/easy_chat/easy_chat_group_actions.h:238 easy_chat_group_actions_line_238
	.globl gText_Rom_577189
gText_Rom_577189: @ 0x08577189
	.string "しんじて$"
	.if (. - gText_Rom_577189) > 0x5
	.error "gText_Rom_577189 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577189) < 0x5
	.space 0x5 - (. - gText_Rom_577189)
	.endif
	@ Decoded text from ROM range: offset=0x57718E, size=0x3
	.string "する$"
