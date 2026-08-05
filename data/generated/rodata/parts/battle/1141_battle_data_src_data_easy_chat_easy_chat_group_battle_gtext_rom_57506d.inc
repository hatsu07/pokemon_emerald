	@ src/data/easy_chat/easy_chat_group_battle.h:46 easy_chat_group_battle_line_46
	.globl gText_Rom_57506D
gText_Rom_57506D: @ 0x0857506D
	.string "かった$"
	.if (. - gText_Rom_57506D) > 0x4
	.error "gText_Rom_57506D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57506D) < 0x4
	.space 0x4 - (. - gText_Rom_57506D)
	.endif
