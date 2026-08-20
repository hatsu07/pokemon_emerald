	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_5C8C28
gText_Rom_5C8C28: @ 0x085C8C28
	.string "ちゃん{EOS}"
	.if (. - gText_Rom_5C8C28) > 0x4
	.error "gText_Rom_5C8C28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C28) < 0x4
	.space 0x4 - (. - gText_Rom_5C8C28)
	.endif

