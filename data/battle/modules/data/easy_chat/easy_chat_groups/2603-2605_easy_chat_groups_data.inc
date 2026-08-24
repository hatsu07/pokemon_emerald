	@ src/data/easy_chat/easy_chat_group_lifestyle.h:34 easy_chat_group_lifestyle_line_34 (+1 aliases)
	.globl gText_Rom_579E8C
gText_Rom_579E8C: @ 0x08579E8C
	.string "かいわ{EOS}"
	.if (. - gText_Rom_579E8C) > 0x4
	.error "gText_Rom_579E8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E8C) < 0x4
	.space 0x4 - (. - gText_Rom_579E8C)
	.endif
	@ src/data/easy_chat/easy_chat_groups.h:85 easy_chat_groups_line_85
	.globl gText_Rom_579E90
gText_Rom_579E90: @ 0x08579E90
	.string "むすび{EOS}"
	.if (. - gText_Rom_579E90) > 0x4
	.error "gText_Rom_579E90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E90) < 0x4
	.space 0x4 - (. - gText_Rom_579E90)
	.endif

	@ src/data/easy_chat/easy_chat_groups.h:92 easy_chat_groups_line_92
	.globl gText_Rom_579E94
gText_Rom_579E94: @ 0x08579E94
	.string "きもち{EOS}"
	.if (. - gText_Rom_579E94) > 0x4
	.error "gText_Rom_579E94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E94) < 0x4
	.space 0x4 - (. - gText_Rom_579E94)
	.endif
