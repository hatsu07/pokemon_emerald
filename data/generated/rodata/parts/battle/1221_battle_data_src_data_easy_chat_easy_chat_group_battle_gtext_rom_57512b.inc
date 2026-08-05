	@ src/data/easy_chat/easy_chat_group_battle.h:298 easy_chat_group_battle_line_298
	.globl gText_Rom_57512B
gText_Rom_57512B: @ 0x0857512B
	.string "まける$"
	.if (. - gText_Rom_57512B) > 0x4
	.error "gText_Rom_57512B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57512B) < 0x4
	.space 0x4 - (. - gText_Rom_57512B)
	.endif
