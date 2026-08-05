	@ src/data/easy_chat/easy_chat_group_feelings.h:65 gEasyChatWord_Great (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576933
gText_Rom_576933: @ 0x08576933
	.string "よかった$"
	.if (. - gText_Rom_576933) != 0x5
	.error "gText_Rom_576933 must retain its original byte length"
	.endif
