	@ src/data/easy_chat/easy_chat_group_events.h:2 gEasyChatWord_Events (+3 aliases)
	.globl gEasyChatWord_Events_Copy_Pokemon
gEasyChatWord_Events_Copy_Pokemon: @ 0x085CA3DA
	.string "イベント{EOS}"
	.if (. - gEasyChatWord_Events_Copy_Pokemon) > 0x5
	.error "gEasyChatWord_Events_Copy_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Events_Copy_Pokemon) < 0x5
	.space 0x5 - (. - gEasyChatWord_Events_Copy_Pokemon)
	.endif
