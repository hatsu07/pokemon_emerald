	@ src/data/easy_chat/easy_chat_group_battle.h:304 easy_chat_group_battle_line_304
	.globl gText_Rom_57512F
gText_Rom_57512F: @ 0x0857512F
	.string "まもり$"
	.if (. - gText_Rom_57512F) > 0x4
	.error "gText_Rom_57512F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57512F) < 0x4
	.space 0x4 - (. - gText_Rom_57512F)
	.endif
