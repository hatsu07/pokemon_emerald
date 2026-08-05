	@ src/data/easy_chat/easy_chat_group_battle.h:286 easy_chat_group_battle_line_286
	.globl gText_Rom_575122
gText_Rom_575122: @ 0x08575122
	.string "まけたら$"
	.if (. - gText_Rom_575122) > 0x5
	.error "gText_Rom_575122 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575122) < 0x5
	.space 0x5 - (. - gText_Rom_575122)
	.endif
