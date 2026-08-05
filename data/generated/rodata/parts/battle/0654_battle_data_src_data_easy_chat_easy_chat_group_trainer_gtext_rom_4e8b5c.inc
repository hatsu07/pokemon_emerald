	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_4E8B5C
gText_Rom_4E8B5C: @ 0x084E8B5C
	.string "ポケモン$"
	.if (. - gText_Rom_4E8B5C) > 0x5
	.error "gText_Rom_4E8B5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B5C) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B5C)
	.endif
