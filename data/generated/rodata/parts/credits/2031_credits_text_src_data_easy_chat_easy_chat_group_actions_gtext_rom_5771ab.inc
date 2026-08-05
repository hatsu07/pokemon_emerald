	@ src/data/easy_chat/easy_chat_group_actions.h:286 easy_chat_group_actions_line_286
	.globl gText_Rom_5771AB
gText_Rom_5771AB: @ 0x085771AB
	.string "でない$"
	.if (. - gText_Rom_5771AB) > 0x4
	.error "gText_Rom_5771AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771AB) < 0x4
	.space 0x4 - (. - gText_Rom_5771AB)
	.endif
