	@ src/data/easy_chat/easy_chat_group_feelings.h:52 gEasyChatWord_Drink (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768F7
gText_Rom_5768F7: @ 0x085768F7
	.string "のみたい$"
	.if (. - gText_Rom_5768F7) != 0x5
	.error "gText_Rom_5768F7 must retain its original byte length"
	.endif
