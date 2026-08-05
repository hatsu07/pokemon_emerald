	@ src/data/easy_chat/easy_chat_group_battle.h:28 easy_chat_group_battle_line_28
	.globl gText_Rom_575062
gText_Rom_575062: @ 0x08575062
	.string "かたせて$"
	.if (. - gText_Rom_575062) > 0x5
	.error "gText_Rom_575062 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575062) < 0x5
	.space 0x5 - (. - gText_Rom_575062)
	.endif
	@ Decoded text from ROM range: offset=0x575067, size=0x6
	.string "かち$"
	.string "かつ$"
