	@ src/data/easy_chat/easy_chat_group_battle.h:88 easy_chat_group_battle_line_88
	.globl gText_Rom_57508D
gText_Rom_57508D: @ 0x0857508D
	.string "きめた$"
	.if (. - gText_Rom_57508D) > 0x4
	.error "gText_Rom_57508D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57508D) < 0x4
	.space 0x4 - (. - gText_Rom_57508D)
	.endif
