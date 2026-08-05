	@ src/data/easy_chat/easy_chat_group_trainer.h:34 easy_chat_group_trainer_line_34 (+2 aliases)
	.globl gText_Rom_574733
gText_Rom_574733: @ 0x08574733
	.string "ずかん$"
	.if (. - gText_Rom_574733) > 0x4
	.error "gText_Rom_574733 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574733) < 0x4
	.space 0x4 - (. - gText_Rom_574733)
	.endif
