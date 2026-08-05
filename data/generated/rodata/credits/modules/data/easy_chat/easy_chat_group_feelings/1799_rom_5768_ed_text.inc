	@ src/data/easy_chat/easy_chat_group_feelings.h:50 gEasyChatWord_Should (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768ED
gText_Rom_5768ED: @ 0x085768ED
	.string "どうしよう$"
	.if (. - gText_Rom_5768ED) != 0x6
	.error "gText_Rom_5768ED must retain its original byte length"
	.endif
