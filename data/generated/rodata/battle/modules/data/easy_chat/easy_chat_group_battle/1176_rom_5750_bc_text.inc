	@ src/data/easy_chat/easy_chat_group_battle.h:148 easy_chat_group_battle_line_148
	.globl gText_Rom_5750BC
gText_Rom_5750BC: @ 0x085750BC
	.string "しょうぶ$"
	.if (. - gText_Rom_5750BC) > 0x5
	.error "gText_Rom_5750BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750BC) < 0x5
	.space 0x5 - (. - gText_Rom_5750BC)
	.endif
