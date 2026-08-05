	@ src/data/easy_chat/easy_chat_group_trainer.h:130 easy_chat_group_trainer_line_130 (+2 aliases)
	.globl gText_Rom_574785
gText_Rom_574785: @ 0x08574785
	.string "バッグ$"
	.if (. - gText_Rom_574785) > 0x4
	.error "gText_Rom_574785 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574785) < 0x4
	.space 0x4 - (. - gText_Rom_574785)
	.endif
