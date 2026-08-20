	@ src/data/easy_chat/easy_chat_group_conditions.h:100 easy_chat_group_conditions_line_100
	.globl gText_Rom_5C9853
gText_Rom_5C9853: @ 0x085C9853
	.string "うまい{EOS}"
	.if (. - gText_Rom_5C9853) > 0x4
	.error "gText_Rom_5C9853 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9853) < 0x4
	.space 0x4 - (. - gText_Rom_5C9853)
	.endif
	@ Decoded text from ROM range: offset=0x5C9857, size=0x5
	.string "こまかさ{EOS}"
