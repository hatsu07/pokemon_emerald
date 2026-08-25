.if .L__inc_fragment_select_d66fc33d1aac == 1
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

.elseif .L__inc_fragment_select_d66fc33d1aac == 2
	@ src/data/easy_chat/easy_chat_group_events.h:4 gEasyChatWord_Berry (+4 aliases)
	.globl gEasyChatWord_Berry_Copy_Menus
gEasyChatWord_Berry_Copy_Menus: @ 0x085CACE8
	.string "きのみ{EOS}"
	.if (. - gEasyChatWord_Berry_Copy_Menus) > 0x4
	.error "gEasyChatWord_Berry_Copy_Menus may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Berry_Copy_Menus) < 0x4
	.space 0x4 - (. - gEasyChatWord_Berry_Copy_Menus)
	.endif

.endif
