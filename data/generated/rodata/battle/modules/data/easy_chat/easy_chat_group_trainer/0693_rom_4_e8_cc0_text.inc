	@ src/data/easy_chat/easy_chat_group_trainer.h:100 easy_chat_group_trainer_line_100 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_4E8CC0
gText_Rom_4E8CC0: @ 0x084E8CC0
	.string "ポケモンずかん{EOS}"
	.if (. - gText_Rom_4E8CC0) != 0x8
	.error "gText_Rom_4E8CC0 must retain its original byte length"
	.endif
