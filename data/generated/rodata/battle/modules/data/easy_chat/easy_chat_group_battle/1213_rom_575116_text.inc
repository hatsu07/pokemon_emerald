	@ src/data/easy_chat/easy_chat_group_battle.h:268 easy_chat_group_battle_line_268
	.globl gText_Rom_575116
gText_Rom_575116: @ 0x08575116
	.string "ほんき$"
	.if (. - gText_Rom_575116) > 0x4
	.error "gText_Rom_575116 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575116) < 0x4
	.space 0x4 - (. - gText_Rom_575116)
	.endif
