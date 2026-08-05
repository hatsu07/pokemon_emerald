	@ src/data/easy_chat/easy_chat_group_trainer.h:160 easy_chat_group_trainer_line_160 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57479A
gText_Rom_57479A: @ 0x0857479A
	.string "エメラルド$"
	.if (. - gText_Rom_57479A) != 0x6
	.error "gText_Rom_57479A must retain its original byte length"
	.endif
