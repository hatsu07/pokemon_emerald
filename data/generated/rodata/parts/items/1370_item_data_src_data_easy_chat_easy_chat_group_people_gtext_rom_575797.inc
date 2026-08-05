	@ src/data/easy_chat/easy_chat_group_people.h:148 easy_chat_group_people_line_148
	.globl gText_Rom_575797
gText_Rom_575797: @ 0x08575797
	.string "かのじょ$"
	.if (. - gText_Rom_575797) > 0x5
	.error "gText_Rom_575797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575797) < 0x5
	.space 0x5 - (. - gText_Rom_575797)
	.endif
	@ Decoded text from ROM range: offset=0x57579C, size=0x6
	.string "かれ$"
	.string "きみ$"
