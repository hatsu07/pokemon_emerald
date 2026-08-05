	@ src/data/easy_chat/easy_chat_group_conditions.h:124 easy_chat_group_conditions_line_124
	.globl gText_Rom_257C35
gText_Rom_257C35: @ 0x08257C35
	.string "おくれ"
	.byte EOS
	.if (. - gText_Rom_257C35) > 0x4
	.error "gText_Rom_257C35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257C35) < 0x4
	.space 0x4 - (. - gText_Rom_257C35)
	.endif
