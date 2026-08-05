	@ src/data/easy_chat/easy_chat_group_hobbies.h:46 easy_chat_group_hobbies_line_46
	.globl gText_Rom_5778DC
gText_Rom_5778DC: @ 0x085778DC
	.string "おもちゃ$"
	.if (. - gText_Rom_5778DC) > 0x5
	.error "gText_Rom_5778DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778DC) < 0x5
	.space 0x5 - (. - gText_Rom_5778DC)
	.endif
