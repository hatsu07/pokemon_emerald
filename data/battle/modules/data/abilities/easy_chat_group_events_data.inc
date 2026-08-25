	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gEasyChatWord_Evolution_Copy_Battle
gEasyChatWord_Evolution_Copy_Battle: @ 0x08574A5E
	.string "ノーマル{EOS}"
	.if (. - gEasyChatWord_Evolution_Copy_Battle) > 0x5
	.error "gEasyChatWord_Evolution_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Evolution_Copy_Battle) < 0x5
	.space 0x5 - (. - gEasyChatWord_Evolution_Copy_Battle)
	.endif
