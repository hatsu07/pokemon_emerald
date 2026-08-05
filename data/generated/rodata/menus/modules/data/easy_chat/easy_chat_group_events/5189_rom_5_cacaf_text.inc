	@ src/data/easy_chat/easy_chat_group_events.h:20 gEasyChatWord_Master (+3 aliases)
	.globl gText_Rom_5CACAF
gText_Rom_5CACAF: @ 0x085CACAF
	.string "マスター$"
	.if (. - gText_Rom_5CACAF) > 0x5
	.error "gText_Rom_5CACAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACAF) < 0x5
	.space 0x5 - (. - gText_Rom_5CACAF)
	.endif
