	@ src/data/easy_chat/easy_chat_group_battle.h:238 easy_chat_group_battle_line_238
	.globl gText_Rom_5750FF
gText_Rom_5750FF: @ 0x085750FF
	.string "ねらう$"
	.if (. - gText_Rom_5750FF) > 0x4
	.error "gText_Rom_5750FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750FF) < 0x4
	.space 0x4 - (. - gText_Rom_5750FF)
	.endif
