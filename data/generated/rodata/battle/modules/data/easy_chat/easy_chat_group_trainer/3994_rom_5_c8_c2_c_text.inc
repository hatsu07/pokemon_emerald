	@ src/data/easy_chat/easy_chat_group_trainer.h:22 easy_chat_group_trainer_line_22 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8C2C
gText_Rom_5C8C2C: @ 0x085C8C2C
	.string "サファイア$"
	.if (. - gText_Rom_5C8C2C) != 0x6
	.error "gText_Rom_5C8C2C must retain its original byte length"
	.endif
