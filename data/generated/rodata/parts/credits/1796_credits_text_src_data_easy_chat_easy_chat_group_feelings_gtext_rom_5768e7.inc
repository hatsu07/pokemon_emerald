	@ src/data/easy_chat/easy_chat_group_feelings.h:49 gEasyChatWord_Terrible (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768E7
gText_Rom_5768E7: @ 0x085768E7
	.string "つらかった$"
	.if (. - gText_Rom_5768E7) != 0x6
	.error "gText_Rom_5768E7 must retain its original byte length"
	.endif
