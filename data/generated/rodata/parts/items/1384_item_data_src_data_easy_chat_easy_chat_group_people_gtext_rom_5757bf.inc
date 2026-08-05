	@ src/data/easy_chat/easy_chat_group_people.h:208 easy_chat_group_people_line_208
	.globl gText_Rom_5757BF
gText_Rom_5757BF: @ 0x085757BF
	.string "こども$"
	.if (. - gText_Rom_5757BF) > 0x4
	.error "gText_Rom_5757BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757BF) < 0x4
	.space 0x4 - (. - gText_Rom_5757BF)
	.endif
	@ Decoded text from ROM range: offset=0x5757C3, size=0x6
	.string "さま$"
	.string "さん$"
