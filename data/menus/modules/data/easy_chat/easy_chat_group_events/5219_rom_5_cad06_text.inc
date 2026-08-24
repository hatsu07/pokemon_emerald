	@ src/data/easy_chat/easy_chat_group_events.h:10 gEasyChatWord_HallOfFame (+2 aliases)
	.globl gEasyChatWord_HallOfFame_Copy_Menus
gEasyChatWord_HallOfFame_Copy_Menus: @ 0x085CAD06
	.string "でんどういり{EOS}"
	.if (. - gEasyChatWord_HallOfFame_Copy_Menus) > 0x7
	.error "gEasyChatWord_HallOfFame_Copy_Menus may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_HallOfFame_Copy_Menus) < 0x7
	.space 0x7 - (. - gEasyChatWord_HallOfFame_Copy_Menus)
	.endif
