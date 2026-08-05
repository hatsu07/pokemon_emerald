	@ src/data/easy_chat/easy_chat_group_hobbies.h:100 easy_chat_group_hobbies_line_100
	.globl gText_Rom_577906
gText_Rom_577906: @ 0x08577906
	.string "ごっこ$"
	.if (. - gText_Rom_577906) > 0x4
	.error "gText_Rom_577906 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577906) < 0x4
	.space 0x4 - (. - gText_Rom_577906)
	.endif
