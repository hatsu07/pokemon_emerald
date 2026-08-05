	@ src/data/easy_chat/easy_chat_group_people.h:328 easy_chat_group_people_line_328
	.globl gText_Rom_575811
gText_Rom_575811: @ 0x08575811
	.string "ボーイ$"
	.if (. - gText_Rom_575811) > 0x4
	.error "gText_Rom_575811 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575811) < 0x4
	.space 0x4 - (. - gText_Rom_575811)
	.endif
	@ Decoded text from ROM range: offset=0x575815, size=0x3
	.string "ボク$"
