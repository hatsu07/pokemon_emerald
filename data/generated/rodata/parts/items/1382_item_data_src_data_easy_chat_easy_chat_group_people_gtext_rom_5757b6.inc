	@ src/data/easy_chat/easy_chat_group_people.h:196 easy_chat_group_people_line_196
	.globl gText_Rom_5757B6
gText_Rom_5757B6: @ 0x085757B6
	.string "きょうだい$"
	.if (. - gText_Rom_5757B6) > 0x6
	.error "gText_Rom_5757B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5757B6) < 0x6
	.space 0x6 - (. - gText_Rom_5757B6)
	.endif
	@ Decoded text from ROM range: offset=0x5757BC, size=0x3
	.string "くん$"
