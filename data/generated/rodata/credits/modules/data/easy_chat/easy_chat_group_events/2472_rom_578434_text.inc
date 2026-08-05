	@ src/data/easy_chat/easy_chat_group_events.h:5 gEasyChatWord_Contest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_578434
gText_Rom_578434: @ 0x08578434
	.string "コンテスト$"
	.if (. - gText_Rom_578434) != 0x6
	.error "gText_Rom_578434 must retain its original byte length"
	.endif
