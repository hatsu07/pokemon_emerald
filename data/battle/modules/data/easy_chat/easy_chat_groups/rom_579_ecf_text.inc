	@ src/data/easy_chat/easy_chat_group_lifestyle.h:64 easy_chat_group_lifestyle_line_64
	.globl gText_Rom_579ECB
gText_Rom_579ECB: @ 0x08579ECB
	.string "ことば{EOS}"
	.if (. - gText_Rom_579ECB) > 0x4
	.error "gText_Rom_579ECB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579ECB) < 0x4
	.space 0x4 - (. - gText_Rom_579ECB)
	.endif
	@ src/data/easy_chat/easy_chat_groups.h:176 easy_chat_groups_line_176
	.globl gText_Rom_579ECF
gText_Rom_579ECF: @ 0x08579ECF
	.string "ポケモン2{EOS}"
	.if (. - gText_Rom_579ECF) > 0x6
	.error "gText_Rom_579ECF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579ECF) < 0x6
	.space 0x6 - (. - gText_Rom_579ECF)
	.endif
	.space 0x3, 0x00
