	@ src/data/easy_chat/easy_chat_group_battle.h:346 easy_chat_group_battle_line_346
	.globl gText_Rom_57514F
gText_Rom_57514F: @ 0x0857514F
	.string "よわい$"
	.if (. - gText_Rom_57514F) > 0x4
	.error "gText_Rom_57514F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57514F) < 0x4
	.space 0x4 - (. - gText_Rom_57514F)
	.endif
