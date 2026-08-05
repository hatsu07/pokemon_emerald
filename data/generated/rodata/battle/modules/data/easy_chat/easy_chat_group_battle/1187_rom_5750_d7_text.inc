	@ src/data/easy_chat/easy_chat_group_battle.h:184 easy_chat_group_battle_line_184
	.globl gText_Rom_5750D7
gText_Rom_5750D7: @ 0x085750D7
	.string "ちから$"
	.if (. - gText_Rom_5750D7) > 0x4
	.error "gText_Rom_5750D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750D7) < 0x4
	.space 0x4 - (. - gText_Rom_5750D7)
	.endif
