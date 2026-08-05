	@ src/data/easy_chat/easy_chat_group_battle.h:232 easy_chat_group_battle_line_232
	.globl gText_Rom_5750FC
gText_Rom_5750FC: @ 0x085750FC
	.string "にげ$"
	.if (. - gText_Rom_5750FC) > 0x3
	.error "gText_Rom_5750FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750FC) < 0x3
	.space 0x3 - (. - gText_Rom_5750FC)
	.endif
