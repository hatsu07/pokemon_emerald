	@ src/data/easy_chat/easy_chat_group_feelings.h:7 gEasyChatWord_Happiness (+1 aliases)
	.globl gText_Rom_57680F
gText_Rom_57680F: @ 0x0857680F
	.string "うれしさ$"
	.if (. - gText_Rom_57680F) > 0x5
	.error "gText_Rom_57680F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57680F) < 0x5
	.space 0x5 - (. - gText_Rom_57680F)
	.endif
