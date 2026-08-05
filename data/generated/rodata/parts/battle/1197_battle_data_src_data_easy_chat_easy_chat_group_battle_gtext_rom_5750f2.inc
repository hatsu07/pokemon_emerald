	@ src/data/easy_chat/easy_chat_group_battle.h:220 easy_chat_group_battle_line_220
	.globl gText_Rom_5750F2
gText_Rom_5750F2: @ 0x085750F2
	.string "てんさい$"
	.if (. - gText_Rom_5750F2) > 0x5
	.error "gText_Rom_5750F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750F2) < 0x5
	.space 0x5 - (. - gText_Rom_5750F2)
	.endif
