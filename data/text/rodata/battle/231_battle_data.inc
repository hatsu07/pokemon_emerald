	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CAEEA
gText_Rom_5CAEEA: @ 0x085CAEEA
	.string "ポケモン$"
	.if (. - gText_Rom_5CAEEA) > 0x5
	.error "gText_Rom_5CAEEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEEA) < 0x5
	.space 0x5 - (. - gText_Rom_5CAEEA)
	.endif

