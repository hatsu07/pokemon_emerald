	@ src/data/easy_chat/easy_chat_group_trainer.h:34 easy_chat_group_trainer_line_34 (+2 aliases)
	.globl gText_Rom_4E8B58
gText_Rom_4E8B58: @ 0x084E8B58
	.string "ずかん$"
	.if (. - gText_Rom_4E8B58) > 0x4
	.error "gText_Rom_4E8B58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B58) < 0x4
	.space 0x4 - (. - gText_Rom_4E8B58)
	.endif
