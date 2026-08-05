	@ src/data/easy_chat/easy_chat_group_events.h:24 gEasyChatWord_Direct (+1 aliases)
	.globl gText_Rom_57849E
gText_Rom_57849E: @ 0x0857849E
	.string "ダイレクト$"
	.if (. - gText_Rom_57849E) > 0x6
	.error "gText_Rom_57849E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57849E) < 0x6
	.space 0x6 - (. - gText_Rom_57849E)
	.endif
