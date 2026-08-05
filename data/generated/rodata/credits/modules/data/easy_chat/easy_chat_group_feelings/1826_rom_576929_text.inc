	@ src/data/easy_chat/easy_chat_group_feelings.h:63 gEasyChatWord_Defeated (+1 aliases)
	.globl gText_Rom_576929
gText_Rom_576929: @ 0x08576929
	.string "やられた$"
	.if (. - gText_Rom_576929) > 0x5
	.error "gText_Rom_576929 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576929) < 0x5
	.space 0x5 - (. - gText_Rom_576929)
	.endif
