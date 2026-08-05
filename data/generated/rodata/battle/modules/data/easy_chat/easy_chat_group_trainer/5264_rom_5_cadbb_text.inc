	@ src/data/easy_chat/easy_chat_group_trainer.h:82 easy_chat_group_trainer_line_82 (+2 aliases)
	.globl gText_Rom_5CADBB
gText_Rom_5CADBB: @ 0x085CADBB
	.string "ポケナビ$"
	.if (. - gText_Rom_5CADBB) > 0x5
	.error "gText_Rom_5CADBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADBB) < 0x5
	.space 0x5 - (. - gText_Rom_5CADBB)
	.endif
	@ Replaced baserom.gba range: offset=0x5CADC0, size=0x6
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF
