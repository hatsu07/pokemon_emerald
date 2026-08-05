	@ src/data/easy_chat/easy_chat_group_battle.h:334 easy_chat_group_battle_line_334
	.globl gText_Rom_575146
gText_Rom_575146: @ 0x08575146
	.string "もらった$"
	.if (. - gText_Rom_575146) > 0x5
	.error "gText_Rom_575146 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575146) < 0x5
	.space 0x5 - (. - gText_Rom_575146)
	.endif
