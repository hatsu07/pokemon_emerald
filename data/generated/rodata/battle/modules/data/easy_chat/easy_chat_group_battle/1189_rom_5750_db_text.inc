	@ src/data/easy_chat/easy_chat_group_battle.h:190 easy_chat_group_battle_line_190
	.globl gText_Rom_5750DB
gText_Rom_5750DB: @ 0x085750DB
	.string "チャレンジ$"
	.if (. - gText_Rom_5750DB) > 0x6
	.error "gText_Rom_5750DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750DB) < 0x6
	.space 0x6 - (. - gText_Rom_5750DB)
	.endif
