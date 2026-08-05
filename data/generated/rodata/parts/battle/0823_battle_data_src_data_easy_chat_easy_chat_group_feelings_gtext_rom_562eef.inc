	@ src/data/easy_chat/easy_chat_group_feelings.h:59 gEasyChatWord_Rare (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_562EEF
gText_Rom_562EEF: @ 0x08562EEF
	.string "めずらしい$"
	.if (. - gText_Rom_562EEF) != 0x6
	.error "gText_Rom_562EEF must retain its original byte length"
	.endif
