	@ src/data/easy_chat/easy_chat_group_trainer.h:16 easy_chat_group_trainer_line_16 (+2 aliases)
	.globl gText_Rom_574724
gText_Rom_574724: @ 0x08574724
	.string "こうかん$"
	.if (. - gText_Rom_574724) > 0x5
	.error "gText_Rom_574724 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574724) < 0x5
	.space 0x5 - (. - gText_Rom_574724)
	.endif
