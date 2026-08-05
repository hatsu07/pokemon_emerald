	@ src/data/easy_chat/easy_chat_group_hobbies.h:214 easy_chat_group_hobbies_line_214
	.globl gText_Rom_577960
gText_Rom_577960: @ 0x08577960
	.string "でんしゃ$"
	.if (. - gText_Rom_577960) > 0x5
	.error "gText_Rom_577960 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577960) < 0x5
	.space 0x5 - (. - gText_Rom_577960)
	.endif
