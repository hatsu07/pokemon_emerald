	@ src/data/easy_chat/easy_chat_group_battle.h:196 easy_chat_group_battle_line_196
	.globl gText_Rom_5750E1
gText_Rom_5750E1: @ 0x085750E1
	.string "つよい$"
	.if (. - gText_Rom_5750E1) > 0x4
	.error "gText_Rom_5750E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750E1) < 0x4
	.space 0x4 - (. - gText_Rom_5750E1)
	.endif
