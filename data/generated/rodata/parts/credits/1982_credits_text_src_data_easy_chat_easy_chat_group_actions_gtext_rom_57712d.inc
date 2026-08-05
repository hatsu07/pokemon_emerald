	@ src/data/easy_chat/easy_chat_group_actions.h:100 easy_chat_group_actions_line_100
	.globl gText_Rom_57712D
gText_Rom_57712D: @ 0x0857712D
	.string "おしえて$"
	.if (. - gText_Rom_57712D) > 0x5
	.error "gText_Rom_57712D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57712D) < 0x5
	.space 0x5 - (. - gText_Rom_57712D)
	.endif
