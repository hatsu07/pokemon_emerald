	@ src/data/easy_chat/easy_chat_group_events.h:22 gEasyChatWord_Ribbon (+1 aliases)
	.globl gEasyChatWord_Ribbon_Copy_Battle
gEasyChatWord_Ribbon_Copy_Battle: @ 0x085CB7D2
	.string "リボン{EOS}"
	.if (. - gEasyChatWord_Ribbon_Copy_Battle) > 0x4
	.error "gEasyChatWord_Ribbon_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Ribbon_Copy_Battle) < 0x4
	.space 0x4 - (. - gEasyChatWord_Ribbon_Copy_Battle)
	.endif
