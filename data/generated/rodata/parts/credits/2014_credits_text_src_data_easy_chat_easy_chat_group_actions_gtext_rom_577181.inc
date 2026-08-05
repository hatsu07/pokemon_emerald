	@ src/data/easy_chat/easy_chat_group_actions.h:226 easy_chat_group_actions_line_226
	.globl gText_Rom_577181
gText_Rom_577181: @ 0x08577181
	.string "しらない$"
	.if (. - gText_Rom_577181) > 0x5
	.error "gText_Rom_577181 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577181) < 0x5
	.space 0x5 - (. - gText_Rom_577181)
	.endif
	@ Decoded text from ROM range: offset=0x577186, size=0x3
	.string "しる$"
