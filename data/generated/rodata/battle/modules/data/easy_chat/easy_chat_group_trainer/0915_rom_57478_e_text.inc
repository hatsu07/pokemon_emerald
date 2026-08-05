	@ src/data/easy_chat/easy_chat_group_trainer.h:142 easy_chat_group_trainer_line_142 (+1 aliases)
	.globl gText_Rom_57478E
gText_Rom_57478E: @ 0x0857478E
	.string "みどり$"
	.if (. - gText_Rom_57478E) > 0x4
	.error "gText_Rom_57478E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57478E) < 0x4
	.space 0x4 - (. - gText_Rom_57478E)
	.endif
