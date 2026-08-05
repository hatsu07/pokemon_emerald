	@ src/data/easy_chat/easy_chat_group_status.h:70 easy_chat_group_status_line_70
	.globl gText_Rom_5CACBA
gText_Rom_5CACBA: @ 0x085CACBA
	.string "うつくしい$"
	.if (. - gText_Rom_5CACBA) > 0x6
	.error "gText_Rom_5CACBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACBA) < 0x6
	.space 0x6 - (. - gText_Rom_5CACBA)
	.endif
