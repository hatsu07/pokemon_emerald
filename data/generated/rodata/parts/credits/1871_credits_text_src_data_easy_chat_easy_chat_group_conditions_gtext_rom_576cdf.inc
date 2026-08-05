	@ src/data/easy_chat/easy_chat_group_conditions.h:130 easy_chat_group_conditions_line_130
	.globl gText_Rom_576CDF
gText_Rom_576CDF: @ 0x08576CDF
	.string "おしい$"
	.if (. - gText_Rom_576CDF) > 0x4
	.error "gText_Rom_576CDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CDF) < 0x4
	.space 0x4 - (. - gText_Rom_576CDF)
	.endif
