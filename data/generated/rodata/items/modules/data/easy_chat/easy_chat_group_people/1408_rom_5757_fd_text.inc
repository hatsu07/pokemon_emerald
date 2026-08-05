	@ src/data/easy_chat/easy_chat_group_people.h:298 easy_chat_group_people_line_298
	.globl gText_Rom_5757FD
gText_Rom_5757FD: @ 0x085757FD
	.string "だれを$"
	.if (. - gText_Rom_5757FD) > 0x4
	.error "gText_Rom_5757FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757FD) < 0x4
	.space 0x4 - (. - gText_Rom_5757FD)
	.endif
