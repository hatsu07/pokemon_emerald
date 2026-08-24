	@ src/data/easy_chat/easy_chat_group_events.h:25 gEasyChatWord_Tower (+1 aliases)
	.globl gEasyChatWord_Tower_Copy_Menus
gEasyChatWord_Tower_Copy_Menus: @ 0x0857CC19
	.string "タワー{EOS}"
	.if (. - gEasyChatWord_Tower_Copy_Menus) > 0x4
	.error "gEasyChatWord_Tower_Copy_Menus may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Tower_Copy_Menus) < 0x4
	.space 0x4 - (. - gEasyChatWord_Tower_Copy_Menus)
	.endif
	@ Decoded text from ROM range: offset=0x57CC1D, size=0x38
	.string "けいこくいりぐち{EOS}"
	.string "しっぽうけいこく{EOS}"
	.string "アスカナいせき{EOS}"
	.string "22ばん　ななしま{EOS}"
	.string "23ばん　ななしま{EOS}"
	.string "24ばん　ななしま{EOS}"

