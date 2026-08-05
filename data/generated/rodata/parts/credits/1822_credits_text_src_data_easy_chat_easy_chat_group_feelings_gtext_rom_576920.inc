	@ src/data/easy_chat/easy_chat_group_feelings.h:61 gEasyChatWord_Done (+1 aliases)
	.globl gText_Rom_576920
gText_Rom_576920: @ 0x08576920
	.string "やったー$"
	.if (. - gText_Rom_576920) > 0x5
	.error "gText_Rom_576920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576920) < 0x5
	.space 0x5 - (. - gText_Rom_576920)
	.endif
