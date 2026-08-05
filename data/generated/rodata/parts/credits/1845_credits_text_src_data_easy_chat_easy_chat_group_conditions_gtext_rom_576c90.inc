	@ src/data/easy_chat/easy_chat_group_conditions.h:16 easy_chat_group_conditions_line_16
	.globl gText_Rom_576C90
gText_Rom_576C90: @ 0x08576C90
	.string "あまり$"
	.if (. - gText_Rom_576C90) > 0x4
	.error "gText_Rom_576C90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576C90) < 0x4
	.space 0x4 - (. - gText_Rom_576C90)
	.endif
	@ Decoded text from ROM range: offset=0x576C94, size=0xC
	.string "あり$"
	.string "ある$"
	.string "いい$"
	.string "いか$"
