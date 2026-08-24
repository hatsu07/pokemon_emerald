	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gEasyChatWord_Evolution_Copy_Menus
gEasyChatWord_Evolution_Copy_Menus: @ 0x085CACA0
	.string "ノーマル{EOS}"
	.if (. - gEasyChatWord_Evolution_Copy_Menus) > 0x5
	.error "gEasyChatWord_Evolution_Copy_Menus may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Evolution_Copy_Menus) < 0x5
	.space 0x5 - (. - gEasyChatWord_Evolution_Copy_Menus)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:8 gEasyChatWord_Super (+3 aliases)
	.globl gEasyChatWord_Super_Copy_Menus
gEasyChatWord_Super_Copy_Menus: @ 0x085CACA5
	.string "スーパー{EOS}"
	.if (. - gEasyChatWord_Super_Copy_Menus) > 0x5
	.error "gEasyChatWord_Super_Copy_Menus may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Super_Copy_Menus) < 0x5
	.space 0x5 - (. - gEasyChatWord_Super_Copy_Menus)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:12 gEasyChatWord_Hyper (+3 aliases)
	.globl gEasyChatWord_Hyper_Copy_Menus
gEasyChatWord_Hyper_Copy_Menus: @ 0x085CACAA
	.string "ハイパー{EOS}"
	.if (. - gEasyChatWord_Hyper_Copy_Menus) > 0x5
	.error "gEasyChatWord_Hyper_Copy_Menus may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Hyper_Copy_Menus) < 0x5
	.space 0x5 - (. - gEasyChatWord_Hyper_Copy_Menus)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:20 gEasyChatWord_Master (+3 aliases)
	.globl gEasyChatWord_Master_Copy_Menus
gEasyChatWord_Master_Copy_Menus: @ 0x085CACAF
	.string "マスター{EOS}"
	.if (. - gEasyChatWord_Master_Copy_Menus) > 0x5
	.error "gEasyChatWord_Master_Copy_Menus may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Master_Copy_Menus) < 0x5
	.space 0x5 - (. - gEasyChatWord_Master_Copy_Menus)
	.endif
