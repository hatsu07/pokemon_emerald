	@ src/data/easy_chat/easy_chat_group_people.h:256 easy_chat_group_people_line_256
	.globl gText_Rom_5757E1
gText_Rom_5757E1: @ 0x085757E1
	.string "じぶんを$"
	.if (. - gText_Rom_5757E1) > 0x5
	.error "gText_Rom_5757E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757E1) < 0x5
	.space 0x5 - (. - gText_Rom_5757E1)
	.endif
	@ Decoded text from ROM range: offset=0x5757E6, size=0x3
	.string "だれ$"
