	@ src/data/easy_chat/easy_chat_group_lifestyle.h:124 easy_chat_group_lifestyle_line_124
	.globl gText_Rom_57762A
gText_Rom_57762A: @ 0x0857762A
	.string "せんせい$"
	.if (. - gText_Rom_57762A) > 0x5
	.error "gText_Rom_57762A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57762A) < 0x5
	.space 0x5 - (. - gText_Rom_57762A)
	.endif
