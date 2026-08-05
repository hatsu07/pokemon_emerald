	@ src/data/easy_chat/easy_chat_group_hobbies.h:34 easy_chat_group_hobbies_line_34 (+1 aliases)
	.globl gText_Rom_5778D0
gText_Rom_5778D0: @ 0x085778D0
	.string "おしゃべり$"
	.if (. - gText_Rom_5778D0) > 0x6
	.error "gText_Rom_5778D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778D0) < 0x6
	.space 0x6 - (. - gText_Rom_5778D0)
	.endif
