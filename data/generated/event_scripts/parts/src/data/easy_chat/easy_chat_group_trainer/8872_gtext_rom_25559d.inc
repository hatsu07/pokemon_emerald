	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_25559D
gText_Rom_25559D: @ 0x0825559D
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_25559D) > 0x6
	.error "gText_Rom_25559D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25559D) < 0x6
	.space 0x6 - (. - gText_Rom_25559D)
	.endif
	@ Original ROM bytes: 0x2555A3-0x2555A8 (0x6 bytes)
	.byte 0x9F, 0x59, 0x73, 0x7E, 0x2D, 0x00
