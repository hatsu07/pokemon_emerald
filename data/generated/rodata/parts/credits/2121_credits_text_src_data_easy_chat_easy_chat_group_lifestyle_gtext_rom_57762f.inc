	@ src/data/easy_chat/easy_chat_group_lifestyle.h:130 easy_chat_group_lifestyle_line_130
	.globl gText_Rom_57762F
gText_Rom_57762F: @ 0x0857762F
	.string "たいかい$"
	.if (. - gText_Rom_57762F) > 0x5
	.error "gText_Rom_57762F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57762F) < 0x5
	.space 0x5 - (. - gText_Rom_57762F)
	.endif
