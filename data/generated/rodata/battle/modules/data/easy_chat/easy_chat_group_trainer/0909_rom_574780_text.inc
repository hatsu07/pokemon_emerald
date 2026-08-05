	@ src/data/easy_chat/easy_chat_group_trainer.h:124 easy_chat_group_trainer_line_124 (+2 aliases)
	.globl gText_Rom_574780
gText_Rom_574780: @ 0x08574780
	.string "グリーン$"
	.if (. - gText_Rom_574780) > 0x5
	.error "gText_Rom_574780 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574780) < 0x5
	.space 0x5 - (. - gText_Rom_574780)
	.endif
