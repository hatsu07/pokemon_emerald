	@ src/data/easy_chat/easy_chat_group_hobbies.h:250 easy_chat_group_hobbies_line_250
	.globl gText_Rom_57797C
gText_Rom_57797C: @ 0x0857797C
	.string "ヒロイン$"
	.if (. - gText_Rom_57797C) > 0x5
	.error "gText_Rom_57797C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57797C) < 0x5
	.space 0x5 - (. - gText_Rom_57797C)
	.endif
