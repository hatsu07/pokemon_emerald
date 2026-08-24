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
