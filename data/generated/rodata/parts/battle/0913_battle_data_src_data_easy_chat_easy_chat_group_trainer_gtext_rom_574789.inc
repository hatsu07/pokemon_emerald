	@ src/data/easy_chat/easy_chat_group_trainer.h:136 easy_chat_group_trainer_line_136
	.globl gText_Rom_574789
gText_Rom_574789: @ 0x08574789
	.string "ファイア$"
	.if (. - gText_Rom_574789) > 0x5
	.error "gText_Rom_574789 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574789) < 0x5
	.space 0x5 - (. - gText_Rom_574789)
	.endif
