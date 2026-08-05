	@ src/data/easy_chat/easy_chat_group_battle.h:142 easy_chat_group_battle_line_142
	.globl gText_Rom_5750B8
gText_Rom_5750B8: @ 0x085750B8
	.string "さばき$"
	.if (. - gText_Rom_5750B8) > 0x4
	.error "gText_Rom_5750B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750B8) < 0x4
	.space 0x4 - (. - gText_Rom_5750B8)
	.endif
