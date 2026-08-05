	@ src/data/easy_chat/easy_chat_group_feelings.h:62 gEasyChatWord_Danger (+1 aliases)
	.globl gText_Rom_576925
gText_Rom_576925: @ 0x08576925
	.string "やばい$"
	.if (. - gText_Rom_576925) > 0x4
	.error "gText_Rom_576925 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576925) < 0x4
	.space 0x4 - (. - gText_Rom_576925)
	.endif
