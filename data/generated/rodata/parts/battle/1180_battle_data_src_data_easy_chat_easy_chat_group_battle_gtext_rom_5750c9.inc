	@ src/data/easy_chat/easy_chat_group_battle.h:166 easy_chat_group_battle_line_166
	.globl gText_Rom_5750C9
gText_Rom_5750C9: @ 0x085750C9
	.string "センス$"
	.if (. - gText_Rom_5750C9) > 0x4
	.error "gText_Rom_5750C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750C9) < 0x4
	.space 0x4 - (. - gText_Rom_5750C9)
	.endif
