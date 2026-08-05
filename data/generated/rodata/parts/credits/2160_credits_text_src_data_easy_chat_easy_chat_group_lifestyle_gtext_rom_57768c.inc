	@ src/data/easy_chat/easy_chat_group_lifestyle.h:250 easy_chat_group_lifestyle_line_250
	.globl gText_Rom_57768C
gText_Rom_57768C: @ 0x0857768C
	.string "ライフ$"
	.if (. - gText_Rom_57768C) > 0x4
	.error "gText_Rom_57768C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57768C) < 0x4
	.space 0x4 - (. - gText_Rom_57768C)
	.endif
