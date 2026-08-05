	@ src/data/easy_chat/easy_chat_group_events.h:5 gEasyChatWord_Contest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C200
gText_Rom_24C200: @ 0x0824C200
	.string "コンテスト$"
	.if (. - gText_Rom_24C200) != 0x6
	.error "gText_Rom_24C200 must retain its original byte length"
	.endif
