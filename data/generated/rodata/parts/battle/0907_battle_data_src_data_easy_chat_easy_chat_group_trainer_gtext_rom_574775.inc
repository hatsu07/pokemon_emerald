	@ src/data/easy_chat/easy_chat_group_trainer.h:106 easy_chat_group_trainer_line_106 (+1 aliases)
	.globl gText_Rom_574775
gText_Rom_574775: @ 0x08574775
	.string "ルビー$"
	.if (. - gText_Rom_574775) > 0x4
	.error "gText_Rom_574775 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574775) < 0x4
	.space 0x4 - (. - gText_Rom_574775)
	.endif

