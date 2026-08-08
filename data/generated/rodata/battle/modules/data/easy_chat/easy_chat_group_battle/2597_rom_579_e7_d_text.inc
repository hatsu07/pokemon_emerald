	@ src/data/easy_chat/easy_chat_group_battle.h:244 easy_chat_group_battle_line_244 (+3 aliases)
	.globl gText_Rom_579E7D
gText_Rom_579E7D: @ 0x08579E7D
	.string "バトル$"
	.if (. - gText_Rom_579E7D) > 0x4
	.error "gText_Rom_579E7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E7D) < 0x4
	.space 0x4 - (. - gText_Rom_579E7D)
	.endif
