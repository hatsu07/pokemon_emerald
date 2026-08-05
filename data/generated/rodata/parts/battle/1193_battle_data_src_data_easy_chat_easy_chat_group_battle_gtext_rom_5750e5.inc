	@ src/data/easy_chat/easy_chat_group_battle.h:202 easy_chat_group_battle_line_202
	.globl gText_Rom_5750E5
gText_Rom_5750E5: @ 0x085750E5
	.string "つよすぎ$"
	.if (. - gText_Rom_5750E5) > 0x5
	.error "gText_Rom_5750E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750E5) < 0x5
	.space 0x5 - (. - gText_Rom_5750E5)
	.endif
