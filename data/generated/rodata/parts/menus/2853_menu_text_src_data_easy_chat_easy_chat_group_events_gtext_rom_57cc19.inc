	@ src/data/easy_chat/easy_chat_group_events.h:25 gEasyChatWord_Tower (+1 aliases)
	.globl gText_Rom_57CC19
gText_Rom_57CC19: @ 0x0857CC19
	.string "タワー$"
	.if (. - gText_Rom_57CC19) > 0x4
	.error "gText_Rom_57CC19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CC19) < 0x4
	.space 0x4 - (. - gText_Rom_57CC19)
	.endif
	@ Decoded text from ROM range: offset=0x57CC1D, size=0x38
	.string "けいこくいりぐち$"
	.string "しっぽうけいこく$"
	.string "アスカナいせき$"
	.string "22ばん　ななしま$"
	.string "23ばん　ななしま$"
	.string "24ばん　ななしま$"

