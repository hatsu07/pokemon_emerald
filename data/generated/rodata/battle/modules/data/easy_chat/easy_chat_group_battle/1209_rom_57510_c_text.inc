	@ src/data/easy_chat/easy_chat_group_battle.h:256 easy_chat_group_battle_line_256
	.globl gText_Rom_57510C
gText_Rom_57510C: @ 0x0857510C
	.string "ふっかつ$"
	.if (. - gText_Rom_57510C) > 0x5
	.error "gText_Rom_57510C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57510C) < 0x5
	.space 0x5 - (. - gText_Rom_57510C)
	.endif
