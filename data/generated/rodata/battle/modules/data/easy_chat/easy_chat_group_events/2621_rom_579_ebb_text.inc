	@ src/data/easy_chat/easy_chat_group_events.h:2 gEasyChatWord_Events (+3 aliases)
	.globl gText_Rom_579EBB
gText_Rom_579EBB: @ 0x08579EBB
	.string "イベント{EOS}"
	.if (. - gText_Rom_579EBB) > 0x5
	.error "gText_Rom_579EBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EBB) < 0x5
	.space 0x5 - (. - gText_Rom_579EBB)
	.endif
