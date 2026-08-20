	@ src/data/easy_chat/easy_chat_group_trainer.h:100 easy_chat_group_trainer_line_100 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8DE4
gText_Rom_5C8DE4: @ 0x085C8DE4
	.string "ポケモンずかん{EOS}"
	.if (. - gText_Rom_5C8DE4) != 0x8
	.error "gText_Rom_5C8DE4 must retain its original byte length"
	.endif
