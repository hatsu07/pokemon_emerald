	@ src/data/easy_chat/easy_chat_group_battle.h:118 easy_chat_group_battle_line_118
	.globl gText_Rom_5750A3
gText_Rom_5750A3: @ 0x085750A3
	.string "こうさん{EOS}"
	.if (. - gText_Rom_5750A3) > 0x5
	.error "gText_Rom_5750A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750A3) < 0x5
	.space 0x5 - (. - gText_Rom_5750A3)
	.endif
