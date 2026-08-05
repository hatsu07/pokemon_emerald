	@ src/data/easy_chat/easy_chat_group_people.h:376 easy_chat_group_people_line_376
	.globl gText_Rom_575830
gText_Rom_575830: @ 0x08575830
	.string "みんなが$"
	.if (. - gText_Rom_575830) > 0x5
	.error "gText_Rom_575830 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575830) < 0x5
	.space 0x5 - (. - gText_Rom_575830)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:382 easy_chat_group_people_line_382
	.globl gText_Rom_575835
gText_Rom_575835: @ 0x08575835
	.string "みんなに$"
	.if (. - gText_Rom_575835) > 0x5
	.error "gText_Rom_575835 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575835) < 0x5
	.space 0x5 - (. - gText_Rom_575835)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:388 easy_chat_group_people_line_388
	.globl gText_Rom_57583A
gText_Rom_57583A: @ 0x0857583A
	.string "みんなの$"
	.if (. - gText_Rom_57583A) > 0x5
	.error "gText_Rom_57583A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57583A) < 0x5
	.space 0x5 - (. - gText_Rom_57583A)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:394 easy_chat_group_people_line_394
	.globl gText_Rom_57583F
gText_Rom_57583F: @ 0x0857583F
	.string "みんなは$"
	.if (. - gText_Rom_57583F) > 0x5
	.error "gText_Rom_57583F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57583F) < 0x5
	.space 0x5 - (. - gText_Rom_57583F)
	.endif

