	@ src/data/easy_chat/easy_chat_group_feelings.h:59 gEasyChatWord_Rare (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576917
gText_Rom_576917: @ 0x08576917
	.string "めずらしい$"
	.if (. - gText_Rom_576917) != 0x6
	.error "gText_Rom_576917 must retain its original byte length"
	.endif
