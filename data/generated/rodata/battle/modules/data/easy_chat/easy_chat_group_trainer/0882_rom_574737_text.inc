	@ src/data/easy_chat/easy_chat_group_trainer.h:40 easy_chat_group_trainer_line_40
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574737
gText_Rom_574737: @ 0x08574737
	.string "せいかく$"
	.if (. - gText_Rom_574737) != 0x5
	.error "gText_Rom_574737 must retain its original byte length"
	.endif
