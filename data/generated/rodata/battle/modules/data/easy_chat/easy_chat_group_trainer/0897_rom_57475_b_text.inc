	@ src/data/easy_chat/easy_chat_group_trainer.h:82 easy_chat_group_trainer_line_82 (+2 aliases)
	.globl gText_Rom_57475B
gText_Rom_57475B: @ 0x0857475B
	.string "ポケナビ$"
	.if (. - gText_Rom_57475B) > 0x5
	.error "gText_Rom_57475B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57475B) < 0x5
	.space 0x5 - (. - gText_Rom_57475B)
	.endif
