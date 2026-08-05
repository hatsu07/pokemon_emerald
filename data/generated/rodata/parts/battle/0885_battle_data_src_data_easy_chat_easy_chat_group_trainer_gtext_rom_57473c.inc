	@ src/data/easy_chat/easy_chat_group_trainer.h:46 easy_chat_group_trainer_line_46
	.globl gText_Rom_57473C
gText_Rom_57473C: @ 0x0857473C
	.string "センター$"
	.if (. - gText_Rom_57473C) > 0x5
	.error "gText_Rom_57473C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57473C) < 0x5
	.space 0x5 - (. - gText_Rom_57473C)
	.endif
