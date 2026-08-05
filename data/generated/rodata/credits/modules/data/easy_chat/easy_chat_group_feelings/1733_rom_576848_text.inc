	@ src/data/easy_chat/easy_chat_group_feelings.h:18 gEasyChatWord_Hears (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576848
gText_Rom_576848: @ 0x08576848
	.string "きがしない$"
	.if (. - gText_Rom_576848) != 0x6
	.error "gText_Rom_576848 must retain its original byte length"
	.endif
