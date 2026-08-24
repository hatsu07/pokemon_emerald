	@ src/data/easy_chat/easy_chat_group_events.h:2 gEasyChatWord_Events (+3 aliases)
	.globl gEasyChatWord_Events_Copy_Battle
gEasyChatWord_Events_Copy_Battle: @ 0x08579EBB
	.string "イベント{EOS}"
	.if (. - gEasyChatWord_Events_Copy_Battle) > 0x5
	.error "gEasyChatWord_Events_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Events_Copy_Battle) < 0x5
	.space 0x5 - (. - gEasyChatWord_Events_Copy_Battle)
	.endif
