	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_5C8BEE
gText_Rom_5C8BEE: @ 0x085C8BEE
	.string "します{EOS}"
	.if (. - gText_Rom_5C8BEE) > 0x4
	.error "gText_Rom_5C8BEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8BEE) < 0x4
	.space 0x4 - (. - gText_Rom_5C8BEE)
	.endif

