	@ src/data/easy_chat/easy_chat_group_feelings.h:5 gEasyChatWord_Giddy (+1 aliases)
	.globl gText_Rom_576805
gText_Rom_576805: @ 0x08576805
	.string "うかれて$"
	.if (. - gText_Rom_576805) > 0x5
	.error "gText_Rom_576805 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576805) < 0x5
	.space 0x5 - (. - gText_Rom_576805)
	.endif
