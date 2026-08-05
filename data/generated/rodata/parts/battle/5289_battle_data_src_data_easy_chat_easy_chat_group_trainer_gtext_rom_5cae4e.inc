	@ src/data/easy_chat/easy_chat_group_trainer.h:46 easy_chat_group_trainer_line_46
	.globl gText_Rom_5CAE4E
gText_Rom_5CAE4E: @ 0x085CAE4E
	.string "センター$"
	.if (. - gText_Rom_5CAE4E) > 0x5
	.error "gText_Rom_5CAE4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE4E) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE4E)
	.endif

