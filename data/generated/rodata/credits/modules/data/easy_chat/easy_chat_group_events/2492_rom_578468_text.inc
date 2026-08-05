	@ src/data/easy_chat/easy_chat_group_events.h:14 gEasyChatWord_Leaders (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_578468
gText_Rom_578468: @ 0x08578468
	.string "バトルリーダー$"
	.if (. - gText_Rom_578468) != 0x8
	.error "gText_Rom_578468 must retain its original byte length"
	.endif
