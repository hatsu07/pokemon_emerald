	@ src/data/easy_chat/easy_chat_group_trainer.h:28 easy_chat_group_trainer_line_28
	.globl gText_Rom_57472F
gText_Rom_57472F: @ 0x0857472F
	.string "しんか$"
	.if (. - gText_Rom_57472F) > 0x4
	.error "gText_Rom_57472F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57472F) < 0x4
	.space 0x4 - (. - gText_Rom_57472F)
	.endif
