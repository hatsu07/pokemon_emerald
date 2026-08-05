	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_566DFA
gText_Rom_566DFA: @ 0x08566DFA
	.string "………$"
	.if (. - gText_Rom_566DFA) > 0x4
	.error "gText_Rom_566DFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_566DFA) < 0x4
	.space 0x4 - (. - gText_Rom_566DFA)
	.endif
	.space 0x2, 0x00
