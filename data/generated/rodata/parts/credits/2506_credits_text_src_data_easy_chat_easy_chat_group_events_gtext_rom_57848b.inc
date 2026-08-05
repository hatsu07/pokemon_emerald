	@ src/data/easy_chat/easy_chat_group_events.h:20 gEasyChatWord_Master (+3 aliases)
	.globl gText_Rom_57848B
gText_Rom_57848B: @ 0x0857848B
	.string "マスター$"
	.if (. - gText_Rom_57848B) > 0x5
	.error "gText_Rom_57848B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57848B) < 0x5
	.space 0x5 - (. - gText_Rom_57848B)
	.endif

