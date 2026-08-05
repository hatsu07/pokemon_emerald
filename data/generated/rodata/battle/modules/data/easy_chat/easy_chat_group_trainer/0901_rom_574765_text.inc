	@ src/data/easy_chat/easy_chat_group_trainer.h:94 easy_chat_group_trainer_line_94
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574765
gText_Rom_574765: @ 0x08574765
	.string "ポケモンゲット$"
	.if (. - gText_Rom_574765) != 0x8
	.error "gText_Rom_574765 must retain its original byte length"
	.endif
