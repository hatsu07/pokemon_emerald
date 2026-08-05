	@ src/data/easy_chat/easy_chat_group_trainer.h:58 easy_chat_group_trainer_line_58 (+1 aliases)
	.globl gText_Rom_574745
gText_Rom_574745: @ 0x08574745
	.string "つうしん$"
	.if (. - gText_Rom_574745) > 0x5
	.error "gText_Rom_574745 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574745) < 0x5
	.space 0x5 - (. - gText_Rom_574745)
	.endif
