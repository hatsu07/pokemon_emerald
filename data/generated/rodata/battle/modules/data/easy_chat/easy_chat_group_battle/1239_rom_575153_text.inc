	@ src/data/easy_chat/easy_chat_group_battle.h:352 easy_chat_group_battle_line_352
	.globl gText_Rom_575153
gText_Rom_575153: @ 0x08575153
	.string "よわすぎ$"
	.if (. - gText_Rom_575153) > 0x5
	.error "gText_Rom_575153 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575153) < 0x5
	.space 0x5 - (. - gText_Rom_575153)
	.endif
