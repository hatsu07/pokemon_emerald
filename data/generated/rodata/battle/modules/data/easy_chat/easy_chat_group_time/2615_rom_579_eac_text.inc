	@ src/data/easy_chat/easy_chat_group_time.h:118 easy_chat_group_time_line_118 (+1 aliases)
	.globl gText_Rom_579EAC
gText_Rom_579EAC: @ 0x08579EAC
	.string "じかん$"
	.if (. - gText_Rom_579EAC) > 0x4
	.error "gText_Rom_579EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EAC) < 0x4
	.space 0x4 - (. - gText_Rom_579EAC)
	.endif
