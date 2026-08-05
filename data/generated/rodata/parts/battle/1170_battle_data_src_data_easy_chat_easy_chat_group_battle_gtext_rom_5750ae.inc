	@ src/data/easy_chat/easy_chat_group_battle.h:130 easy_chat_group_battle_line_130
	.globl gText_Rom_5750AE
gText_Rom_5750AE: @ 0x085750AE
	.string "さいのう$"
	.if (. - gText_Rom_5750AE) > 0x5
	.error "gText_Rom_5750AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750AE) < 0x5
	.space 0x5 - (. - gText_Rom_5750AE)
	.endif
