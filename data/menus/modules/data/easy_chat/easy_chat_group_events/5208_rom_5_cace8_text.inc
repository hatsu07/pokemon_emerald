	@ src/data/easy_chat/easy_chat_group_events.h:4 gEasyChatWord_Berry (+4 aliases)
	.globl gText_Rom_5CACE8
gText_Rom_5CACE8: @ 0x085CACE8
	.string "きのみ{EOS}"
	.if (. - gText_Rom_5CACE8) > 0x4
	.error "gText_Rom_5CACE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACE8) < 0x4
	.space 0x4 - (. - gText_Rom_5CACE8)
	.endif
