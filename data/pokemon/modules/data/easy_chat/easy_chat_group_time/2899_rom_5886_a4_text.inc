	@ src/data/easy_chat/easy_chat_group_time.h:124 easy_chat_group_time_line_124
	.globl gText_Rom_5886A4
gText_Rom_5886A4: @ 0x085886A4
	.string "しゅうりょう{EOS}"
	.if (. - gText_Rom_5886A4) > 0x7
	.error "gText_Rom_5886A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5886A4) < 0x7
	.space 0x7 - (. - gText_Rom_5886A4)
	.endif
	.space 0x1, 0x00
