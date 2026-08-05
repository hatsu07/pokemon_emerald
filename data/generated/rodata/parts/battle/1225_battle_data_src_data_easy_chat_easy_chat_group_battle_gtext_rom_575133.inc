	@ src/data/easy_chat/easy_chat_group_battle.h:310 easy_chat_group_battle_line_310
	.globl gText_Rom_575133
gText_Rom_575133: @ 0x08575133
	.string "みかた$"
	.if (. - gText_Rom_575133) > 0x4
	.error "gText_Rom_575133 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575133) < 0x4
	.space 0x4 - (. - gText_Rom_575133)
	.endif
