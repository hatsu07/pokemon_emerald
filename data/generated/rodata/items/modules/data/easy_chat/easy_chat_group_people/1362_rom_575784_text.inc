	@ src/data/easy_chat/easy_chat_group_people.h:124 easy_chat_group_people_line_124
	.globl gText_Rom_575784
gText_Rom_575784: @ 0x08575784
	.string "おれさま$"
	.if (. - gText_Rom_575784) > 0x5
	.error "gText_Rom_575784 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575784) < 0x5
	.space 0x5 - (. - gText_Rom_575784)
	.endif
