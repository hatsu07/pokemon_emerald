	@ src/data/easy_chat/easy_chat_group_battle.h:226 easy_chat_group_battle_line_226 (+1 aliases)
	.globl gText_Rom_5750F7
gText_Rom_5750F7: @ 0x085750F7
	.string "でんせつ$"
	.if (. - gText_Rom_5750F7) > 0x5
	.error "gText_Rom_5750F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750F7) < 0x5
	.space 0x5 - (. - gText_Rom_5750F7)
	.endif
