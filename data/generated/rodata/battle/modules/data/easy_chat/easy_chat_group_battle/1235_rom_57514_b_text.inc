	@ src/data/easy_chat/easy_chat_group_battle.h:340 easy_chat_group_battle_line_340
	.globl gText_Rom_57514B
gText_Rom_57514B: @ 0x0857514B
	.string "よゆう$"
	.if (. - gText_Rom_57514B) > 0x4
	.error "gText_Rom_57514B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57514B) < 0x4
	.space 0x4 - (. - gText_Rom_57514B)
	.endif
