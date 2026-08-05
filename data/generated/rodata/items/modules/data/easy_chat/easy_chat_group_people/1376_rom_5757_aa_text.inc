	@ src/data/easy_chat/easy_chat_group_people.h:178 easy_chat_group_people_line_178
	.globl gText_Rom_5757AA
gText_Rom_5757AA: @ 0x085757AA
	.string "きみの$"
	.if (. - gText_Rom_5757AA) > 0x4
	.error "gText_Rom_5757AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757AA) < 0x4
	.space 0x4 - (. - gText_Rom_5757AA)
	.endif
