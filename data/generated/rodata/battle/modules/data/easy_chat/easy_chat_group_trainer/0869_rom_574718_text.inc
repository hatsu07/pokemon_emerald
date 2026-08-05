	@ src/data/easy_chat/easy_chat_group_trainer.h:4 easy_chat_group_trainer_line_4
	.globl gText_Rom_574718
gText_Rom_574718: @ 0x08574718
	.string "きみにきめた!$"
	.if (. - gText_Rom_574718) > 0x8
	.error "gText_Rom_574718 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574718) < 0x8
	.space 0x8 - (. - gText_Rom_574718)
	.endif
