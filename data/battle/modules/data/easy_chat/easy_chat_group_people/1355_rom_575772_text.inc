	@ src/data/easy_chat/easy_chat_group_people.h:100 easy_chat_group_people_line_100 (+1 aliases)
	.globl gText_Rom_575772
gText_Rom_575772: @ 0x08575772
	.string "おばあさん{EOS}"
	.if (. - gText_Rom_575772) > 0x6
	.error "gText_Rom_575772 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575772) < 0x6
	.space 0x6 - (. - gText_Rom_575772)
	.endif

