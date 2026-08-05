	@ src/data/easy_chat/easy_chat_group_actions.h:22 easy_chat_group_actions_line_22
	.globl gText_Rom_5770FC
gText_Rom_5770FC: @ 0x085770FC
	.string "あせる$"
	.if (. - gText_Rom_5770FC) > 0x4
	.error "gText_Rom_5770FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5770FC) < 0x4
	.space 0x4 - (. - gText_Rom_5770FC)
	.endif
