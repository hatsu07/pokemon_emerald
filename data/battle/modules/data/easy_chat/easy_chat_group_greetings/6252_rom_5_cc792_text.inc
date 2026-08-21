	@ src/data/easy_chat/easy_chat_group_greetings.h:106 easy_chat_group_greetings_line_106 (+1 aliases)
	.globl gText_Rom_5CC792
gText_Rom_5CC792: @ 0x085CC792
	.string "サンキュー{EOS}"
	.if (. - gText_Rom_5CC792) > 0x6
	.error "gText_Rom_5CC792 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC792) < 0x6
	.space 0x6 - (. - gText_Rom_5CC792)
	.endif
