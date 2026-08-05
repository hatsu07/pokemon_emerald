	@ src/data/easy_chat/easy_chat_group_trainer.h:52 easy_chat_group_trainer_line_52 (+3 aliases)
	.globl gText_Rom_5C8C62
gText_Rom_5C8C62: @ 0x085C8C62
	.string "タマゴ$"
	.if (. - gText_Rom_5C8C62) > 0x4
	.error "gText_Rom_5C8C62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C62) < 0x4
	.space 0x4 - (. - gText_Rom_5C8C62)
	.endif
