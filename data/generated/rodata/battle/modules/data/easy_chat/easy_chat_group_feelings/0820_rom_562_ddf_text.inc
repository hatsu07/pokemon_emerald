	@ src/data/easy_chat/easy_chat_group_feelings.h:59 gEasyChatWord_Rare (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_562DDF
gText_Rom_562DDF: @ 0x08562DDF
	.string "めずらしい$"
	.if (. - gText_Rom_562DDF) != 0x6
	.error "gText_Rom_562DDF must retain its original byte length"
	.endif
