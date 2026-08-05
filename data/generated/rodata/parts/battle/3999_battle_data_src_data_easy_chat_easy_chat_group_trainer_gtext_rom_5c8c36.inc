	@ src/data/easy_chat/easy_chat_group_trainer.h:160 easy_chat_group_trainer_line_160 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8C36
gText_Rom_5C8C36: @ 0x085C8C36
	.string "エメラルド$"
	.if (. - gText_Rom_5C8C36) != 0x6
	.error "gText_Rom_5C8C36 must retain its original byte length"
	.endif
