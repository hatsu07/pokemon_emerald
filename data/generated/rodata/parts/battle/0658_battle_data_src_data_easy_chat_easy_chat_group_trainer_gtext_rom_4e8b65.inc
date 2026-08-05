	@ src/data/easy_chat/easy_chat_group_trainer.h:82 easy_chat_group_trainer_line_82 (+2 aliases)
	.globl gText_Rom_4E8B65
gText_Rom_4E8B65: @ 0x084E8B65
	.string "ポケナビ$"
	.if (. - gText_Rom_4E8B65) > 0x5
	.error "gText_Rom_4E8B65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B65) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B65)
	.endif
	@ Replaced baserom.gba range: offset=0x4E8B6A, size=0x3
	.byte 0xFD, 0x01, 0xFF
