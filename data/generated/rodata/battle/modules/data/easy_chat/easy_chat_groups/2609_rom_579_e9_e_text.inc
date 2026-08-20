	@ src/data/easy_chat/easy_chat_groups.h:106 easy_chat_groups_line_106
	.globl gText_Rom_579E9E
gText_Rom_579E9E: @ 0x08579E9E
	.string "こうどう{EOS}"
	.if (. - gText_Rom_579E9E) > 0x5
	.error "gText_Rom_579E9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E9E) < 0x5
	.space 0x5 - (. - gText_Rom_579E9E)
	.endif
