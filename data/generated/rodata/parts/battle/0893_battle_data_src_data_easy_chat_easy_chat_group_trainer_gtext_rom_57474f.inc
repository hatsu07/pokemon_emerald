	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_57474F
gText_Rom_57474F: @ 0x0857474F
	.string "トレーナー$"
	.if (. - gText_Rom_57474F) > 0x6
	.error "gText_Rom_57474F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57474F) < 0x6
	.space 0x6 - (. - gText_Rom_57474F)
	.endif
