	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_255F1A
gText_Rom_255F1A: @ 0x08255F1A
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255F1A) > 0x6
	.error "gText_Rom_255F1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255F1A) < 0x6
	.space 0x6 - (. - gText_Rom_255F1A)
	.endif
	@ Original ROM bytes: 0x255F20-0x255F24 (0x5 bytes)
	.byte 0x78, 0x9A, 0x7E, 0x2D, 0x00
