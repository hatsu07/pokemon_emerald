	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_255DCE
gText_Rom_255DCE: @ 0x08255DCE
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_255DCE) > 0x6
	.error "gText_Rom_255DCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_255DCE) < 0x6
	.space 0x6 - (. - gText_Rom_255DCE)
	.endif
	@ Original ROM bytes: 0x255DD4-0x255DDE (0xB bytes)
	.byte 0x91, 0x53, 0x8D, 0x7E, 0x89, 0x6F, 0x5C, 0x7E, 0x2D, 0x00, 0x12
