	@ src/data/easy_chat/easy_chat_group_battle.h:64 easy_chat_group_battle_line_64
	.globl gText_Rom_57507A
gText_Rom_57507A: @ 0x0857507A
	.string "かてない$"
	.if (. - gText_Rom_57507A) > 0x5
	.error "gText_Rom_57507A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57507A) < 0x5
	.space 0x5 - (. - gText_Rom_57507A)
	.endif
