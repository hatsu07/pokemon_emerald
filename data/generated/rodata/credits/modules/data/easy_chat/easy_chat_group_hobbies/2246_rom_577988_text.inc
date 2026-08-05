	@ src/data/easy_chat/easy_chat_group_hobbies.h:262 easy_chat_group_hobbies_line_262
	.globl gText_Rom_577988
gText_Rom_577988: @ 0x08577988
	.string "ぼうけん$"
	.if (. - gText_Rom_577988) > 0x5
	.error "gText_Rom_577988 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577988) < 0x5
	.space 0x5 - (. - gText_Rom_577988)
	.endif
