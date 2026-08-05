	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_2559E9
gText_Rom_2559E9: @ 0x082559E9
	.string "トレーナー"
	.byte EOS
	.if (. - gText_Rom_2559E9) > 0x6
	.error "gText_Rom_2559E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2559E9) < 0x6
	.space 0x6 - (. - gText_Rom_2559E9)
	.endif
	@ Original ROM bytes: 0x2559EF-0x2559F4 (0x6 bytes)
	.byte 0x1A, 0x18, 0x29, 0x2D, 0x00, 0x12
