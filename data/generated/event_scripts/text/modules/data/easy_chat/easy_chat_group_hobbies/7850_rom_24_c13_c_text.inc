	@ src/data/easy_chat/easy_chat_group_hobbies.h:298 easy_chat_group_hobbies_line_298
	.globl gText_Rom_24C13C
gText_Rom_24C13C: @ 0x0824C13C
	.string "やすみ$"
	.if (. - gText_Rom_24C13C) > 0x4
	.error "gText_Rom_24C13C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C13C) < 0x4
	.space 0x4 - (. - gText_Rom_24C13C)
	.endif
