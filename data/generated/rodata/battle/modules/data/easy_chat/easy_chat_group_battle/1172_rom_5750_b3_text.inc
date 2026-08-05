	@ src/data/easy_chat/easy_chat_group_battle.h:136 easy_chat_group_battle_line_136 (+1 aliases)
	.globl gText_Rom_5750B3
gText_Rom_5750B3: @ 0x085750B3
	.string "さくせん$"
	.if (. - gText_Rom_5750B3) > 0x5
	.error "gText_Rom_5750B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750B3) < 0x5
	.space 0x5 - (. - gText_Rom_5750B3)
	.endif
