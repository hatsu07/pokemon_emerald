	@ src/data/easy_chat/easy_chat_group_conditions.h:154 easy_chat_group_conditions_line_154
	.globl gText_Rom_576CF5
gText_Rom_576CF5: @ 0x08576CF5
	.string "かんぺき$"
	.if (. - gText_Rom_576CF5) > 0x5
	.error "gText_Rom_576CF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CF5) < 0x5
	.space 0x5 - (. - gText_Rom_576CF5)
	.endif
