	@ src/data/easy_chat/easy_chat_group_conditions.h:10 easy_chat_group_conditions_line_10
	.globl gText_Rom_5CA50E
gText_Rom_5CA50E: @ 0x085CA50E
	.string "あった{EOS}"
	.if (. - gText_Rom_5CA50E) > 0x4
	.error "gText_Rom_5CA50E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA50E) < 0x4
	.space 0x4 - (. - gText_Rom_5CA50E)
	.endif
