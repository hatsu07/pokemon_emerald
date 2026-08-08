	@ src/data/easy_chat/easy_chat_groups.h:176 easy_chat_groups_line_176
	.globl gText_Rom_579ECF
gText_Rom_579ECF: @ 0x08579ECF
	.string "ポケモン2$"
	.if (. - gText_Rom_579ECF) > 0x6
	.error "gText_Rom_579ECF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579ECF) < 0x6
	.space 0x6 - (. - gText_Rom_579ECF)
	.endif
	.space 0x3, 0x00
