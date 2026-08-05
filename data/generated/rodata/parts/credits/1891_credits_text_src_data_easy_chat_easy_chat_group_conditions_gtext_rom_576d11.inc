	@ src/data/easy_chat/easy_chat_group_conditions.h:190 easy_chat_group_conditions_line_190
	.globl gText_Rom_576D11
gText_Rom_576D11: @ 0x08576D11
	.string "さわやか$"
	.if (. - gText_Rom_576D11) > 0x5
	.error "gText_Rom_576D11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D11) < 0x5
	.space 0x5 - (. - gText_Rom_576D11)
	.endif
