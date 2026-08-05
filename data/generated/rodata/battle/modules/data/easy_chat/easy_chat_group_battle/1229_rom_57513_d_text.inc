	@ src/data/easy_chat/easy_chat_group_battle.h:322 easy_chat_group_battle_line_322
	.globl gText_Rom_57513D
gText_Rom_57513D: @ 0x0857513D
	.string "みとめる$"
	.if (. - gText_Rom_57513D) > 0x5
	.error "gText_Rom_57513D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57513D) < 0x5
	.space 0x5 - (. - gText_Rom_57513D)
	.endif
