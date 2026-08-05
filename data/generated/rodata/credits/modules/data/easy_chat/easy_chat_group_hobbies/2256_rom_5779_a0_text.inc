	@ src/data/easy_chat/easy_chat_group_hobbies.h:298 easy_chat_group_hobbies_line_298
	.globl gText_Rom_5779A0
gText_Rom_5779A0: @ 0x085779A0
	.string "やすみ$"
	.if (. - gText_Rom_5779A0) > 0x4
	.error "gText_Rom_5779A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779A0) < 0x4
	.space 0x4 - (. - gText_Rom_5779A0)
	.endif
