	@ src/data/easy_chat/easy_chat_group_events.h:13 gEasyChatWord_BattleTower (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCBA8
gText_Rom_5CCBA8: @ 0x085CCBA8
	.string "バトルタワー$"
	.if (. - gText_Rom_5CCBA8) != 0x7
	.error "gText_Rom_5CCBA8 must retain its original byte length"
	.endif
