	@ src/data/easy_chat/easy_chat_group_events.h:13 gEasyChatWord_BattleTower (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_578461
gText_Rom_578461: @ 0x08578461
	.string "バトルタワー$"
	.if (. - gText_Rom_578461) != 0x7
	.error "gText_Rom_578461 must retain its original byte length"
	.endif
