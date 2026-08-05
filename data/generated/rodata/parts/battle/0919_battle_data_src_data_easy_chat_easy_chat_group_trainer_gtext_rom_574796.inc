	@ src/data/easy_chat/easy_chat_group_trainer.h:154 easy_chat_group_trainer_line_154 (+4 aliases)
	.globl gText_Rom_574796
gText_Rom_574796: @ 0x08574796
	.string "レッド$"
	.if (. - gText_Rom_574796) > 0x4
	.error "gText_Rom_574796 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574796) < 0x4
	.space 0x4 - (. - gText_Rom_574796)
	.endif
