	@ src/data/easy_chat/easy_chat_group_feelings.h:36 gEasyChatWord_Dislikes (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768A3
gText_Rom_5768A3: @ 0x085768A3
	.string "だいきらい$"
	.if (. - gText_Rom_5768A3) != 0x6
	.error "gText_Rom_5768A3 must retain its original byte length"
	.endif
