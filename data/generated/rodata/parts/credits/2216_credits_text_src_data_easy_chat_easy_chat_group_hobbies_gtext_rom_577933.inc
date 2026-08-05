	@ src/data/easy_chat/easy_chat_group_hobbies.h:154 easy_chat_group_hobbies_line_154
	.globl gText_Rom_577933
gText_Rom_577933: @ 0x08577933
	.string "ソング$"
	.if (. - gText_Rom_577933) > 0x4
	.error "gText_Rom_577933 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577933) < 0x4
	.space 0x4 - (. - gText_Rom_577933)
	.endif
