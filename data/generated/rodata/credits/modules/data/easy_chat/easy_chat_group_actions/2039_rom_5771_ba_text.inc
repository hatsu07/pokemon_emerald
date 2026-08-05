	@ src/data/easy_chat/easy_chat_group_actions.h:310 easy_chat_group_actions_line_310
	.globl gText_Rom_5771BA
gText_Rom_5771BA: @ 0x085771BA
	.string "ねられ$"
	.if (. - gText_Rom_5771BA) > 0x4
	.error "gText_Rom_5771BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771BA) < 0x4
	.space 0x4 - (. - gText_Rom_5771BA)
	.endif
	@ Decoded text from ROM range: offset=0x5771BE, size=0x3
	.string "ねる$"
