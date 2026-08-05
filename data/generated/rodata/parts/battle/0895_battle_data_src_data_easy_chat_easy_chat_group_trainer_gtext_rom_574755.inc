	@ src/data/easy_chat/easy_chat_group_trainer.h:76 easy_chat_group_trainer_line_76
	.globl gText_Rom_574755
gText_Rom_574755: @ 0x08574755
	.string "バージョン$"
	.if (. - gText_Rom_574755) > 0x6
	.error "gText_Rom_574755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574755) < 0x6
	.space 0x6 - (. - gText_Rom_574755)
	.endif
