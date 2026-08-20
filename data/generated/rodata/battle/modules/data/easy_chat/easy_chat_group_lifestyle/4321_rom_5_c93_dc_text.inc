	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_5C93DC
gText_Rom_5C93DC: @ 0x085C93DC
	.string "メール{EOS}"
	.if (. - gText_Rom_5C93DC) > 0x4
	.error "gText_Rom_5C93DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93DC) < 0x4
	.space 0x4 - (. - gText_Rom_5C93DC)
	.endif

