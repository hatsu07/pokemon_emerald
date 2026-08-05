	@ src/data/easy_chat/easy_chat_group_hobbies.h:142 easy_chat_group_hobbies_line_142
	.globl gText_Rom_57792A
gText_Rom_57792A: @ 0x0857792A
	.string "スポーツ$"
	.if (. - gText_Rom_57792A) > 0x5
	.error "gText_Rom_57792A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57792A) < 0x5
	.space 0x5 - (. - gText_Rom_57792A)
	.endif
