	@ src/data/easy_chat/easy_chat_group_trainer.h:22 easy_chat_group_trainer_line_22 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574729
gText_Rom_574729: @ 0x08574729
	.string "サファイア$"
	.if (. - gText_Rom_574729) != 0x6
	.error "gText_Rom_574729 must retain its original byte length"
	.endif
