	@ src/data/easy_chat/easy_chat_group_trainer.h:148 easy_chat_group_trainer_line_148 (+3 aliases)
	.globl gText_Rom_574792
gText_Rom_574792: @ 0x08574792
	.string "リーフ$"
	.if (. - gText_Rom_574792) > 0x4
	.error "gText_Rom_574792 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574792) < 0x4
	.space 0x4 - (. - gText_Rom_574792)
	.endif
