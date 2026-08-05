	@ src/data/easy_chat/easy_chat_group_actions.h:94 easy_chat_group_actions_line_94
	.globl gText_Rom_577129
gText_Rom_577129: @ 0x08577129
	.string "おしえ$"
	.if (. - gText_Rom_577129) > 0x4
	.error "gText_Rom_577129 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577129) < 0x4
	.space 0x4 - (. - gText_Rom_577129)
	.endif
