	@ src/data/easy_chat/easy_chat_group_feelings.h:34 gEasyChatWord_Incredible (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576898
gText_Rom_576898: @ 0x08576898
	.string "しんじられない$"
	.if (. - gText_Rom_576898) != 0x8
	.error "gText_Rom_576898 must retain its original byte length"
	.endif
