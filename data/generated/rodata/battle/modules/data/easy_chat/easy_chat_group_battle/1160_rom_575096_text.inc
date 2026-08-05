	@ src/data/easy_chat/easy_chat_group_battle.h:100 easy_chat_group_battle_line_100
	.globl gText_Rom_575096
gText_Rom_575096: @ 0x08575096
	.string "くらえ$"
	.if (. - gText_Rom_575096) > 0x4
	.error "gText_Rom_575096 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575096) < 0x4
	.space 0x4 - (. - gText_Rom_575096)
	.endif
