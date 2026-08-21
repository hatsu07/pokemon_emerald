	@ src/data/easy_chat/easy_chat_group_people.h:112 easy_chat_group_people_line_112
	.globl gText_Rom_57577D
gText_Rom_57577D: @ 0x0857577D
	.string "おや{EOS}"
	.if (. - gText_Rom_57577D) > 0x3
	.error "gText_Rom_57577D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57577D) < 0x3
	.space 0x3 - (. - gText_Rom_57577D)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:118 easy_chat_group_people_line_118
	.globl gText_Rom_575780
gText_Rom_575780: @ 0x08575780
	.string "オヤジ{EOS}"
	.if (. - gText_Rom_575780) > 0x4
	.error "gText_Rom_575780 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575780) < 0x4
	.space 0x4 - (. - gText_Rom_575780)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:124 easy_chat_group_people_line_124
	.globl gText_Rom_575784
gText_Rom_575784: @ 0x08575784
	.string "おれさま{EOS}"
	.if (. - gText_Rom_575784) > 0x5
	.error "gText_Rom_575784 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575784) < 0x5
	.space 0x5 - (. - gText_Rom_575784)
	.endif
