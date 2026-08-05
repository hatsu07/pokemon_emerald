	@ src/data/easy_chat/easy_chat_group_battle.h:58 easy_chat_group_battle_line_58
	.globl gText_Rom_575076
gText_Rom_575076: @ 0x08575076
	.string "かって$"
	.if (. - gText_Rom_575076) > 0x4
	.error "gText_Rom_575076 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575076) < 0x4
	.space 0x4 - (. - gText_Rom_575076)
	.endif
