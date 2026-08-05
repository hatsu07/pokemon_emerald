	@ src/data/easy_chat/easy_chat_group_battle.h:172 easy_chat_group_battle_line_172 (+1 aliases)
	.globl gText_Rom_2C1D38
gText_Rom_2C1D38: @ 0x082C1D38
	.string "たいせん$"
	.if (. - gText_Rom_2C1D38) > 0x5
	.error "gText_Rom_2C1D38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D38) < 0x5
	.space 0x5 - (. - gText_Rom_2C1D38)
	.endif
	.space 0x3, 0x00
