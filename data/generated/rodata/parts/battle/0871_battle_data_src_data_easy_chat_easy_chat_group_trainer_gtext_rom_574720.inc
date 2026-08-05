	@ src/data/easy_chat/easy_chat_group_trainer.h:10 easy_chat_group_trainer_line_10
	.globl gText_Rom_574720
gText_Rom_574720: @ 0x08574720
	.string "ゲット$"
	.if (. - gText_Rom_574720) > 0x4
	.error "gText_Rom_574720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574720) < 0x4
	.space 0x4 - (. - gText_Rom_574720)
	.endif
