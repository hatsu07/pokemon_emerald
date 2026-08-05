	@ src/data/easy_chat/easy_chat_group_battle.h:52 easy_chat_group_battle_line_52
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_575071
gText_Rom_575071: @ 0x08575071
	.string "かったら$"
	.if (. - gText_Rom_575071) != 0x5
	.error "gText_Rom_575071 must retain its original byte length"
	.endif
