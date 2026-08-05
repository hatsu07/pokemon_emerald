	@ src/data/easy_chat/easy_chat_group_battle.h:4 easy_chat_group_battle_line_4
	.globl gText_Rom_575050
gText_Rom_575050: @ 0x08575050
	.string "あいしょう$"
	.if (. - gText_Rom_575050) > 0x6
	.error "gText_Rom_575050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575050) < 0x6
	.space 0x6 - (. - gText_Rom_575050)
	.endif
	@ Decoded text from ROM range: offset=0x575056, size=0x3
	.string "いけ$"
