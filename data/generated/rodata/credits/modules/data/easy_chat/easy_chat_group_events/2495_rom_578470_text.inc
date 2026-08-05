	@ src/data/easy_chat/easy_chat_group_events.h:15 gEasyChatWord_BattleRoom (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_578470
gText_Rom_578470: @ 0x08578470
	.string "バトルルーム$"
	.if (. - gText_Rom_578470) != 0x7
	.error "gText_Rom_578470 must retain its original byte length"
	.endif
