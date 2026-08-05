	@ src/data/easy_chat/easy_chat_group_battle.h:172 easy_chat_group_battle_line_172 (+1 aliases)
	.globl gText_Rom_5CC779
gText_Rom_5CC779: @ 0x085CC779
	.string "たいせん$"
	.if (. - gText_Rom_5CC779) > 0x5
	.error "gText_Rom_5CC779 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC779) < 0x5
	.space 0x5 - (. - gText_Rom_5CC779)
	.endif
