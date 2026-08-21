	@ src/data/easy_chat/easy_chat_group_lifestyle.h:118 easy_chat_group_lifestyle_line_118 (+1 aliases)
	.globl gText_Rom_579EA3
gText_Rom_579EA3: @ 0x08579EA3
	.string "せいかつ{EOS}"
	.if (. - gText_Rom_579EA3) > 0x5
	.error "gText_Rom_579EA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579EA3) < 0x5
	.space 0x5 - (. - gText_Rom_579EA3)
	.endif
